#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int n,flag=0,counter=0;
    cin>>n;
    int array[n],array1[n];
    memset(array1,0,sizeof(array1));
    for(int i=0;i<n;++i)
    {
      cin>>array[i];
      if(array[i]<=n)
      {
        array1[array[i]-1]++;
      }
    }
    for(int i=0;i<n;++i)
    {
      if(array1[i]!=1)
      {
        flag=1;
        break;
      }
      if(array[i]==i+1)
      {
        counter++;
      }
    }
    if(counter==n)
    {
      flag=1;
    }
    if(flag)
    {
      cout<<"no"<<endl;
    }
    else{
      cout<<"yes"<<endl;
    }
  }
  return 0;
}
