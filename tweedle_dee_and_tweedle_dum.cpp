#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,even=0,odd=0;
    string s;
    cin>>n>>s;
    while(n--)
    {
      int a;
      cin>>a;
      if(a%2==0)
      {
        even++;
      }
      else{
        odd++;
      }
    }
    if(even==1&&odd==0&&s=="Dee")
    {
      cout<<"Dee"<<endl;
    }
    else
    {
      cout<<"Dum"<<endl;
    }
  }
  return 0;
}
