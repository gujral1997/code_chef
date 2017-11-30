#include<bits/stdc++.h>
using namespace std;
typedef long long int lint;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    lint a,b;
    cin>>a>>b;
    if(a%2==0)
    {
      if(b==a-2||b==a+2||b==a-1)
      {
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    else{
      if(b==a+1||b==a-2||b==a+2)
      {
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
  }
  return 0;
}
