#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED

#include<iostream>

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)
#define nil NULL

using namespace std;

struct jadwalPenerbangan{
    string kode, jenis, tanggal, waktu, asal, tujuan;
    int kapasitas;
};

typedef struct elemenJadwal *adr_jadwalP;

typedef jadwalPenerbangan infotype;

struct elemenJadwal{
    infotype info;
    adr_jadwalP next;
};

struct ListJadwal{
    adr_jadwalP first;
};

void createListJadwal(ListJadwal &L);
adr_jadwalP createElemenJadwal(infotype x);
void insertLastJ(ListJadwal &L, adr_jadwalP P);
void showJadwal(ListJadwal L);
void deleteFirstJ(ListJadwal &L, adr_jadwalP &P);
adr_jadwalP searchJ(ListJadwal L, string dari, string ke, string tanggal);




#endif // FLIGHT_H_INCLUDED
