#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=0,k=0;
	//UGLY NUMBERS ARE THOSE WHICH ARE DIVIDED BY 2,3 OR 5
	printf("ENTER Nth TERM OF UGLY NUMBER\n");
	scanf("%d",&n);
	printf("THE FIRST %d UGLY NUMBERS ARE:\n",n);
	if(n==1)
	{
	printf("1");
}
	else
	{
	printf("1\n");
	while(n!=k+1)
	{	i++;
		if(i%2==0||i%3==0||i%5==0)
		{
			printf("%d\n",i);
			k++;
		}
	}
   }
   getch();
}
