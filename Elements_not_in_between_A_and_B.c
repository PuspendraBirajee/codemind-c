#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int A, B;
    scanf("%d %d", &A, &B);
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] < A || arr[i] > B) {
            printf("%d ", arr[i]);
            count++;
        }
    }
    if (count == 0) {
        printf("-1");
    }
    return 0;
}