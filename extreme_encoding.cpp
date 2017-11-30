#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int array1[n],array2[n];
    for(int i=0;i<n;++i)
    {
      long long int=a;
      cin>>a;
      array2[i]=a&(pow(2,17)-1);
      array[i]=a>>16;
    }
    for(int i=0;i<n;++i)
    {
      cout<<array1[i]<<" ";
    }
    for(int i=0;i<n;++i)
    {
      cout<<array2[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
