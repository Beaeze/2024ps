#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    int len, cnt = 0;
    scanf("%s", str);
    len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == 'a' || str[i] == 'i' || str[i] == 'u' || str[i] == 'e' || str[i] == 'o')
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}