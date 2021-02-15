#include <iostream>
#include <vector>
using namespace std;

/**
 * 何回2で割り切れるかを返却する
 * @param number
 * @return
 */
int how_many_divide(int number) {
    int result = 0;
    while(number % 2 == 0) {
        number /= 2;
        ++result;
    }
    return result;
}

int main() {
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    int min_divide_count = 20000000;
    for (int i = 0; i < N; ++i) {
        int tmp = how_many_divide(a[i]);
        if (tmp < min_divide_count) {
            min_divide_count = tmp;
        }
    }

    cout << min_divide_count << endl;
}
