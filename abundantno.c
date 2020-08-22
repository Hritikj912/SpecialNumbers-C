#include<stdio.h>
#include<conio.h>
int sumofdivisorexceptnumber(int n);
void main()
{
	int n,c,r,i,temp;
	printf("ENTER ANY NUMBER:\n");
	scanf("%d",&n);
	/*PROGRAM FOR ABUNDANT NUMBER*/
	temp=n;
	//ABUNDANT NO. IS A NUMBER SUM OF WHOSE DIVISORS EXCEPT NO. IS GREATER THAN NUMBER...
    c=sumofdivisorexceptnumber(n);
    if(temp<c)
	printf("%d IS AN ABUNDANT NUMBER",temp);
	else
	printf("%d IS NOT AN ABUNDANT NUMBER",temp);
	getch();
}
int sumofdivisorexceptnumber(int n)
{
	int i=1,sum=0;
	while(i!=n)
	{
		if(n%i==0)
		{
			sum=sum+i;	
		}
		i++;
	}
	return sum;
}
