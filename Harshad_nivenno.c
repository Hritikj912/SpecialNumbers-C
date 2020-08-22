#include<stdio.h>
#include<math.h>
main()
{
int n;
printf("Enter any number");
scanf("%d",&n);
	int n2,s=0,r;
	n2=n;
	while(n2!=0)
	{
		r=n2%10;
		n2=n2/10;
		s=s+r;
	}
	if(n%s==0)
	printf("\n%d IS A HARSHAD NUMBER",n);
	else
	 printf("\n%d IS NOT A HARSHAD NUMBER",n);

}
    
    
