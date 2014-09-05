/*************************************************************************
 *	> File Name: A1006.c
 *	> Author: 
 *	> Mail: 
 *	> Created Time: 2014年09月05日 星期五 15时08分16秒
 ************************************************************************/

#include<stdio.h>
struct sign
{
        char ID[15];
        int in_time;
        int out_time;
};
int main()
{
        int hh,mm,ss;
        int i,j;
        int m;
        char c;
	char d;
	int min=24*60*60;
	int max=0;
	int unlock=0;
	int lock=0;
        struct sign sign[1000];
        scanf("%d",&m);
        for(i=0;i<m;i++){
                scanf("%s",&sign[i].ID);
		d = getchar();
                c = getchar();
                hh = c - '0';
                c=getchar();
                hh = hh*10 +c-'0';
                d=getchar();
		sign[i].in_time=hh*60*60;
                c = getchar();
                hh = c - '0';
                c=getchar();
                hh = hh*10 +c-'0';
                d=getchar();
		sign[i].in_time+=hh*60;
                c = getchar();
                hh = c - '0';
                c=getchar();
                hh = hh*10 +c-'0';
                d=getchar();
		sign[i].in_time+=hh;

                c = getchar();
                hh = c - '0';
                c=getchar();
                hh = hh*10 +c-'0';
                d=getchar();
		sign[i].out_time=hh*60*60;
                c = getchar();
                hh = c - '0';
                c=getchar();
                hh = hh*10 +c-'0';
                d=getchar();
		sign[i].out_time+=hh*60;
                c = getchar();
                hh = c - '0';
                c=getchar();
                hh = hh*10 +c-'0';
                d=getchar();
		sign[i].out_time+=hh;
        }
	for(i=0;i<m;i++){
		if(sign[i].in_time<min){
			min=sign[i].in_time;
			unlock=i;}
		if(sign[i].out_time>max){
			max=sign[i].out_time;
			lock = i;}	
	}
	printf("%s %s",sign[unlock].ID,sign[lock].ID);
	//printf("%d %d",sign[unlock].in_time,sign[lock].out_time);
        return 0;
}
