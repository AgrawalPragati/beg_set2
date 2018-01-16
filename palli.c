#include<stdio.h>
void main()
{
	int n,orig,reverse=0,rem;
	scanf("%d",&n);
	orig=n;
	while(n!=0)
	{
		rem=n%10;
		reverse=reverse*10+rem;
		n=n/10;
	}
	if(reverse==orig)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
 }
	
 

