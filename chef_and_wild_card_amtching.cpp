#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int flag=0;
		string a,b;
		cin>>a>>b;
		for(int i=0;i<a.length();++i)
		{
			if(!(a.at(i)=='?'||b.at(i)=='?'||a.at(i)==b.at(i)))
			{
				flag=1;
			}
		}
		if(flag==1)
		{
			cout<<"No"<<endl;
		}
		else
		{
			cout<<"Yes";
		}
	}
	return 0;
}
