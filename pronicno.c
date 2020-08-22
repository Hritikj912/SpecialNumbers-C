#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
int n,c,i=0,j, flag=0;
printf("Enter any number\n");
scanf("%d",&n);
while(i!=n/2)
{
 if(i*(i+1)==n)
	{
		flag=1;
		j=i;
  }
  i++;
}
if(flag==1)
printf("\n%d is a pronic number since %d*%d=%d",n, j,j+1,n);
else

printf("\n%d is not a pronic number",n) ;
}
