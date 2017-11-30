#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    long long int n,sum=0,count=1;
    cin>>n;
    long long int array[n];
    for(int i=0;i<n;++i)
    {
      cin>>array[i];
    }
    for(int i=1;i<n;++i)
    {
      if(array[i]<array[i-1])
      {
        sum=sum+(count*(count+1))/2;
        count=1;
      }
      else{
        count++;
      }
    }
    sum=sum+(count*(count+1))/2;
    cout<<sum<<endl;
  }
  return 0;
}
