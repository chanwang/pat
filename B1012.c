#include<stdio.h>
int main()
{
	int n,i;
	int A1=0,A2=0,A3=0,count=0,A5=0;
	float A4,sum=0;
	int sign=1;
	scanf("%d",&n);
	int a[n];
	int flag=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%5==0)
		{
			if(a[i]%2==0)
				A1=A1+a[i];
		}
		else if(a[i]%5==1)
		{
			flag=1;
			if(sign>0)
				A2=A2+a[i];
			else
				A2=A2-a[i];
			sign=-sign;
		}
		else if(a[i]%5==2)
		{
			A3++;
		}
		else if(a[i]%5==3)
		{
			
			sum=sum+a[i];
			count++;
		}
		else if(a[i]%5==4)
		{
			if(A5<a[i])
				A5=a[i];
		}
	}
	if(count==0)
		A4=0;
	else
		A4=sum/count;
	if(A1==0)
		printf("N ");
	else
		printf("%d ",A1);
	if(flag==0)
		printf("N ");
	else
		printf("%d ",A2);
	if(A3==0)
		printf("N ");
	else
		printf("%d ",A3);
	if(A4==0)
		printf("N ");
	else
		printf("%.1f ",A4);
	if(A5==0)
		printf("N");
	else
		printf("%d",A5);

	return 0;
}
