#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int a;
    cin >> a;

    int h, m;

    h = a % (60 * 60);
    m = h % 60;


    cout << a / (60 * 60) << ":" << h / 60 << ":" << m << endl;

    return 0;
}