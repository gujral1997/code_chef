#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int count=0,state=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();++i)
    {
      if(s.at(i)=='C')
      {
        count++;
      }
      else
      {
        state=i;
        break;
      }
    }
    for(int i=state;i<s.length();++i)
    {
      if(s.at(i)=='E')
      {
        count++;
      }
      else
      {
        state=i;
        break;
      }
    }
    for(int i=state;i<s.length();++i)
    {
      if(s.at(i)=='S')
      {
        count++;
      }
      else
      {
        break;
      }
    }
    if(count==s.length())
    {
      cout<<"yes"<<endl;
    }
    else{
      cout<<"no"<<endl;
    }
  }
  return 0;
}
