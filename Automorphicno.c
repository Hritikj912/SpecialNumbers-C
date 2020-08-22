#include<stdio.h>
void main()
{
	long long int n,sn,sn1,count=0,count1=0,s=0,s2=0,s3=0,r2,r3,r,r1,k,s1=0,sn2;
	printf("ENTER ANY NUMBER\n");
	scanf("%lld",&n);
	sn=n*n;
	sn1=sn;
	sn2=sn1;
	while(sn1!=0)
	{
		sn1=sn1/10;
		count++;
	}
	k=count;
	while(count!=0)
	{
		r=sn2%10;
		s=(s*10)+r;
		sn2=sn2/10;
		count--;
	}
	while(s!=0)
	{
		r1=s%10;
		s1=r1+(s1*10);
		s=s/10;
}
		while(count1!=k/2)
		{
			r2=s1%10;
			s1=s1/10;
			s2=s2*10+r2;
			count1++;
		}
			while(s2!=0)
			{
				r3=s2%10;
				s2=s2/10;
				s3=s3*10+r3;
			}
	if(s3==n)
	{
		printf("%lld IS AN AUTOMORPHIC NUMBER",n);
		
	}
	else
	printf("%lld IS NOT AN AUTOMORPHIC NUMBER",n);
}
