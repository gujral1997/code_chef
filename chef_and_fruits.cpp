#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int n,m,k;
    cin>>n>>m>>k;
    while(k--)
    {
      if(m>=n)
      {
        m--;
      }
      else{
        n--;
      }
    }
    cout<<abs(m-n)<<endl;
  }
  return 0;
}
