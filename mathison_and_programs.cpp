#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int array1[26];
    string s;
    bool array2[26];
    memset(array2,false,sizeof(array2));
    for(int i=0;i<26;++i)
    {
      cin>>array1[i];
    }
    cin>>s;
    for(int i=0;i<s.length();++i)
    {
      array2[s.at(i)-'a']=true;
    }
    int sum=0;
    for(int i=0;i<26;++i)
    {
      if(!array2[i])
      {
        sum+=array1[i];
      }
    }
    cout<<sum<<endl;
  }
  return 0;
}
