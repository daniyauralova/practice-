#include <iostream>
using namespace std;
int main () {
    int x, y;
    int k = 0;
    cin >> x >> y;
    for (int i = x; i <= y; i++) {
        if (i % 12 == 0)
            k++;
    }
    cout << k;
    return 0;
}
