#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i=0;
		cin>>n;
		string s[n];
		while(n--)
		{
			cin>>s[i];
			++i;
		}
		int a=sizeof(s)/sizeof(s[0]);
		sort(s,s+a);
		if(i%2==0)
		{
			if(s[i/2]!=s[(i/2)-1])
			{
				cout<<"Draw"<<endl;
			}
			else
			{
				cout<<s[(i/2)-1]<<endl;
			}
		}
		else
		{
			cout<<s[i/2]<<endl;
		}
	}
	return 0;
}