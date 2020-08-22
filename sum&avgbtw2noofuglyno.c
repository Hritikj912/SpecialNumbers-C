#include <stdio.h>

 int main(void)
 {
 	int n1,n2,i,k,sum;
 	printf("******* SUM AND AVERAGE BETWEEN 2 NUMBERS WHICH ARE DIVISIBLE BY 3,5,12 ********\n");
 	printf("\nPlease Enter any 2 number\n");
 	scanf("%d%d",&n1,&n2);
 	if(n1<n2)
 	{
 		for(i=n1;i<=n2;i++)
 		{
 			if(i%3==0&&i%5==0&&i%12==0)
 			{
 				sum=sum+i;
 				k++;
 			}
 		}
 		printf("Sum:%d\nAverage:%d",sum,sum/k);
 	}
 	return 0;
 }

