#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
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
    return 0;
}
