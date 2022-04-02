#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;
        int semester;

        Mahasiswa(string inputNama, string inputNIM, string inputJurusan, int inputSemester){
            Mahasiswa::nama = inputNama;
            Mahasiswa::NIM = inputNIM;
            Mahasiswa::jurusan = inputJurusan;
            Mahasiswa::semester = inputSemester;

            cout << "Nama Mahasiswa :" << Mahasiswa::nama << endl;
            cout << "NIM :" << Mahasiswa::NIM << endl;
            cout << "Jurusan :" << Mahasiswa::jurusan << endl;
            cout << "Semester :" << Mahasiswa::semester << endl;
            cout << endl;
        }

};

int main(int argc, char const *argv[])
{
    cout << "Pemrograman Berorientasi Objek" << endl;
    cout << "Tugas 1" << endl;
    cout << endl;
    Mahasiswa mahasiswa1 = Mahasiswa("Dida","19158578","Teknik Informatika",6);
    Mahasiswa mahasiswa2 = Mahasiswa("Rizaldy","19158578","Teknik Elektro",6);

    return 0;
}