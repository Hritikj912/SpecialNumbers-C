#include<stdio.h>
int static count=0;
main()
{
int n;
printf("Enter any number");
scanf("%d",&n);
Happy(n);
}

void Happy(int n1)
{	int r,s;
while(n1!=0)
{r=n1%10;
	n1=n1/10;
	s=s+r*r;
}
if(s==1)
{
	printf("Happy number");
}

else 
{
	 if(count>4)
printf("Not A Happy Number");

else 
	{ count++;	 	 
		Happy(s);
	}
}

}
