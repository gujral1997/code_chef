#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t,flag=0;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int array[n];
    bool array1[7];
    memset(array1,false,sizeof(array1));
    for(int i=0;i<n;++i)
    {
      cin>>array[i];
      if(array[i]<1||array[i]>7)
      {
        flag=1;
      }
      else
      {
        array1[array[i]-1]=true;
      }
    }
    if(n<7)
    {
      flag=1;
    }
    for(int i=1;i<n;++i)
    {
      if(abs(array[i-1]-array[i])>1)
      {
        flag=1;
        break;
      }
    }
    for(int i=0;i<n;++i)
    {
      if(array[i]!=array[n-1-i])
      {
        flag=1;
        break;
      }
    }
    for(int i=0;i<7;++i)
    {
      if(array1[i]==false)
      {
        flag=1;
        break;
      }
    }
    if(!flag)
    {
      cout<<"yes"<<endl;
    }
    else{
      cout<<"no"<<endl;
    }
  }
  return 0;
}
