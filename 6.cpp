#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;

    // Ваш код:
if(a>=1 && a<=5)
    {
    cout << "Число принадлежит одному из диапазонов";
}
else if(a>=10 && a<=15)
{
    cout << "Число принадлежит одному из диапазонов";
}
    else
    {
    cout << "Число не принадлежит указанным диапазонам";    
    }


    return 0;
}