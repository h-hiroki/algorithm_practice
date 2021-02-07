#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 2; i <= N; i += 2) {
        // 標準出力にiと改行を表示する
        cout << i << endl;
    }
}