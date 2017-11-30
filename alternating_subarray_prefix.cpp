#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;++i)
    {
      cin>>array[i];
    }
    for(int i=1;i<=n;++i)
    {
      for(int j=i;j<=n;++j)
      {
        if((array[j]>0&&array[j+1]>0)||(array[j]<0&&array[j+1]<0))
        {
          cout<<i-j+1<<" ";
          break;
        }
        if(j==n)
        {
          cout<<1;
        }
      }
    }
    cout<<endl;
  }
  return 0;
}
