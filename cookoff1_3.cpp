#include<bits/stdc++.h>
using namespace std;
typedef long long int lint;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    lint y,counter=0;
    cin>>y;
    if(y>700)
    {
      counter=sqrt(y-700)
    for(int i=1;i<700;++i)
    {
      if(sqrt(y-i)*sqrt(y-i))
    }

    }
    else if(y>1&&y<=700)
    {
      for(int i=1;i<=700;++i)
      {
        for(int j=1;;++j)
        {
          if(j*j+i<=y)
          {
            counter++;
          }
          else
          {
            break;
          }
        }
      }

    }

    cout<<counter<<endl;
  }
  return 0;
}
