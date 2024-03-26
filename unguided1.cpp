#include <iostream>

using namespace std;

int main() {

    int age;

    cout << "Masukkan umur Anda: ";
    cin >> age;

    bool CukupUmur;
    
    if (age >= 17) {
        CukupUmur = true;
    } else {
        CukupUmur = false;
    }
    
    if (CukupUmur) {
        cout << "Anda dinyatakan cukup umur" << endl;
    } else {
        cout << "Anda masih di bawah umur" << endl;
    }
    
    return 0;
}
