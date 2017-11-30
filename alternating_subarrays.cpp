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
      int array[i];
    }
    int counter=1;
    for(int i=1;i<n;++i)
    {
      if(array[i]*array[i-1]>=0)
      {
        cout<<counter<<" ";
        if(i!=n-1)
        {
          i=i-counter+1;
        }
      }
      else
      {
        counter++;
      }
    }
    cout<<1<<endl;
  }
  return 0;
}
