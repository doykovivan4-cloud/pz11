#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

 int N;
    cin >> N;

    if (N <= 1) {
        cout << "Не простое" << endl;
        return 0;
    }

    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            cout << "Не простое" << endl;
            return 0;
        }
    }

    cout << "Простое" << endl;


    return 0;
}
