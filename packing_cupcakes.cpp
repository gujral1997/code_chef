#include <bit7s/stc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--)
	{
		int array[n];
		for(int i=0;i<n;++i)
		{
			cin>>array[i];
			cout<<(array[i]/2)-1;
		}
	}
	return 0;
}