#include <stdio.h>
#include <math.h>
int main(void)
{
	double n;
	double s;
	scanf("%lf", &n);
	s=sqrt(n);
	printf("%lf", s+1);

/*	int i=0,len;
	char str[40]="happy";
	for(i=0;str[i]!='\0';i++)
		;
	printf("%d\n",i);
	for(i=0;str[i]!='\0';i++)
		putchar(str[i]);
*/
	return 0;
}
