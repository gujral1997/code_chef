#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int count=0;
    string s;
    cin>>s;
    if(s.length()>2)
    {
      for(int i=0;i<s.length();++i)
      {
        for(int j=i+1;j<s.length()-i;++j)
        {
          if((s.at(i+1)==s.at(j-1))&&(s.at(i)==s.at(j)))
          {
            count++;
          }
        }
      }
    }
    else if(s.length()==2)
    {
      for(int i=1;i<s.length();++i)
      {
        if(s.at(i-1)==s.at(i))
        {
          count++;
        }
      }
    }
    cout<<count<<endl;
  }
  return 0;
}
