#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();++i)
    {
      if(s1.at(i)==s2.at(i))
      {
        if(s1.at(i)=='W')
        {
          cout<<'B';
        }
        else
        {
          cout<<'W';
        }
      }
      else
      {
        cout<<'B';
      }
    }
    cout<<endl;
  }
  return 0;
}
