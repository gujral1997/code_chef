#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int flag=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();++i)
    {
      for(int j=0;j<s.length();++j)
      {
        if(s.at(i)==s.at(j)&&i!=j)
        {
          flag=1;
        }
      }
    }
    if(flag==1)
    {
      cout<<"yes"<<endl;
    }
    else
    {
      cout<<"no"<<endl;
    }
  }
  return 0;
}
