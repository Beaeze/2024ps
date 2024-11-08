#include <stdio.h>


int max(int a, int b, int c);

int dp[10001] = { 0 };
int wine[10001] = { 0 };

int main() {
    
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &wine[i]);

    for (int i = 1; i <= n; i++) {
        if (i < 3)
            dp[i] = wine[i]+dp[i-1];
        else
            dp[i] = max(dp[i - 1], wine[i] + dp[i - 2], wine[i] + wine[i - 1] + dp[i - 3]);
    }

    
    printf("%d", dp[n]);
    
        
}

int max(int a, int b, int c) {
    if (a > b) {
        if (a > c)
            return a;
        else
            return c;
    }
    else {
        if (b > c)
            return b;
        else
            return c;
    }

}

