#include<stdio.h>
void main()
{
	int n,k,i;
	printf("Enter elements");
	scanf("%d%d",&n,&k);
	for(i=n+1;i<k;i++)
	{
    if(i%2==0)
	printf("%d ",i);
	}
}
