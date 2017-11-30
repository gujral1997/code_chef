#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  int array[n];
  int array1[100];
  memset(array1,0,sizeof(array1));
  for(int i=0;i<n;++i)
  {
    cin>>array[i];
    array1[array[i]]++;
  }
  int maxi=array1[0];
  for(int i=1;i<100;++i)
  {
    maxi=max(maxi,array1[i]);
  }
  cout<<n-maxi<<endl;
  return 0;
}
