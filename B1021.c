#include<stdio.h>
#include<stdbool.h>
int main()
{
        char c;
        int d[10] = {0};
        int i;
	bool flag = false;
        c = getchar();
        while (c != '\n') {
                d[c - '0']++;
                c = getchar();
        }
        for (i = 0; i < 10; i++) {
                if (d[i]) {
			if (flag)
				printf("\n");
                        printf("%d:%d", i, d[i]);
			flag = true;
		}
        }
        return 0;
}
