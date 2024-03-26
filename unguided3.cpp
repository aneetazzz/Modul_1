#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> NilaiSiswa;

    NilaiSiswa["Alisa"] = 85;
    NilaiSiswa["Bobby"] = 90;
    NilaiSiswa["Caca"] = 78;
    NilaiSiswa["Diana"] = 95;

    cout << "Daftar Nilai Siswa:" << endl;
    for (auto& pair : NilaiSiswa) {
        cout << pair.first << ": " << pair.second << endl;
    }

    string CekNama = "Tyler";
    if (NilaiSiswa.find(CekNama) != NilaiSiswa.end()) {
        cout << CekNama << " memiliki nilai " << NilaiSiswa[CekNama] << endl;
    } else {
        cout << CekNama << " tidak ditemukan dalam map." << endl;
    }

    return 0;
}
