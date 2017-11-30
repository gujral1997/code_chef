#include<bits/stdc++.h>
using namespace std;
typedef long long int lint;
int main(int argc, char const *argv[]) {
  lint t;
  cin>>t;
  while(t--)
  {
    lint n,k;
    cin>>n>>k;
    lint array[n+k],a,sum=0;
    memset(array,0,sizeof(array));
    for(int i=0;i<n;++i)
    {
      cin>>a;
      array[i]=a;
      sum+=array[i];
    }
    sum++;
    for(lint i=n;i<n+k;++i)
    {
      array[i]=sum;
      sum*=2;
    }
    if(array[n+k-1]%2==0)
    {
      cout<<"even"<<endl;
    }
    else{
      cout<<"odd"<<endl;
    }
  }
  return 0;
}
