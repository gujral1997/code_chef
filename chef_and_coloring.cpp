#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int array[3];
    memset(array,0,sizeof(array));
    while(n--)
    {
      char a;
      cin>>a;
      if(a=='R')
      {
        array[0]++;
      }
      if(a=='G')
      {
        array[1]++;
      }
      if(a=='B')
      {
        array[2]++;
      }
    }
    for(int i=1;i<3;++i)
    {
      if(array[0]<array[i])
      {
        swap(array[0],array[i]);
      }
    }
    int ans=array[1]+array[2];
    cout<<ans<<endl;
  }
  return 0;
}
