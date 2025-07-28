#include <iostream>
#include <cmath>
using namespace std;

//sqrt(x)
int main(){
    int x;

    cout << "Selamat datang di sesi perpangkatan!" << endl;
    cout << "Pilih agnka berapa yang anda ingin pangkatkan : ";
    cin >> x;
    cout << "\n";
    cout << "Hasil : " << sqrt(x); 
}


//isi libary C math
// | Fungsi        | Deskripsi         | Contoh            |
// | ------------- | ----------------- | ----------------- |
// | `sqrt(x)`     | Akar kuadrat      | `sqrt(9) = 3`     |
// | `cbrt(x)`     | Akar pangkat tiga | `cbrt(27) = 3`    |
// | `pow(x, y)`   | Pangkat           | `pow(2, 3) = 8`   |
// | `hypot(x, y)` | √(x² + y²)        | `hypot(3, 4) = 5` |

// | Fungsi     | Deskripsi                   | Contoh            |
// | ---------- | --------------------------- | ----------------- |
// | `exp(x)`   | e pangkat x                 | `exp(1) ≈ 2.718`  |
// | `log(x)`   | Logaritma natural (basis e) | `log(e) = 1`      |
// | `log10(x)` | Logaritma basis 10          | `log10(1000) = 3` |
// | `log2(x)`  | Log basis 2                 | `log2(8) = 3`     |


// | Fungsi       | Deskripsi           | Contoh           |
// | ------------ | ------------------- | ---------------- |
// | `ceil(x)`    | Bulat ke atas       | `ceil(2.3) = 3`  |
// | `floor(x)`   | Bulat ke bawah      | `floor(2.9) = 2` |
// | `round(x)`   | Bulat ke terdekat   | `round(2.5) = 3` |
// | `trunc(x)`   | Hapus angka desimal | `trunc(3.8) = 3` |
// | `fmod(x, y)` | Sisa pembagian      | `fmod(7, 2) = 1` |


// | Fungsi                    | Deskripsi                                                   |
// | ------------------------- | ----------------------------------------------------------- |
// | `abs(x)`                  | Nilai mutlak (untuk integer → pakai `<cstdlib>`)            |
// | `fabs(x)`                 | Nilai mutlak untuk float/double                             |
// | `max(x, y)` / `min(x, y)` | Nilai maksimum atau minimum (bisa juga pakai `<algorithm>`) |
