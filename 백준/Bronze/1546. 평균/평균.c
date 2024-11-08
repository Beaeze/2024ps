#include <stdio.h>

int main(void) {
    int n;
    double score[1000];
    double M = 0;
    double sum = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &score[i]);
        if (M < score[i])
            M = score[i];
    }
    for (int i = 0; i < n; i++) {
        sum += score[i] / M * 100;
    }
    printf("%.3lf", sum / n);
    return 0;
}


