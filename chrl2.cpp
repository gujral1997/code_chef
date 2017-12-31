#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int ans=0,count=0,ans2=0;
	string s;
	cin>>s;
	while(1)
	{
		for(int i=0;i<s.length();++i)
	{
		if(s.at(i)=='C'&&count==0)
		{
			count++;
			s.at(i)=' ';
		}
		else if(s.at(i)=='H'&&count==1)
		{
			count++;
			s.at(i)=' ';
		}
		else if(s.at(i)=='E'&&count==2)
		{
			count++;
			s.at(i)=' ';
		}
		else if(s.at(i)=='F'&&count==3)
		{
			count=0;
			s.at(i)=' ';
			ans++;
		}
	}
	if(ans2==ans)
	{
		break;
	}
	else
	{
		ans2=ans;
	}
	count=0;
	}
	
	cout<<ans<<endl;
	return 0;
}