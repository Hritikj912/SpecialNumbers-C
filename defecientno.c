#include<stdio.h>
#include<conio.h>
int sumofdivisorexceptnumber(int n);
void main()
{
	int n,c,r,i,temp;
	printf("ENTER ANY NUMBER:\n");
	scanf("%d",&n);
	/*PROGRAM FOR DEFECIENT NUMBER*/
	temp=n;
	//DEFECIENT NO. IS A NUMBER SUM OF WHOSE DIVISORS EXCEPT NO. IS LESS THAN NUMBER...
    c=sumofdivisorexceptnumber(n);
    if(temp>c)
	printf("%d IS DEFECIENT NUMBER",temp);
	else
	printf("%d IS NOT DEFECIENT NUMBER",temp);
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
