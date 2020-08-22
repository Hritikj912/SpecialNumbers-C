#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
int n,c, i,  a=0,b=1;
printf("Enter Number of pronic number series to print");
scanf("%d",&n);
printf("\nPronic numbers:");
while(i!=n)
{
	c=a*b;
	a++;
	b++;
	i++;
	printf("\n%d",c);
}
}


