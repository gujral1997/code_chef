#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int sum=0;
		while(3--)
		{
			int a;
			cin>>a;
			if(a==0)
			{
				sum=181;
				break;
			}
			sum+=a;
		}
		if(sum==180)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}