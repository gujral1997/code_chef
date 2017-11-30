#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int n,xodd=0,xeven=0,yodd=0,yeven=0;
    cin>>n;
    int array1[n],array2[n];
    for(int i=0;i<n;++i)
    {
      cin>>array1[i];
      if(i%2==0)
      {
        xeven+=array1[i];
      }
      else
      {
        xodd+=array1[i];
      }
    }
    for(int i=0;i<n;++i)
    {
      cin>>array2[i];
      if(i%2==0)
      {
        yeven+=array2[i];
      }
      else
      {
        yodd+=array2[i];
      }
    }
    long long int sum1,sum2;
    sum1=xodd+yeven;
    sum2=yodd+xeven;
    if(sum1<sum2)
    {
      cout<<sum1<<endl;
    }
    else{
      cout<<sum2<<endl;
    }

  }
  return 0;
}
