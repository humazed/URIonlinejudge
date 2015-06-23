#include <iostream>
#include <iomanip>

using namespace std;

int main() {


    int a;
    double pi = 3.14159;


    cin >> a;


    cout << "VOLUME = " << fixed << setprecision(3) << (4 / 3.0) * pi * a * a * a << endl;

    return 0;
}