#include "flight.h"
#include <iostream>

using namespace std;

int main()
{
    ListJadwal L;
    int n;
    int i = 0;
    adr_jadwalP P;
    infotype plane;

    createListJadwal(L);
    cout << "Banyaknya Jadwal Penerbangan: ";
    cin >> n;
    cout << endl;

    while(i < n){
        cout << "Kode Pesawat: ";
        cin >> plane.kode;
        cout << "Jenis Pesawat: ";
        cin >> plane.jenis;
        cout << "Tanggal Keberangkatan: ";
        cin >> plane.tanggal;
        cout << "Waktu Keberangkatan: ";
        cin >> plane.waktu;
        cout << "Asal Keberangkatan: ";
        cin >> plane.asal;
        cout << "Tujuan Kedatangan: ";
        cin >> plane.tujuan;
        cout << "Kapasitas Penerbangan: ";
        cin >> plane.kapasitas;
        cout << endl;

        P = createElemenJadwal(plane);
        insertLastJ(L, P);
        i++;

    }
    cout << "===Menampilkan Jadwal Penerbangan===" << endl;
    showJadwal(L);

    cout << endl;
    cout << "===Menghapus Jadwal Penerbangan===" << endl;
    deleteFirstJ(L, P);
    showJadwal(L);

    cout << endl;
    cout << "===Mencari Jadwal Penerbangan dari Surabaya ke Malang tanggal 9 Desember 2022===" << endl;
    searchJ(L, "Surabaya", "Malang", "9Desember2022");
    showJadwal(L);

    return 0;


}
