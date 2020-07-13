#include <iostream>
#include <algorithm>
using namespace std;
static const int MAX = 200000;

int main() {
    int R[MAX], n;

    cin >> n; // 標準入力を受け付けて表示する
    for (int i = 0; i < n; i++) {
        cin >> R[i];
    }

    int maxv = -2000000000;
    int minv = R[0];

    for (int i = 1; i < n; i++) {
        maxv = max(maxv, R[i] - minv);
        minv = min(minv, R[i]);
    }

    cout << maxv << endl; // 標準出力に表示する

    return 0;
}