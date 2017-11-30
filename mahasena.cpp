#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	while(n--)
	{
		int a,odd=0,even=0;
		cin>>a;
		while(a--)
		{
			int input;
			cin>>input;
			if(input%2==0)
			{
				even+=input;
			}
			else
			{
				odd+=input;
			}
		}
		if(even>odd)
		{
			cout<<"READY FOR BATTLE";
		}
		else
		{
			cout<<"NOT READY";
		}
	}
	return 0;
}