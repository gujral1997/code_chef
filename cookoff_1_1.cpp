#include<bits/stdc++.h>
using namespace std;
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    int array[n];
    for(int i=0;i<n;++i)
    {
      cin>>array[i];
    }
    qsort(array,n,sizeof(int),compare);
    int answer=(n+k)/2;
    cout<<array[answer]<<endl;
  }
  return 0;
}
