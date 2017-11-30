#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string s;
  int count=0,counta=0;
  cin>>s;
  stack <char> st;
  for(int i=0;i<s.length();++i)
  {
    st.push(s.at(i));
  }
  while(!st.empty())
  {
    if(st.top()=='a'&&(count==0||count==2))
    {
      count++;
      while(st.top()=='a')
      {
        st.pop();
        if(st.empty())
        {
          break;
        }
      }
    }
    else if(st.top()=='b'&&(count==1))
    {
      count++;
      while(st.top()=='b')
      {
        st.pop();
        if(st.empty())
        {
          break;
        }
      }
    }
    else
    {
      st.pop();
      counta++;
      if(st.empty())
      {
        break;
      }
    }
  }
  cout<<s.length()-counta<<endl;
  return 0;
}
