#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
int number;
    int sum = 0;

    cin >> number;

    while (number != 0) {
        sum += number;
        cin >> number;
    }

    cout << sum << endl;
    return 0;
}
