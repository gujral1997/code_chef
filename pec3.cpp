#include <stdio.h>
#include <string.h>
#include<iostream>
#include<stack>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int counter=0;
    string s1,s2;
    cin>>s1>>s2;
    stack <char> st1;
    stack <char> st2;
    stack <char> st3;
    stack <char> st4;
    for(int i=s1.length()-1;i>=0;--i)
    {
      st1.push(s1.at(i));
      st4.push(s1.at(i));
    }
    for(int i=s2.length()-1;i>=0;--i)
    {
      st2.push(s2.at(i));
    }
    for(int i=0;i<s2.length();++i)
    {
      st3.push(s2.at(i));
    }
    while(!st1.empty())
    {
      if(st1.top()==st2.top())
      {
        counter++;
        st1.pop();
        st2.pop();
        if(st1.empty()||st2.empty())
        {
          break;
        }
      }
      else
      {
        st1.pop();
        if(st1.empty())
        {
          break;
        }
      }
    }
    while(!st4.empty())
    {
      if(st4.top()==st3.top())
      {
        counter++;
        st4.pop();
        st3.pop();
        if(st4.empty()||st3.empty())
        {
          break;
        }
      }
      else
      {
        st4.pop();
        if(st4.empty())
        {
          break;
        }
      }
    }
    if(counter==2*s2.length())
    {
      cout<<"GOOD STRING"<<endl;
    }
    else
    {
      cout<<"BAD STRING"<<endl;
    }
  }
  return 0;
}
