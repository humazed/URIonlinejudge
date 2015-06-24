#include <iostream>
#include <iomanip>

using namespace std;

int main() {


    int a;
    cin >> a;

    int s100, s50, s20, s10, s5, s2;

    s100 = a % 100;
    s50 = s100 % 50;
    s20 = s50 % 20;
    s10 = s20 % 10;
    s5 = s10 % 5;
    s2 = s5 % 2;

    cout << a << endl;
    cout << a / 100 << " nota(s) de R$ 100,00" << endl;
    cout << s100 / 50 << " nota(s) de R$ 50,00" << endl;
    cout << s50 / 20 << " nota(s) de R$ 20,00" << endl;
    cout << s20 / 10 << " nota(s) de R$ 10,00" << endl;
    cout << s10 / 5 << " nota(s) de R$ 5,00" << endl;
    cout << s5 / 2 << " nota(s) de R$ 2,00" << endl;
    cout << s2 / 1 << " nota(s) de R$ 1,00" << endl;

    return 0;
}