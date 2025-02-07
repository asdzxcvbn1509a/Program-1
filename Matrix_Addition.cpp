#include <iostream>
using namespace std;

int main() {
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
    return 0;
}
