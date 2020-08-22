#include<stdio.h>
main()
{int i=0,a=2,b=1,c,n;
	printf("ENTER NUMBER OF TERMS\n");
	scanf("%d",&n);
	printf("\nFIRST %d TERMS :\n",n);
	 printf("%d\n",a);
printf("%d\n",b);
	while(i!=n-2)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
		i++;
	}
}

