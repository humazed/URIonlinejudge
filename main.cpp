#include <iostream>
#include <iomanip>

using namespace std;

int main() {


    float a, b, c;

    cin >> setprecision(1) >> a >> b >> c;

    cout << "MEDIA = " << fixed << setprecision(1) << (a * 2 + b * 3 + c * 5) / 10 << endl;

    return 0;
}