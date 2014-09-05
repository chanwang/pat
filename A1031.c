#include<stdio.h>
int main()
{
	char a[80];
	char c;
	int n1, n2, n3=0;
	int i, j, k;
	i=0;
	while((c = getchar()) != '\n') {
		a[i]=c;        
		i++;
	}
        if ((i+2)%3 == 0)
                n1 = n2 = n3 = (i+2)/3;
        else {
                n1 = n3 = (i+2)/3;
                n2 = i+2-n1-n3;
        }
        for (j = 0; j < (n1-1); j++) {
                printf("%c",a[j]);
                for (k=0; k<(n2-2); k++)
                        printf(" ");
                printf("%c\n",a[i-1-j]);
        }
	for (j = 0; j < n2; j++)
		printf("%c",a[n1+j-1]);
	return 0;
}
