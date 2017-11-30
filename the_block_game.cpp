#include <bits/stdc++.h>
uisng namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--)
	{
		int a;
		cin>>a;
		int sum=0,test=a; 
		while(test!=0)
		{
			sum*=10;
			sum+=test%10;
			test/=10;
		}
		if(sum==a)
		{
			cout<<"wins";
		}
		else
		{
			cout<<"losses";
		}
	}	
	return 0;
}