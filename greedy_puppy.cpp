#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int n,k,max=0;
    cin>>n>>k;
    for(int i=1;i<=k;++i)
    {
      if(n%i>max)
      {
        max=n%i;
      }
    }
    cout<<max<<endl;
  }
  return 0;
}
