#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int flag=0;
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()>=2||s2.length()>=2)
    {
      for(int i=0;i<s1.length();++i)
      {
        for(int j=0;j<s2.length();++j)
        {
          if(s2.at(j)==s1.at(i))
          {
            flag=1;
          }
        }
      }
    }
    if(flag==1)
    {
      cout<<"Yes"<<endl;
    }
    else
    {
      cout<<"No"<<endl;
    }
  }
  return 0;
}
