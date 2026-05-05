#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Kendaraan {
private:
    int id;
    string nama;

public:
    // 1. Constructor tanpa parameter (default)
    Kendaraan() {
        id = 1503;
        nama = "Kendaraan Umum";
    }

    // 2. Constructor dengan parameter id
    Kendaraan(int idKendaraan) {
        id = idKendaraan;
        nama = "Kendaraan Baru";
    }

    // 3. Constructor dengan parameter nama
    Kendaraan(string namaKendaraan) {
        id = 2065;
        nama = namaKendaraan;
    }

    // 4. Constructor dengan parameter lengkap
    Kendaraan(int idKendaraan, string namaKendaraan) {
        id = idKendaraan;
        nama = namaKendaraan;
    }

    // Getter untuk akses data
    int getId() { return id; }
    string getNama() { return nama; }

    // Method untuk menampilkan 1 kendaraan
    void tampilkan() {
        cout << "ID Kendaraan  : " << id << endl;
        cout << "Nama Kendaraan: " << nama << endl;
        cout << "====================" << endl;
    }
};

// Fungsi untuk menampilkan SEMUA kendaraan
void tampilkanSemua(vector<Kendaraan>& daftarKendaraan) {
    cout << "\n=== DAFTAR SEMUA KENDARAAN ===" << endl;
    cout << "Total Kendaraan: " << daftarKendaraan.size() << endl;
    cout << "==============================" << endl;
    
    for(int i = 0; i < daftarKendaraan.size(); i++) {
        cout << "Kendaraan ke-" << (i+1) << ":" << endl;
        daftarKendaraan[i].tampilkan();
    }
}

int main() {
    vector<Kendaraan> daftarKendaraan;

    cout << "=== PROGRAM MANAJEMEN DATA KENDARAAN ===" << endl;
    cout << "Membuat 4 objek kendaraan dengan 4 jenis constructor..." << endl << endl;

    // 1. Constructor default
    cout << "1. Membuat kendaraan DEFAULT" << endl;
    Kendaraan k1;
    daftarKendaraan.push_back(k1);
    k1.tampilkan();

    // 2. Constructor dengan ID saja
    cout << "\n2. Membuat kendaraan dengan ID" << endl;
    Kendaraan k2(1501);
    daftarKendaraan.push_back(k2);
    k2.tampilkan();

    // 3. Constructor dengan Nama saja
    cout << "\n3. Membuat kendaraan dengan NAMA" << endl;
    Kendaraan k3("Yamaha Mio");
    daftarKendaraan.push_back(k3);
    k3.tampilkan();

    // 4. Constructor lengkap
    cout << "\n4. Membuat kendaraan LENGKAP" << endl;
    Kendaraan k4(2505, "Suzuki Ertiga");
    daftarKendaraan.push_back(k4);
    k4.tampilkan();

    // *** TAMPILKAN SEMUA KENDARAAN ***
    tampilkanSemua(daftarKendaraan);

    return 0;
}