#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  while(t--)
  {
    int n,v1,v2;
    cin>>n>>v1>>v2;
    float t1=(sqrt(2)*n)/v1,t2=(2.0*n)/v2;
    if(t1<t2)
    {
      cout<<"Stairs"<<endl;
    }
    else
    {
      cout<<"Elevator"<<endl;
    }
  }
  return 0;
}
