#include<bits.stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int count_a=0,count_b=0;
		for(int i=0;i<s.length();++i)
		{
			if(s.at(i)=='a')
			{
				count_a++;
			}
			else if(s.at(i)=='b')
			{
				count_b++;
			}
		}
		if(count_b>count_a)
		{
			cout<<count_a<<endl;
		}
		else
		{
			cout<<count_b<<endl;
		}
	}
	return 0;
}