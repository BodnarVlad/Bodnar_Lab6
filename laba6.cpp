#include <iostream>
using namespace std;

int main() {
    int num;
    bool A;

    cout << "Tsile chislo: ";
    cin >> num;
    bool* APtr = &A;
    if (num > 0) {
        *APtr = true;
    }
    else {
        *APtr = false;
    }
    cout << "A: " << *APtr << '\n';
}
