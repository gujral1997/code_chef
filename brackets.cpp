#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int counter=0;
		int max_counter=0;
		string s;
		cin>>s;
		for(int i=0;i<s.length();++i)
		{
			if(s.at(i)=='(')
			{
				counter++;
			}
			else if(s.at(i)==')')
			{
				counter--;
			}
			max_counter=max(counter,max);
		}
		for(int i=0;i<max_counter;++i)
		{
			cout<<"(";
		}
		for(int i=0;i<max_counter;++i)
		{
			cout<<")";
		}
		cout<<endl;
	}
	return 0;
}