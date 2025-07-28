#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    for(int i = 0; i < 10; i++){
        cout << rand() % 10 << endl;
        

    }
    return 0;
}



// | Fungsi                     | Deskripsi         | Contoh                |
// | -------------------------- | ----------------- | --------------------- |
// | `int atoi(const char*)`    | String ke integer | `atoi("42") → 42`     |
// | `long atol(const char*)`   | String ke long    | `atol("1000000")`     |
// | `double atof(const char*)` | String ke double  | `atof("3.14") → 3.14` |


// | Fungsi                     | Deskripsi           | Contoh                     |
// | -------------------------- | ------------------- | -------------------------- |
// | `int rand()`               | Hasilkan angka acak | `rand() % 10 → 0 sampai 9` |
// | `void srand(unsigned int)` | Seed untuk `rand()` | `srand(time(0))`           |


// | Fungsi           | Deskripsi                  | Contoh                      |
// | ---------------- | -------------------------- | --------------------------- |
// | `void exit(int)` | Menghentikan program       | `exit(0)` → berhenti normal |
// | `void abort()`   | Paksa keluar (error fatal) | `abort()`                   |


// | Fungsi          | Deskripsi                                          | Contoh                  |
// | --------------- | -------------------------------------------------- | ----------------------- |
// | `abs(int)`      | Nilai mutlak integer                               | `abs(-5) → 5`           |
// | `div(int, int)` | Bagi dua bilangan, hasil struct (`quot` dan `rem`) | `div(10, 3)` → 3 sisa 1 |



//alokasi memori
// | Fungsi               | Deskripsi                |
// | -------------------- | ------------------------ |
// | `malloc(size_t)`     | Alokasi memori mentah    |
// | `calloc(n, size)`    | Alokasi + inisialisasi 0 |
// | `realloc(ptr, size)` | Ubah ukuran memori       |
// | `free(ptr)`          | Hapus memori             |
