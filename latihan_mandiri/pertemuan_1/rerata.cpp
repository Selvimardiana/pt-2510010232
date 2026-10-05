// Lab porting: pindahkan rerata.py ke C++.
// Lengkapi tiga bagian bertanda TODO, lalu bangun dengan baseline kelas.
#include <iomanip>
#include <iostream>

int main() {
    int tugas = 80;
    int uts = 75;
    int uas = 90;
    double mingguan = 80;
    double kehadiran = 90;

    // TODO 1: hitung jumlah ketiga nilai. Di C++ tipe variabel wajib ditulis.
    int jumlah = tugas + uts + uas + mingguan + kehadiran;

    // TODO 2: hitung rata-rata. Ingat, int dibagi int membuang pecahannya.
    //         Pakai tipe double dan pastikan pembagiannya bukan pembagian bilangan bulat.
    double rerata = jumlah / 5;

    // TODO 3: cetak hasil dengan dua angka di belakang koma, sama seperti versi Python.
    std::cout << "Jumlah    : " << jumlah << "\n";
    std::cout << "Rata-rata : " << rerata << "\n";
    return 0;
}
// Bagian yang terpengaruh adalah perhitungan jumlah dan rerata. 
// Variabel jumlah menjumlahkan lima nilai, sedangkan rerata membagi jumlah tersebut dengan 5 
// karena terdapat lima nilai yang dihitung.