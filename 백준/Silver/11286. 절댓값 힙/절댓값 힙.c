#include <stdio.h>
#include<stdlib.h>
#include <malloc.h>

int arr[100001];
int size = 0;

void insert(int x) {
    size++;
    if (size == 0)
        arr[1] = x;
    else
        arr[size] = x;

    // 말단 노드로 값을 추가해줌  -> 2번 규칙
    // 1번 규칙을 만족하지 않는 동안
    // swap을 통해 규칙 만족시키도록 값을 짜줌
    int p = size;
    while (p > 1 && abs(arr[p]) < abs(arr[p / 2])||(abs(arr[p])==abs(arr[p/2])&& arr[p] < arr[p / 2])) {
        int tmp = arr[p];
        arr[p] = arr[p / 2];
        arr[p / 2] = tmp;
        p /= 2;
    }

}

int delete() {
    // 우선순위가 가장 높은 녀석 i.e root 노드
    if (size == 0)
        return 0; // 값 is not exist;
    int ret_val = arr[1];
    // h->item[h->size] == 마지막에 들어온 녀석의 위치 값
    // h->item[1] == 우선순위가 가장 높은 값 
    arr[1] = arr[size];
    size--;
    int p = 1;
    //자식노드가 있는 경우 while문 실행
    while (p * 2 <= size || p * 2 + 1 <= size) {
        //오른쪽 자식이 더 값이 클때
        if (p * 2 + 1 <= size && abs(arr[p * 2 + 1]) < abs(arr[p * 2])||(abs(arr[p * 2 + 1]) == abs(arr[p * 2])&& arr[p * 2 + 1]< arr[p * 2])) {
            if (abs(arr[p]) > abs(arr[p * 2 + 1])||(abs(arr[p]) == abs(arr[p * 2 + 1])&&arr[p]>arr[p*2+1])) {
                int tmp = arr[p];
                arr[p] = arr[p * 2 + 1];
                arr[p * 2 + 1] = tmp;
                p = p * 2 + 1;
            }
            else break;
        }
        //왼쪽 자식이 더 값이 클때
        else {
            if (abs(arr[p]) > abs(arr[p * 2]) || (abs(arr[p]) == abs(arr[p * 2]) && arr[p] > arr[p * 2])) {
                int tmp = arr[p];
                arr[p] = arr[p * 2];
                arr[p * 2] = tmp;
                p = p * 2;
            }
            else break;
        }
    }

    return ret_val;
}

int main() {
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x == 0) {
            int re = delete();
            printf("%d\n", re);
        }
        else
            insert(x);
    }

    return 0;
}