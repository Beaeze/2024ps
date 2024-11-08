#include <stdio.h>


int max(int a, int b);

int dp[301] = { 0 };
int gd[301] = { 0 };

int main() {
    
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &gd[i]);

    for (int i = 1; i <= n; i++) {
        if (i < 3)
            dp[i] = gd[i] + dp[i - 1];
        else
            dp[i] = max(gd[i] + dp[i - 2], gd[i] + gd[i - 1] + dp[i - 3]);
    }

    
    printf("%d", dp[n]);
    
        
}

int max(int a, int b) {
    if (a > b)return a;
    else return b;
    
}

