#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  while(n--)
  {
    int countera=0,counterb=0,counteras=0,counterbs=0;
    string s;
    cin>>s;
    stack <char> st;
    for(int i=s.length()-1;i>=0;--i)
    {
      st.push(s.at(i));
    }
    while(!st.empty())
    {
      if(st.top()=='A'&&!st.empty())
      {
        st.pop();
        countera++;
        if(st.empty())
        {
          break;
        }
        while(st.top()=='.'&&!st.empty())
        {
          counteras++;
          st.pop();
          if(st.empty())
          {
            break;
          }
        }
        if(st.top()=='A')
        {
          countera+=(counteras+1);
        }
        counteras=0;
      }
      if(st.top()=='B'&&!st.empty())
      {
        st.pop();
        counterb++;
        if(st.empty())
        {
          break;
        }
        while(st.top()=='.'&&!st.empty())
        {
          counterbs++;
          st.pop();
          if(st.empty())
          {
            break;
          }
        }
        {
          if(st.top()=='B')
          counterb+=(counterbs+1);
        }
        counterbs=0;
      }
      if(st.top()=='.')
      {
        while(st.top()=='.'&&!st.empty())
        {
          st.pop();
          if(st.empty())
          {
            break;
          }
        }
      }
    }
    cout<<countera<<" "<<counterb<<endl;
  }
  return 0;
}
