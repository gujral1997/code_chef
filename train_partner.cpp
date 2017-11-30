#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int a;
    cin>>a;
    int i=a/8;
    a%=8;
    if(a==0)
    {
      a+=8;
    }
    switch(a)
    {
      case 1:
      cout<<4+8*i<<"LB"<<endl;
      break;
      case 2:
      cout<<5+8*i<<"MB"<<endl;
      break;
      case 3:
      cout<<6+8*i<<"UB"<<endl;
      break;
      case 4:
      cout<<1+8*i<<"LB"<<endl;
      break;
      case 5:
      cout<<2+8*i<<"MB"<<endl;
      break;
      case 6:
      cout<<3+8*i<<"UB"<<endl;
      break;
      case 7:
      cout<<8*(i+1)<<"SU"<<endl;
      break;
      case 8:
      cout<<7+8*(i-1)<<"SL"<<endl;
      break;
    }
  }
  return 0;
}
