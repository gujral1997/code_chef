#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int counter=0;
      string s1[4],s2[4];
      for(int i=0;i<4;++i)
      {
        cin>>s1[i];
      }
      for(int i=0;i<4;++i)
      {
        cin>>s2[i];
        for(int j=0;j<4;++j)
        {
          if(!s2[i].compare(s1.[j]))
          {
            counter++;
            break;
          }
        }
      }
      if(counter>=2)
      {
        cout<<"similar"<<endl;
      }
      else{
        cout<<"dissimilar"<<endl;
      }
  }
  return 0;
}
