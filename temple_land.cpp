#include<bits/stdc++.h>
using namespace std;
int func(int n)
{
  if(n%2==0)
  {
    return n/2;
  }
  else
  {
    return ((n+1)/2);
  }
}
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int n,flag=0,flag1=0;
    cin>>n;
    int array[n];
    for(int i=0;i<n;++i)
    {
      cin>>array[i];
      if(i>0)
      {
        if(abs(array[i]-array[i-1])!=1)
        {
          flag=1;
        }
      }
    }
    int j=1;
    for(int i=0;i<func(n);++i)
    {
      if(array[i]!=array[n-1-i]||array[i]!=j++)
      {
        flag1=1;
      }
    }
    if(flag==0&&flag1==0)
    {
      cout<<"yes"<<endl;
    }
    else{
      cout<<"no"<<endl;
    }
  }
  return 0;
}
