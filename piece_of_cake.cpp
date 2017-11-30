#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		string i;
		int counter1=0,flag=0;
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
			if(counter1==i.length()/2)
				{
				    flag=1;
				    break;
				}
			else
			{
				counter1=0;
			}
		}
		if(flag==1)
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