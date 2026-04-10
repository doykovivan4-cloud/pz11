#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

   int number;
    int count = 0;

   
    cin >> number;

    if (number == 0) {
        cout << "0" << endl;
        return 0;
    }

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        count = count + 1;
        number = number / 10;
    }

    cout << count << endl;
    return 0;
}
