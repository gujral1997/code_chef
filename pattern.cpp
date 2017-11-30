#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  for(int i=1;i<=n;++i)
  {
    for(int j=1;j<=2*n-1;++j)
    {
      if(j==i||j==2*n-i)
      {
        cout<<i*i;
      }
      else{
        cout<<"*";
      }
    }
    cout<<endl;
  }
  for(int i=n-1;i>0;--i)
  {
    for(int j=1;j<=2*n-1;++j)
    {
      if(j==i||j==2*n-i)
      {
        cout<<i*i;
      }
      else{
        cout<<"*";
      }
    }
    cout<<endl;
  }
  return 0;
}
