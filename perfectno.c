#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,r,i,temp;
	printf("ENTER ANY NUMBER:\n");
	scanf("%d",&n);
	/*PROGRAM FOR PERFECT NUMBER*/
	temp=n;
	//PERFECT NO. IS A NUMBER SUM OF WHOSE DIVISORS EXCEPT NO. IS EQUALS TO NUMBER...
	while(n!=0)
	{
	    r=n-n/2;
		n=n/2;
		sum=(r)+sum;
	}
	if(temp==sum)
	printf("%d IS A PERFECT NUMBER",temp);
	else
	printf("%d IS NOT A PERFECT NUMBER",temp);
	getch();
}
