#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int n,k,count=0;
    cin>>n;
    int array[n];
    for(int i=0;i<n;++i)
    {
      cin>>array[i];
    }
    cin>>k;
    int array1[k];
    for(int i=0;i<k;++i)
    {
      cin>>array1[i];
    }
    int j=0;
    for(int i=0;i<n&&j<=k;++i)
    {
      if(array[i]==array1[j])
      {
        ++j;
      }
    }
    if(j==k)
    {
      cout<<"Yes"<<endl;
    }
    else{
      cout<<"No"<<endl;
    }
  }
  return 0;
}
