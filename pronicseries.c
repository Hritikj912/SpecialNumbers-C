#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
int n,c, i,  a=0,b=1;
printf("Enter limit for pronic number series");
scanf("%d",&n);
printf("\nPronic numbers:");
while(c<=n)
{
	c=a*b;
	a++;
	b++;if(c<=n)
	printf("\n%d",c);
	else
	exit(0);
}
}
