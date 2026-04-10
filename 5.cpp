#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    int factorial = 1;

    
    cin >> N;

    if (N < 0) {
        cout << "Факториал для отрицательных чисел не определён." << endl;
    } else {
        int i = 1;
        while (i <= N) {
            factorial = factorial * i;
            i = i + 1;
        }
        cout << factorial << endl;
    }

    return 0;
}
