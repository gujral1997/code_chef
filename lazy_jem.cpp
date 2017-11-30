#include<bits/stdc++.h>
using namespace std;
int check(int n)
{
	if(n%2==0)
	{
		return n/2;
	}
	else{
		return (n+1)/2;
	}
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,b,m;
		cin>>n>>b>>m;
		int total_time=0;
		while(n!=0)
		{
			for(int i=0;i<check(n);++i)
			{
				total_time+=m;
			}
			n-=check(n);
			m*=2;
		}
		cout<<total_time+b<<endl;
	}
	return 0;
}