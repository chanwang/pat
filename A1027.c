/*************************************************************************
 *	> File Name: A1027.c
 *	> Author: 
 *	> Mail: 
 *	> Created Time: 2014年09月05日 星期五 16时27分42秒
 ************************************************************************/

#include<stdio.h>
int main()
{
        int i,j = 0;
        int a[3];
	int x,y;
	char b[2]={'0','0'};
	int d;
        scanf("%d %d %d",&a[0],&a[1],&a[2]);
        printf("#");
        for(i=0;i<3;i++) {
		d=a[i];
		if(d<10)
			b[1]=d+'0';
		else if(d>=10&&d<13)
			b[1]='A'+d-10;
		else {
			x=d/13;
			y=d-x*13;
			if(x<10)
				b[0]=x+'0';
			else
				b[0]='A'+x-10;
			if(y<10)
				b[1]=y+'0';
			else
				b[1]='A'+y-10;
		}	
		printf("%c%c",b[0],b[1]);
        }
        return 0;
}
