#include<stdio.h>
void main()
{
	int n,k,i,j;
	printf("Enter numbers");
	scanf("%d%d",&n,&k);
	for(j=n+1;j<k;j++)
	{int count=0;
		for(i=1;i<=j;i++)
		{ 	
    		if(j%i==0)
    	{
    	count+=1;
		}}

	if(count==2)
	{
	printf("%d ",j);
    }
	
}
 
}
