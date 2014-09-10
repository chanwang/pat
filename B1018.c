/*************************************************************************
 *	> File Name: B1018.c
 *	> Author: 
 *	> Mail: 
 *	> Created Time: 2014年09月09日 星期二 14时14分34秒
 ************************************************************************/

#include<stdio.h>
int main()
{
        int n;
        int i, j;
        int w = 0, l = 0, t = 0;
        int cntc = 0, cntj = 0, cntb = 0;
        int cnt_c = 0, cnt_j = 0, cnt_b = 0;
        char a, b, c, d;
        scanf("%d",&n);
        for (i = 0; i < n; i++) {
                scanf("%c%c%c%c", &d, &a, &c, &b);
		//printf("%c%c%c%c",d,a,c,b);
                switch (a) {
                        case 'C':
                        switch (b) {
                                case 'C': t++;
                                break;
                                case 'J': w++; cntc++;
                                break;
                                case 'B': l++; cnt_b++;
                                break;
                                default:
                                break;
                        }
			break;
                        case 'J':
                        switch (b) {
                                case 'C': l++; cnt_c++;
                                break;
                                case 'J': t++; 
                                break;
                                case 'B': w++; cntj++;
                                break;
                                default:
                                break;
                        }
			break;
                        case 'B':
                        switch (b) {
                                case 'C': w++; cntb++;
                                break;
                                case 'J': l++; cnt_j++;
                                break;
                                case 'B': t++;
                                break;
                                default:
                                break;
                        }
			break;
			default:
			break;
                }
        }
        printf("%d %d %d\n%d %d %d\n", w, t, l, l, t, w);
        if (cntb >= cntc && cntb >= cntj)
                printf("B");
        else if (cntc >= cntj && cntc > cntb)
                printf("C");
        else
                printf("J");
        printf(" ");
        if (cnt_b >= cnt_c && cnt_b >= cnt_j)
                printf("B");
        else if (cnt_c >= cnt_j && cnt_c > cnt_b)
                printf("C");
        else
                printf("J");
        return 0;
}
