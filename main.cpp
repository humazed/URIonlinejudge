#include <iostream>
#include <iomanip>

using namespace std;

int main() {


    float a, b;

    cin >> setprecision(1) >> a >> b;

    cout << "MEDIA = " << fixed << setprecision(5) << (a * 3.5 + b * 7.5) / 11 << endl;

    return 0;
}