#include <iostream>
using namespace std;


class Student{
    public:
    string Name;
    int Age;
    string kelas;
    string jurusan;

    void study(){
        cout << Name << " Sedang belajar Matematika";
    }

    void istirahat(){
        cout << Name << " Sedang istirahat";
    }
};



int main(){
    Student student1;
    student1.Name= "Mahansa";
    student1.Age= 15;
    student1.kelas = "XI";
    student1.jurusan = "PPLG";

    cout << "------------------Data student 1------------------\n";
    cout <<"Nama siswa : "<<student1.Name << "\n";
    cout << "Umur siswa : "<<student1.Age << "\n";
    cout << "Kelas :"<<student1.kelas << "\n";
    cout << "Jurusan : "<<student1.jurusan << "\n";
    cout << "sekarang : ";
    student1.study();

    return 0;
}