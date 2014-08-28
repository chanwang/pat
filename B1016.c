#include<stdio.h>
int main()
{
	int tmp=0;
	long long a,b,pa=0,pb=0;
	int da,db;
	scanf("%lld%d%lld%d",&a,&da,&b,&db);
	while(a!=0)
	{
		tmp=a%10;
		a=a/10;
		if(tmp==da)
			pa=pa*10+tmp;
	}
	while(b!=0)
	{
		tmp=b%10;
		b=b/10;
		if(tmp==db)
			pb=pb*10+tmp;
	}	
	printf("%lld",pa+pb);
	return 0;
}
