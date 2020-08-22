#include<stdio.h>
void main()
{
	long int n1,n2;
	int i,s1=0,s2=0;
	printf("*****PROGRAM TO FIND AMICABLE NUMBERS*****\n");
	printf("ENTER ANY TWO NUMBERS\n");
	scanf("%ld",&n1);
	scanf("%ld",&n2);
for(i=1;i<n1;i++)
{
	if(n1%i==0)
	{
		s1=s1+i;
	}
}
for(i=1;i<n2;i++)
{
	if(n2%i==0)
	{
		s2=s2+i;
	}
}
	if(s2==n1&&s1==n2)
	{
		printf("\n%d & %ld ARE AMICABLE NUMBERS",n1,n2);
	}
	else
		printf("\n%d & %ld ARE NOT AMICABLE NUMBERS",n1,n2);
}
