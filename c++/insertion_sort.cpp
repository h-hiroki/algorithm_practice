#include <stdio.h>

void trace(int A[], int N) {
    for (int i = 0; i < N; i++) {
        if (i > 0) printf(" ");
        printf("%d", A[i]);
    }

    printf("\n");
}

void insertionSort(int A[], int N) {
    for (int i = 1; i < N; i++) {
        int v = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > v) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = v;
        trace(A, N);
    }
}

int main() {
    int INPUT_SIZE, i, j;
    int A[100];

    // 標準入力から各種数値を受け取る
    scanf("%d", &INPUT_SIZE);
    for (int i = 0; i < INPUT_SIZE; i++) scanf("%d", &A[i]);

    // 本処理
    trace(A, INPUT_SIZE);
    insertionSort(A, INPUT_SIZE);

    return 0;
}