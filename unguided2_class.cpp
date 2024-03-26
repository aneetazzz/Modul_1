#include <iostream>
#include <string>

using namespace std;

class Siswa {
public:
    string name;
    int age;
    string grade;
};

int main() {
    Siswa s;

    s.name = "Anita";
    s.age = 19;
    s.grade = "A";

    cout << "Nama: " << s.name << endl;
    cout << "Umur: " << s.age << endl;
    cout << "Kelas: " << s.grade << endl;

    return 0;
}
