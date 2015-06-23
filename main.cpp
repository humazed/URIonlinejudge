#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {


    int a, b, c, d;

    cin >> a >> b >> c;

    d = (int) ((a + b + abs(a - b)) / 2);
    d = (int) ((d + c + abs(d - c)) / 2);


    cout << d << " eh o maior" << endl;

    return 0;
}