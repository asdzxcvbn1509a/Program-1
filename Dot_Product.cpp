#include <iostream>
using namespace std;

int main() {
    cout << "Dot product" << endl;
    int a, d=0;
    cout << "Enter the number of element of set : ";
    cin >> a;
    int b[a], c[a];
    
    cout << "Enter the members of first set   : ";
    for (int i=0; i<a; i++) {
        cin >> b[i];
    }
    cout << "Enter the memebers of second set : ";
    for (int i=0; i<a; i++) {
        cin >> c[i];
    }
    for (int i=0; i<a; i++) {
        d += b[i]*c[i];
    }
    cout << "The dot product = ";
    cout << d;
    return 0;
}
