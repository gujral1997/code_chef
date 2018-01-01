#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		std::vector<string> v;
		char a=' ';
		string s;
		while(a!='\n')
		{
			cin>>s;
			v.push_back(s);
			a=cin.get();
		}
		for(int i=0;i<v.size()-1;++i)
		{
			if(v[i].at(0)>='a')
			{
				cout<<char(v[i].at(0)-32)<<'.'<<' ';
			}
			else
			{
				cout<<char(v[i].at(0))<<'.'<<' ';
			}
		}
		if(v[v.size()-1].at(0)>='a')
			{
				cout<<char(v[v.size()-1].at(0)-32);
			}
			else
			{
				cout<<char(v[v.size()-1].at(0));
			}
		string s1=v[v.size()-1];
		for(int i=1;i<s1.length();++i)
		{
			if(s1.at(i)<'a')
			{
				cout<<char(s1.at(i)+32);
			}
			else
			{
				cout<<char(s1.at(i));
			}
		}
		cout<<endl;
	}
	return 0;
}