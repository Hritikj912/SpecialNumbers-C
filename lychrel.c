#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("ENTER ANY NUMBER\n");
	scanf("%d",&n);
int i,n1,n2=0,n4=0,n5,n3,k=0,a[10],b[10],l,t,j;
n1=n;
	while(n!=0)
	{   a[i]=n%10;
		n=n/10;
		i++;
	}
	for(j=0;j<i;j++)
	{
		n2=n2*10+a[j];
	}

	n3=n2+n1;
	n5=n3;
		while(n3!=0)
	{   b[k]=n3%10;
		n3=n3/10;
		k++;
	}
for(l=0;l<k;l++)
{
	n4=n4*10+b[l];
}
	if(n5!=n4)
	{
		printf("%d IS A LYCHREL NUMBER",n1);
	}
	else
		printf("%d IS NOT A LYCHREL NUMBER",n1);
}
