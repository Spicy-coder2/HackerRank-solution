#include<stdio.h>
 int main()
{
int n,sum=0,m;
scanf("%d",&n);
while(n>0)
{
m=n%10;
n=n/10;
sum=sum+m;
break;
}
printf("%d",sum);
return 0;
}
