#include <stdio.h>


int max(int a, int b);
int dp[101][100001] = { 0 };

int main() {
    
    int n, k;
    int v[101], w[101];
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
        scanf("%d %d", &w[i], &v[i]);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if (j < w[i])
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = max(dp[i - 1][j - w[i]] + v[i], dp[i - 1][j]);
        }
    }
    printf("%d", dp[n][k]);

    return 0;
        
}

int max(int a, int b) {
    if (a >= b)return a;
    else return b;
    
}

