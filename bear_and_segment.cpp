#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int counter=0;
    string s;
    cin>>s;
    stack <char> st;
    for(int i=0;i<s.length();++i)
    {
      st.push(s.at(i));
    }
    while(!st.empty())
    {
      if(st.top()=='1')
      {
        while(st.top()!='0'&&!st.empty())
        {
            st.pop();
            if(st.empty())
            {
              break;
            }
        }
        counter++;
      }
      if(st.empty())
      {
        break;
      }
    if(st.top()=='0')
      {
        while(st.top()!='1'&&!st.empty())
        {
          st.pop();
          if(st.empty())
          {
            break;
          }
        }
      }
    }
    if(counter==1)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
