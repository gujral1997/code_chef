#include <stdio.h>
#include <assert.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%i",&n);
	assert(n >= 1 && n <= 100);
			for (int i = 0; i<n; ++i)
			{
				int a;
				scanf("%i",&a);
				assert(a >= 7 && a <= 100);		    
				int arr[a];
				for(int j=0;j<a;j++)
					{
						scanf("%i",&arr[j]);
						assert(arr[j] >= 1 && arr[j] <= 100);
					}

				int flag=0;
				int k=0,l=a-1;
				while(k<=l)
				
						{
				
							if(arr[k]!=arr[l])
									{
										flag=1;
										break;
									}
						k++;
						l--;
							if(arr[k]-arr[k-1]>1)
							{
								flag=1;
								break;
							}
						}
				if(flag==1)
					{
						printf("no\n");
					}
				else
						{
							printf("yes\n");
						}
				flag=0;				
			}
	return 0;
}