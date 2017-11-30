#include<bits/stdc++.h>
using namepace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int r,c;
    cin>>r>>c;
    int ans=r*c;
    if(ans%2==0)
    {
      cout<<"Yes"<<endl;
    }
    else{
      cout<<"No"<<endl;
    }
  }
  return 0;
}
