#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

void Matrix_Addition() {
    cout << "Matrix Addition" << endl;
    
    int m, n;
    cout << "Enter the size of the matrix (rows cols): ";
    cin >> m >> n;

    vector<vector<int>> first(m, vector<int>(n));
    vector<vector<int>> second(m, vector<int>(n));

    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> first[i][j];
        }
    }

    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> second[i][j];
        }
    }

    cout << "The addition of both matrices:\n";
    for (int i = 0; i < m; i++) {
        cout << "| ";
        for (int j = 0; j < n; j++) {
            cout << first[i][j] + second[i][j] << " ";
        }
        cout << "|\n";
    }
}

void Dot_Product() {
    cout << "Dot Product\n";

    int size;
    cout << "Enter the number of elements in the set: ";
    cin >> size;

    vector<int> b(size), c(size);
    cout << "Enter the members of the first set: ";
    for (int& num : b) cin >> num;

    cout << "Enter the members of the second set: ";
    for (int& num : c) cin >> num;

    int dot_product = 0;
    for (size_t i = 0; i < size; i++) {
        dot_product += b[i] * c[i];
    }

    cout << "The dot product = " << dot_product << endl;
}

void Factorial() {
    cout << "Factorial\n";

    int num;
    cout << "Enter a number: ";
    cin >> num;

    long long factorial = 1;
    for (int i = 2; i <= num; i++) {
        factorial *= i;
    }

    cout << "Factorial of " << num << " = " << factorial << endl;
}

void Set_Union() {
    cout << "Set Union\n";

    set<int> a, b, unionset;
    int n, value;

    cout << "Enter the number of elements in set A: ";
    cin >> n;
    cout << "Enter the elements of set A: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        a.insert(value);
    }

    cout << "Enter the number of elements in set B: ";
    cin >> n;
    cout << "Enter the elements of set B: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        b.insert(value);
    }

    set_union(a.begin(), a.end(), b.begin(), b.end(), inserter(unionset, unionset.begin()));

    cout << "A ∪ B = { ";
    size_t count = 0;
    for (const int& v : unionset) {
        cout << v;
        if (++count < unionset.size()) cout << ", ";
    }
    cout << " }\n";
}

int main() {
    cout << "1 = Matrix Addition\n";
    cout << "2 = Dot Product\n";
    cout << "3 = Factorial\n";
    cout << "4 = Set Union\n";
    cout << "Enter the number: ";

    int choice;
    cin >> choice;
    cout << endl;

    switch (choice) {
        case 1: Matrix_Addition(); break;
        case 2: Dot_Product(); break;
        case 3: Factorial(); break;
        case 4: Set_Union(); break;
        default: cout << "Invalid choice!\n";
    }

    return 0;
}
