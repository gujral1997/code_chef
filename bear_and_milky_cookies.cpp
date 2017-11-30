#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int n,flag=0;
    cin>>n;
    string array[n];
    for(int i=0;i<n;++i)
    {
      cin>>array[i];
    }
    for(int i=0;i<n;++i)
    {
      if(array[i]=="cookie")
      {
      if(array[i+1]!="milk")
      {
        flag=1;
        cout<<"NO"<<endl;
        break;
      }
      }
    }
    if(!flag)
    {
      cout<<"YES"<<endl;
    }
  }
  return 0;
}
