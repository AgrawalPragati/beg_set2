#include<stdio.h>
void main()
{
	int n,count=0,i;
	printf("Enter element");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    if(n%i==0)
    {
    	count+=1;
	}
	if(count==2){
	printf("Yes");
}
 else
 {
 	 printf("No");
 }
	
 
}
