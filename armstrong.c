#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,a=0,temp;
	/*PROGRAM FOR ARMSTRONG NUMBER*/
	printf("ENTER ANY NUMBER:\n");
	scanf("%d",&n);
	//SUM OF CUBES OF DIGITS OF ARMSTRONG NUMBER IS EQUAL TO ARMSTRONG NUMBER
	temp=n;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		a=r*r*r+a;
	}
	if(a==temp)
	{
		printf("%d IS AN ARMSTRONG NUMBER",temp);
	}
	else
	printf("%d IS NOT AN ARMSTRONG NUMBER",temp);
}
