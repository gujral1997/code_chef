#include<bits/stdc++.h>
using namespace std;
typedef long long int lint;
lint gcd(lint a,lint b)
{
	lint max=(a>b)?a:b;
	lint min=(a<b)?a:b;
	while(max%min!=0)
	{
		lint min1=min;
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
		lint l,b;
		cin>>l>>b;
		lint ans=gcd(l,b);
		lint area=l*b;
		cout<<area/(ans*ans)<<endl;
	}
	return 0;
}