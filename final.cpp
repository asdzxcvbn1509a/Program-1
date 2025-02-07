#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;

void Matrix_Addition() {
    cout << "Matrix Addition" << endl;
    int m, n;
    cout << "Enter the area of matrix : ";
    cin >> m >> n;
    cout << endl << "Emter the number of frist matrix" << endl;
    int first[m][n], second[m][n];
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cin >> first[i][j];
        }
    }
    cout << endl << "Enter the number of second matrix :" << endl;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cin >> second[i][j];
        }
    }
    cout << endl << "The addition of both matrix = " << endl;
    for (int i=0; i<m; i++) {
        cout << "| ";
        for (int j=0; j<n; j++) {
            cout << first[i][j] + second[i][j] << " ";
        }
        cout << "|" ;
        cout << "\n";
    }
}

void Dot_Product() {
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
}
void Factorial() {
    cout << "Factorial" << endl;
    int a, b=1;
    cout << "Enter the number of factorial : ";
    cin >> a;
    for (int i=a; i>0; --i) {
        b = b*i;
    }
    cout << "The factorial = " << b;
}
void Set_Union() {
    cout << "Set Union" << endl;
    set<int> a, b, unionset;
    int n, value;
    cout << "Enter the number of elements of set A : ";
    cin >> n;
    cout << "Enter the members of set A : ";
    for (int i=0; i<n; i++) {
        cin >> value;
        a.insert(value);
    }
    cout << "Enter the number of elements of set B : ";
    cin >> n;
    cout << "Enter the members of set B : ";
    for (int i=0; i<n; i++) {
        cin >> value;
        b.insert(value);
    }
    set_union(a.begin(), a.end(), b.begin(), b.end(), inserter(unionset, unionset.begin()));
    cout << "A ∪ B = { ";
    int count=0;
    for (int v : unionset) {
        cout << v;
        if (++count < unionset.size()) {
            cout << ", ";
        }
    }
    cout << " }";
}

int main() {
    cout << "1 = Matrix_Addition" << endl;
    cout << "2 = Dot_Product" << endl;
    cout << "3 = Factorial" << endl;
    cout << "4 = Set_Union" << endl;
    cout << "Enter the number : ";
    int a;
    cin >> a;
    cout << endl;
    if (a==1) {
        Matrix_Addition();
    }
    if (a==2) {
        Dot_Product();
    }
    if (a==3) {
        Factorial();
    }
    if (a==4) {
        Set_Union();
    }
    return 0;
}
