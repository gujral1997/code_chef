#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p;
		cin>>n>>p;
		while(n--)
		{
			int a,counter_hard=0,counter_cake=0;
			cin>>a;
			if(a<=p/10)
			{
				counter_hard++;
			}
			else if(a>=p/2)
			{
				counter_cake++;
			}
		}
		if(counter_cake==1&&counter_hard==2)
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
	}
	return 0;
}