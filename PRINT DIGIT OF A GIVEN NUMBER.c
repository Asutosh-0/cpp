//C Program to Print all digits of a given number
#include<stdio.h>
int main()
{
	int n,rem,rev=0,s;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	
	}
	
	while(rev!=0)
	{
	rem=rev%10;
	printf("rem = %d",rem);
	rev=rev/10;
	}
	return 0;
}
