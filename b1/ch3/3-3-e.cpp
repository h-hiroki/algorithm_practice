#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    int minimum_value = 2000000;
    int second_value = 2000000;
    for (int i = 0; i < N; ++i) {
        if (a[i] < minimum_value) {
            second_value = minimum_value;
            minimum_value = a[i];
        }

        if (a[i] > minimum_value && a[i] < second_value) {
            second_value = a[i];
        }
    }

    cout << second_value << endl;
}
