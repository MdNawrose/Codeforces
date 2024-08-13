#include<stdio.h>
int main()
{
long long int i,a,b,c,n,cnt=0;
scanf("%lld",&n);
for(i=1;i<=n;i++)
{scanf("%lld%lld%lld",&a,&b,&c);
if((a+b+c)>=2)
{cnt++;}
}
printf("%lld\n",cnt);
return 0;
}
