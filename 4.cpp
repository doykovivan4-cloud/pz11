#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
int N;
    cin >> N;

    for (int i = 2; i <= N; i += 2) {
        cout << i << " ";
    }
    cout << endl;



    return 0;
}
