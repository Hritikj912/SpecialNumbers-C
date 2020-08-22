#include<stdio.h>
#include<math.h>
main()
{
int n;
printf("Enter any number");
scanf("%d",&n);
UnHappy(n);
}

void UnHappy(int n1)
{	int count=0,r,s=0,n,n2;
n=n1;
n2=n;
printf("%d",n2);
while(n1!=0)
{count++;
	n1=n1/10;
}
while(n!=0)
{
	r=n%10;
	s=s+pow(r,count);
	count--;
}
printf("%d\n",s);
if(s==n2)
printf("Disarium Number");
else
printf("Not A Disarium Number");
}
 
