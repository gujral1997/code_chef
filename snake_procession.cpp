#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int n,flag=0;
    cin>>n;
    char array[n];
    stack <char> st;
    for(int i=0;i<n;++i)
    {
      cin>>array[i];
      if(array[i]=='H'||array[i]=='T')
      {
        st.push(array[i]);
      }
    }
    if(!st.empty()&&st.top()=='T')
    {
      while(!st.empty())
      {
        if(st.top()=='T')
        {
          st.pop();
          if(st.empty())
          {
            flag=1;
            break;
          }
        }
        else{
          flag=1;
          break;
        }
        if(st.top()=='H')
        {
          st.pop();
          if(st.empty())
          {
            break;
          }
        }
        else{
          flag=1;
          break;
        }
    }
  }
    else if(st.empty())
    {
      flag=0;
    }
    else{
      flag=1;
    }
    if(flag==1)
    {
      cout<<"Invalid"<<endl;
    }
    else{
      cout<<"Valid"<<endl;
    }
  }
  return 0;
}
