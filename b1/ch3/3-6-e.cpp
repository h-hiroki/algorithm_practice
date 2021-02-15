#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    // X + Y + Z = K を満たす時に
    // Z = K - X - Y になる
    // 0 <= Z <= K を満たしていれば条件を満たすと言えるっす

    int count = 0;
    for (int x = 0; x <= min(K, N); ++x) { // min(K, N)としているのは問題の条件としてはどちらか最小の時まで処理すれば十分だから
        for (int y = 0; y <= min(K, N); ++y) {
            int z = N - x - y;
            if (z >= 0 && z <= K) {
                ++count;
            }
        }
    }

    cout << count << endl;
}
