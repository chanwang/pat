#include<stdio.h>
#include<math.h>
int main()
{
	int m,n;
	int i=2,j=1,k=0;
	int count=0;
	scanf("%d%d",&m,&n);
	while(count<n)
	{
		for(j=2;j<=sqrt(i)+1;j++)
		{
			if(i%j==0)
				break;
				
		}
		if(j>sqrt(i))
		{
			count++;
			
			if(count>=m)
			{
				if(k==0)
					printf("%d",i);
				else if(k%10==0&&k!=0)
					printf("\n%d",i);
				else
					printf(" %d",i);
				k++;
			}	
		}
		i++;	
	}
	return 0;
}
