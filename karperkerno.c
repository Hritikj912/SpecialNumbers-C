#include<math.h>
main()
{ long long int count=0,n,sn,snn,snn1,sum=0,n1,s;
  printf("ENTER ANY NUMBER\n");
  scanf("%lld",&n);
  n1=n;
  sn=n*n;
  snn=sn;
  while(n!=0)
  {
  	count++;
  	n=n/10;
  }
 divide(snn,count,n1);

}
void divide(long long int snn,int count,int n1)
{ int s,d,sum=0;
d=pow(10,count);
while(snn!=0)
{s=snn%d;
snn=snn/d;
sum=sum+s;
}
if(sum==n1)
{printf("YEH! IS A KARPERKER NUMBER");
}
else
{printf("NOT A KARPERKER NUMBER");
}
}
