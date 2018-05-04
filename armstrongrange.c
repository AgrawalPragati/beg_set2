#include<stdio.h>
#include<math.h>
void main()
{
	int n,temp,p,a,b;
	scanf("%d%d",&a,&b);
	for(n>a;n<b;n++)
	{
	temp=n;
	p=n;
	int count=0,rem=0,sum=0;
	while(temp!=0)
	{
	count++;
	temp=temp/10;	
	}
	while(p!=0)
	{
	rem=p%10;
    sum=sum+pow(rem,count);
	p=p/10;	
	}
	if(sum==n)
	{
		printf("%d\n" ,sum);
	}
	sum=0;
}}
