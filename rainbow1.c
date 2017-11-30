#include <stdio.h>
int main(int argc, char const *argv[])
{
				int a;
				scanf("%i",&a);
				int arr[a];
				for(int j=0;j<a;j++)
					{
						scanf("%i",&arr[j]);
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
							if(arr[k]-arr[k-1]!=1 && arr[k]!=arr[k-1])
							{
								flag=1;
								break;
							}
						k++;
						l--;
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

	return 0;
}