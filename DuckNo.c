#include<stdio.h>
void main()
{int count,r,flag=0;
	long long int n,n1,n2;
printf("ENTER ANY NUMBER:\n");
scanf("%lld",&n);
n1=n;
n2=n;
while(n!=0)
{
	n=n/10;
	count++;
}
while(count!=1)
{
	r=n1%10;
	if(r==0)
	{flag=1;break;
	}
	n1=n1/10;
	count--;
}
if(flag==0)
{
	printf("%lld IS NOT A DUCK NUMBER",n2);
}
else
printf("%lld IS A DUCK NUMBER",n2);
}
