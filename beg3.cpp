#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--)
	{
		int number;
		cin>>number;
		int sum=0;
		int check=5;
	    while(number/check!=0)
			{
				sum+=(number/check);
				check*=5;
			}
		cout<<sum<<endl;
	}
	return 0;
}