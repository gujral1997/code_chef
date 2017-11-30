#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,time,sum=0;
		cin>>n>>time;
		while(n--)
		{
			int a,b;
			cin>>a>>b;
			if(time==0)
			{
				sum+=a*b;
			}
			if(time>0)
			{
				time-=a;
			}
			if(time<0)
			{
				sum+=abs(time)*b;
				time=0;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}