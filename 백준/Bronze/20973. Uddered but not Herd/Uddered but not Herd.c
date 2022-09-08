
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
# include <math.h>
#pragma warning (disable:4996 6031)
int main() {
    char str[27];
    char qe[1001];
    int a = 0;
    int x = 1;
    int r[1002]= {}; // 그냥 {} 가능?    초기화 안하고 r[0] > r[1] 비교 가능?
    scanf("%s", str);
    scanf("%s", qe);
    int p = strlen(qe); // 4
    for (int i = 0; i < p; ) {
        for (int j = 0; j < 26; j++) {
            if (qe[i] == str[j]) {
                i++;
            }
        }
        a++;
    }
    printf("%d", a);

}   
