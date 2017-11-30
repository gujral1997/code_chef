#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int n=t;
	while(t--)
	{
		string i,counter1=-1;
		cin>>i;
		for(int j=0;j<i.length();j++)
		{
			for(int k=0;k<i.length();k++)
			{
				if(i.at(k)==i.at(j))
				{
					counter1++;
				}
			}
		}
		if(counter1==(i.length()-counter1))
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