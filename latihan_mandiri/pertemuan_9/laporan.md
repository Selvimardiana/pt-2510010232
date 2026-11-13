### Penjelasan nomor 4
Memecah program Parkir Kampus yang awalnya menumpuk menjadi satu bagian ke dalam beberapa fungsi khusus—seperti untuk menampilkan judul, memasukkan data, menghitung biaya, hingga mencetak struk—bertujuan agar struktur kode menjadi jauh lebih rapi, lebih mudah dibaca, serta lebih gampang diperbaiki atau dikembangkan jika terjadi kesalahan.

### Nomor 5
### codingan sebelum di perbaiki
#include <iostream>

using namespace std;

int tarifMotor = 2000; // Variabel global

int hitungBiaya(int lama) {
    return lama * tarifMotor;
}

int main() {
    int lama = 3;

    cout << "Total biaya: Rp"
         << hitungBiaya(lama) << endl;

    return 0;
}

### codingan sesudah di perbaiki
#include <iostream>

using namespace std;

int hitungBiaya(int lama, int tarifMotor) {
    return lama * tarifMotor;
}

int main() {
    int lama = 3;
    int tarifMotor = 2000;

    int total = hitungBiaya(lama, tarifMotor);

    cout << "Total biaya: Rp" << total << endl;

    return 0;
}

### Penjelasan nomor 5
Variabel global tarifMotor yang tadinya bisa diakses dari mana saja sekarang dipindahkan ke dalam fungsi main() dan dikirim ke fungsi hitungBiaya() lewat parameter. Cara ini membuat fungsi tidak lagi bergantung pada data luar, sehingga struktur program jadi jauh lebih rapi, terisolasi dengan baik, dan lebih mudah dipahami.