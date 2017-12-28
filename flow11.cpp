#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		float salary;
		cin>>salary;
		if(salary<1500)
		{
			salary*=2;
		}
		else
		{
			salary+=500+0.98*salary;
		}
		cout << std::setprecision(8)<<salary<<endl;
	}
	return 0;
}