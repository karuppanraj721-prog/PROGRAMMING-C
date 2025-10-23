#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=arr[0],min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		else
		{
			min=arr[i];
		}
	}
	printf("Maximum : %d\n",max);
	printf("Minimum : %d",min);
	return 0;
}
