#include <iostream>
#include <iomanip>

using namespace std;

int main() {


    string name;
    double a, b;


    cin >> name >> a >> b;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << a + b * .15 << endl;

    return 0;
}