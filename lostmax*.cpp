#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		vector <int> v;
		char a=' ';
		int n;
		while(a!='\n')
		{
			cin>>n;
			v.push_back(n);
			a=cin.get();
		}
		sort(v.begin(),v.end(),greater<int>());
		if(v[0]==v.size()-1)
		{
			cout<<v[1]<<endl;
		}
		else
		{
			cout<<v[0]<<endl;
		}
	}
	return 0;
}