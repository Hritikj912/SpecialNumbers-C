#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n1,n,r,a=0,count=0,temp;
	printf("ENTER ANY NUMBER:\n");
	scanf("%d",&n);
	temp=n;
	n1=n;
	while(n1!=0)
	{	n1=n1/10;
	count++;
	}
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		a=pow(r,count)+a;
	}
	if(a==temp)
	{
		printf("%d IS A NARCISSITIC DECIMAL NUMBER",temp);
	}
	else
	printf("%d IS NOT A NARCISSITIC DECIMAL NUMBER",temp);
}
