#include<stdio.h>
main()
{int i,c,n,g,e,d;
	printf("Enter Nth term\n");
	scanf("%d",&n);
	d=fact(2*n-2);
	i=fact(n);
	e=fact(n);
	g=d/(i*e);
	printf("%d",g);
}
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return (n*fact(n-1));
}    
