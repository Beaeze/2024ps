#include <stdio.h>


int min(int a, int b);


int dp[1001][3] = {0};
int RGB[1001][3] = { 0 };

int main() {
    
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d %d %d", &RGB[i][0], &RGB[i][1], &RGB[i][2]);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            dp[i][0] = RGB[i][0];
            dp[i][1] = RGB[i][1];
            dp[i][2] = RGB[i][2];
        }
        else {
            dp[i][0] = RGB[i][0] + min(dp[i - 1][1], dp[i - 1][2]);
            dp[i][1] = RGB[i][1] + min(dp[i - 1][0], dp[i - 1][2]);
            dp[i][2] = RGB[i][2] + min(dp[i - 1][1], dp[i - 1][0]);
        }
    }

    printf("%d", min(dp[n][0],min( dp[n][1], dp[n][2])));

    return 0;
        
}

int min(int a, int b) {
    if (a >= b)return b;
    else return a;
    
}

