#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b)
{
	int max=(a>b)?a:b;
	int min=(a<b)?a:b;
	for(int i=max;i<=a*b;i+=max)
	{
		if(i%min==0)
		{return i;}
	}
}
int gcd(int a,int b)
{
	int min=(a<b)?a:b;
	int max=(a>b)?a:b;
	while(max%min!=0)
	{
		int min1=min;
		min=max%min;
		max=min1;
	}
	return min;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
	}
	return 0;
}