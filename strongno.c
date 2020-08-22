#include<stdio.h>
#include<conio.h>
void main()
{
	int n,fact=1,sum=0,r,i,temp;
	printf("ENTER ANY NUMBER:\n");
	scanf("%d",&n);
	/*PROGRAM FOR STRONG NUMBER*/
	temp=n;
	while(n!=0)
	{
		fact=1;
		r=n%10;
		n=n/10;
		for(i=r;i>=1;i--)
		{
			fact=fact*i;
		}
		sum=fact+sum;
	}
	
	//SUM OF FACTORIAL OF DIGITS OF STRONG NUMBER IS EQUAL TO STRONG NUMBER
	if(temp==sum)
	{
		printf("%d IS A STRONG NUMBER",temp);
	}
	else
	printf("%d IS NOT A STRONG NUMBER",temp);
	getch();
}
