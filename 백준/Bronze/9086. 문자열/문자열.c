#include <stdio.h>
//#include <iostream>
#include <string.h>

//using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        char ch[1001];
        scanf("%s", ch); // abcd
        int len = strlen(ch); // len : 4
        printf("%c%c\n", ch[0],ch[len-1]);
    }
    return 0;
}
