#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int count_0=0,count_1=0;
		for(int i=0;i<s.length();++i)
		{
			if(s.at(i)=='0')
			{
				count_0++;
			}
			else
			{
				count_1++;
			}
		}
		if(count_0==1||count_1==1)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}