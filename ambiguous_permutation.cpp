#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  while(1)
  {
      int n,flag=0;
      cin>>n;
      if(!n)
      {
        break;
      }
      int array[n],array1[n];
      for(int i=0;i<n;++i)
      {
        cin>>array[i];
        array1[array[i]-1]=i+1;
      }
      for(int i=0;i<n;++i)
      {
        if(array1[i]!=array[i])
        {
          flag=1;
          break;
        }
      }
      if(flag==1)
      {
        cout<<"not ambiguous"<<endl;
        flag=0;
      }
      else{
        cout<<"ambiguous"<<endl;
      }
  }
  return 0;
}
