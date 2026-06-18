#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int m, n;
        cin >> m >> n;
       int k = min(m, n);
        if ((n - k) % 2 != 0)
            k--;
        cout << m - k << "\n";
    }

    return 0;
}