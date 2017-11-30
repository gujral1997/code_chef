#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int enemy=0,me=0,flag=0,count=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();++i)
    {
      if(s.at(i)=='0')
      {
        enemy++;
        if(enemy==11)
        {
          cout<<"LOSE"<<endl;
          break;
        }
      }
      else{
        me++;
        if(me==11)
        {
          cout<<"WIN"<<endl;
          break;
        }
      }
      if(enemy==me&&enemy==10)
      {
        flag=1;
        count=i+1;
        break;
      }
    }
    if(flag)
    {
      for(int i=count;i<s.length();++i)
      {
        if(s.at(i-1)==s.at(i))
        {
          if(s.at(i)=='0')
          {
            cout<<"LOSE"<<endl;
            break;
          }
          else{
            cout<<"WIN"<<endl;
            break;
          }
        }
      }
    }
  }
  return 0;
}
