#include <stdio.h>

void ch(int *arr, int i, int j);

int main(void) {
  int n, m;
  int arr[100];
  int i, j;
  scanf("%d %d", &n, &m);
  for (int k = 0; k < n; k++) {
    arr[k] = k + 1;
  }
  for (int k = 0; k < m; k++) {
    scanf("%d %d", &i, &j);
    ch(arr, i, j);
  }
  for (int k = 0; k < n; k++)
    printf("%d ", arr[k]);

  return 0;
}

void ch(int *arr, int i, int j) {
  int a[100];
  for (int k = i - 1; k < j; k++) {
    a[k] = arr[k];
  }
  int index = j - 1;
  for (int k = i - 1; k < j; k++) {
    arr[index] = a[k];
    index--;
  }
}