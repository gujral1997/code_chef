#include<bits/stdc++.h>
using namespace std;
typedef long long int lint;
int main(int argc, char const *argv[]) {
  lint n,q;
  cin>>n>>q;
  lint array[n];
  for(int i=0;i<n;++i)
  {
    cin>>array[i];
  }
  int max=array[0],min=array[0];
  for(int i=0;i<n;++i)
  {
    if(max<array[i])
    {
      max=array[i];
    }
    if(min>array[i])
    {
      min=array[i];
    }
  }
  while(q--)
  {
    int a;
    cin>>a;
    if(a>=min&&a<=max)
    {
      cout<<"Yes"<<endl;
    }
    else
    {
      cout<<"No"<<endl;
    }
  }
  return 0;
}
