#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;
typedef long long int lint;
lint sum(lint a)
{
  return (a*(a+1))/2;
}
int main(int argc, char const *argv[]) {
  lint n,i=0,flag=0;
  cin>>n;
  while(sum(i)<=n)
  {
    i++;
  }
  lint array[i];
  for(int j=1;j<=i;j++)
  {
    array[j-1]=sum(j);
  }
  for(int j=0;j<i;++j)
  {
    lint count=n-array[j];
    for(int k=0;k<i;++k)
    {
      if(count==array[k])
      {
        flag=1;
        break;
      }
    }
    if(flag)
    {
      break;
    }
  }
  if(flag)
  {
    cout<<"YES"<<endl;
    flag=0;
  }
    else{
      cout<<"NO"<<endl;
    }

  return 0;
}
