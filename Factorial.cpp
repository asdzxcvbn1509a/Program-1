#include <iostream>

using namespace std;
int main() {
    cout << "Factorial" << endl;
    int a, b=1;
    cout << "Enter the number of factorial : ";
    cin >> a;
    for (int i=a; i>0; --i) {
        b = b*i;
    }
    cout << "The factorial = " << b;
    return 0;
}
