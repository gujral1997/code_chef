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
    int max=0;
    for(int i=0;<n;++i)
    {
      cin>>array[i];
      if(array[i]>max)
      {
        max=array[i];
      }
    }
    int max2=0;
    for(int i=0;<n;++i)
    {
      if(array[i]>max1&&array[i]!=max)
      {
        max1=array[i];
      }
    }
    cout<<max+max1<<endl;
  }
  return 0;
}
