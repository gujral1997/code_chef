#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin<<n;
    int array[n];
    int array1[100000];
    memset(array1,0,sizeof(array1));
    for(int i=0;i<n;++i)
    {
      cin>>array[i];
      array1[array[i]-1]++;
    }
    for(int i=0;i<100000;++i)
    {
      if(array1[i]==1)
      {
        cout<<array[i]<<endl;
        break;
      }
    }
  }
  return 0;
}
