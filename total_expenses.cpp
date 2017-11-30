#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  scanf("%i",&t);
  while(t--)
  {
    float q,p;
    scanf("%f %f",&q,&p);
    double answer=p*q*1.0;
    if(q>1000.0)
    {
      printf("%.6f\n",answer-answer/10);
    }
    else{
      printf("%.6f\n",answer);
    }
  }
  return 0;
}
