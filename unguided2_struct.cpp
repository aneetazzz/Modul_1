#include <iostream>
#include <string>

using namespace std;

struct Siswa {
    string name;
    int age;
    string grade;
};

int main() {
    Siswa s;

    s.name = "Ananda";
    s.age = 10;
    s.grade = "A";

    cout << "Nama: " << s.name << endl;
    cout << "Umur: " << s.age << endl;
    cout << "Kelas: " << s.grade << endl;

    return 0;
}
