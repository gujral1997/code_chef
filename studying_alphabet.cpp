#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string s;
  cin>>s;
  int t;
  cin>>t;
  while(t--)
  {
    int flag=0;
    string s1;
    cin>>s1;
    for(int i=0;i<s1.length();++i)
    {
      if(s.find(s1.at(i))==string::npos)
      {
        flag=1;
        break;
      }
    }
    if(flag)
    {
      cout<<"No"<<endl;
    }
    else{
      cout<<"Yes"<<endl;
    }
  }
  return 0;
}
