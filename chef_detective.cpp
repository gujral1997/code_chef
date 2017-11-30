#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  int array[n];
  bool array1[n];
  memset(array1,false,sizeof(array1));
  for(int i=0;i<n;++i)
  {
    cin>>array[i];
    if(array[i]!=0)
    {
      array1[array[i]-1]=true;
    }
  }
  for(int i=0;i<n;++i)
  {
    if(!array1[i])
    {
      cout<<i+1<<" ";
    }
  }
  cout<<endl;
  return 0;
}
