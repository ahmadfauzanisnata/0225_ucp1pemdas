// //NOMOR 1//
// int nim; // variabel bertipe integer
// float umur; // variabel bertipe float
// string nama; // variabel bertipe karakter


//  //NOMOR.2//
// #include <iostream>
// using namespace std;

// int main() {
//     int x = 10;

//     // Conditional statement if-else
//     if (x > 5) {
//         cout << "Nilai x lebih besar dari 5" << endl;
//     } else {
//         cout << "Nilai x tidak lebih besar dari 5" << endl;
//     }

//     return 0;
// }

// //NOMOR.3//
// #include <iostream>
// using namespace std;

// // Deklarasi struct untuk representasi data mahasiswa, maksdu dari struct yaitu kumpulan dari satu/lebih variabel yg terkait secara logis,disebut sebagai anggota yang dikelompokkan secra bersana. 
// struct Mahasiswa {
//     string nama;
//     int umur;
//     float ipk;
// };

// int main() {
//     // Deklarasi variabel bertipe struct Mahasiswa
//     Mahasiswa mhs1;

//     // Mengisi nilai untuk variabel mhs1
//     cout << "Masukkan nama mahasiswa: ";
//     getline(cin, mhs1.nama);
//     cout << "Masukkan umur mahasiswa: ";
//     cin >> mhs1.umur;
//     cout << "Masukkan IPK mahasiswa: ";
//     cin >> mhs1.ipk;

//     // Menampilkan data mahasiswa
//     cout << "\nData Mahasiswa:\n";
//     cout << "Nama: " << mhs1.nama << endl;
//     cout << "Umur: " << mhs1.umur << endl;
//     cout << "IPK: " << mhs1.ipk << endl;

//     return 0;
// }

// //NOMOR.4//
// #include <iostream>
// using namespace std;

// // Deklarasi prosedur tanpa nilai kembalian,maksudnya serangkaian perintah yg dieksekusi secara berurutan untuk menyekesaikan tugas
// void greet() {
//     cout << "Hello! Selamat datang." << endl;
// }

// int main() {
//     // Memanggil prosedur greet
//     greet();
//     return 0;
// }
// #include <iostream>
// using namespace std;

// // Deklarasi fungsi dengan nilai kembalian maksudnya jenis prosedur yang mengembalikan nilai setelah dieksekusi
// int tambah(int a, int b) {
//     return a + b;
// }

// int main() {
//     int x = 5, y = 3;
//     // Memanggil fungsi tambah dan menyimpan hasilnya dalam variabel hasil
//     int hasil = tambah(x, y);
//     cout << "Hasil penjumlahan: " << hasil << endl;
//     return 0;
// }

// //NOMOR.5//
// #include <iostream>
// using namespace std;

// int main() {
//     // Looping dengan for untuk mencetak angka dari 1 sampai 5,maksud dari for yaitu struktur pengulangan pengulangan yg digunakan untuk mengeksekusi blok kode secara berulang selama kondisi tertentu terpenuhi.
//     for (int i = 1; i <= 5; ++i) {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int i = 1;
//     // Looping dengan while untuk mencetak angka dari 1 sampai 5, maksud dari while yaitu
//     while (i <= 5) {
//         cout << i << " ";
//         ++i;
//     }
//     cout << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int i = 1;
//     // Looping dengan do-while untuk mencetak angka dari 1 sampai 5
//     do {
//         cout << i << " ";
//         ++i;
//     } while (i <= 5);
//     cout << endl;
//     return 0;
// }

//NO.6//
#include <iostream>

using namespace std;

// Fungsi untuk menentukan status penerimaan berdasarkan nilai tes
string tentukanStatus(int matematika, int bahasaInggris) {
    double rataRata = (matematika + bahasaInggris) / 2.0;
    if (rataRata >= 70 || matematika > 80) {
        return "diterima";
    } else {
        return "ditolak";
    }
}

int main() {
    const int jumlahKandidat = 3;
    string namaKandidat[jumlahKandidat];
    int nilaiMatematika[jumlahKandidat];
    int nilaiBahasaInggris[jumlahKandidat];
    string statusPenerimaan[jumlahKandidat];

    // Mengisi data kandidat dan menghitung status penerimaan
    for (int i = 0; i < jumlahKandidat; ++i) {
        cout << "Masukkan nama kandidat ke-" << i + 1 << ": ";
        getline(cin >> ws, namaKandidat[i]);
        cout << "Masukkan nilai matematika kandidat ke-" << i + 1 << ": ";
        cin >> nilaiMatematika[i];
        cout << "Masukkan nilai bahasa Inggris kandidat ke-" << i + 1 << ": ";
        cin >> nilaiBahasaInggris[i];
        statusPenerimaan[i] = tentukanStatus(nilaiMatematika[i], nilaiBahasaInggris[i]);
    }

    // Menampilkan status penerimaan kandidat
    cout << "\nDaftar status penerimaan kandidat:\n";
    cout << "-----------------------------------\n";
    cout << "Nama\t\tStatus\n";
    cout << "-----------------------------------\n";
    for (int i = 0; i < jumlahKandidat; ++i) {
        cout << namaKandidat[i] << "\t\t" << statusPenerimaan[i] << endl;
    }

    // Mengulang program jika diinginkan
    char ulangi;
    cout << "\nApakah Anda ingin mengulang program? (y/n): ";
    cin >> ulangi;
    if (ulangi == 'y' || ulangi == 'Y') {
        main(); // Memanggil fungsi main kembali
    }

    return 0;
}



