#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    // 最大値と最小値を保持して最後に差を求める。そうすればO(N)の計算量でいける
    int max_value = -1;
    int min_value = 2000000;
    for (int i = 0; i < N; ++i) {
        if (a[i] > max_value) max_value = a[i];
        if (a[i] < min_value) min_value = a[i];
    }

    int result = max_value - min_value;
    cout << result << endl;
}
