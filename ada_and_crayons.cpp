#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  cin>>t;
  while(t--)
  {
    int countd=0,countu=0;
    string s;
    cin>>s;
    stack <char> st;
  for(int i=0;i<s.length();++i)
    {
      st.push(s.at(i));
    }
    while(!st.empty())
    {
      if(st.top()=='U')
      {
        countu++;
        while(st.top()=='U'&&!st.empty())
        {
          st.pop();
          if(st.empty())
          {
            break;
          }
        }
      }
      if(st.empty())
      {
        break;
      }
      if(st.top()=='D')
      {
        countd++;
        while(st.top()=='D'&&!st.empty())
        {
          st.pop();
          if(st.empty())
          {
            break;
          }
        }
      }
    }
    if(countd<=countu)
    {
      cout<<countd<<endl;
    }
    else
    {
      cout<<countu<<endl;
    }
  }
  return 0;
}
