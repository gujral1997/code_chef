#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  int l=(n/2)*3;
  for(int i=1;i<=n;++i)
  {
    for(int j=0;j<l;++j)
    {
      if(j<=l/2-j||j>=l/2+j)
      {
        cout<<".";
      }
      else{
        cout<<"*";
      }
    }
    cout<<endl;
  }
  return 0;
}
