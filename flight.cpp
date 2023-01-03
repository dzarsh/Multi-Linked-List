#include"flight.h"
#include<iostream>

using namespace std;

void createListJadwal(ListJadwal &L){
    first(L) = nil;
}
adr_jadwalP createElemenJadwal(infotype x){
    adr_jadwalP P = new elemenJadwal;
    info(P) = x;
    next(P) = nil;
    return P;
}

void insertLastJ(ListJadwal &L, adr_jadwalP P){
     adr_jadwalP Q = first(L);

     if(first(L) == nil){
        first(L) = P;
     }else{
        while(next(Q) != nil){
            Q = next(Q);
        }
        next(Q) = P;
     }
}

void showJadwal(ListJadwal L){
    adr_jadwalP P = first(L);
    if(first(L) != nil){
        while(P != nil){
            cout << "Kode Pesawat: " << info(P).kode << endl;
            cout << "Jenis Pesawat: " << info(P).jenis << endl;
            cout << "Tanggal Penerbangan: " << info(P).tanggal << endl;
            cout << "Waktu Keberangkatan: " << info(P).waktu << endl;
            cout << "Asal Keberangkatan: " << info(P).asal << endl;
            cout << "Tujuan Kedatangan: " << info(P).tujuan << endl;
            cout << "Kapasitas Penerbangan: " << info(P).kapasitas << endl;
            P = next(P);
        }
    }else{
        cout << "List Kosong!" << endl;
    }
}

void deleteFirstJ(ListJadwal &L, adr_jadwalP &P){
    if(first(L) != nil){
        P = first(L);
        first(L) = next(first(L));
        next(P) = nil;
    }else if(next(first(L)) == nil){
        P = first(L);
        first(L) = nil;
    }else{
        cout << "List Kosong!"<<endl;
    }
}

adr_jadwalP searchJ(ListJadwal L, string dari, string ke, string tanggal){
    adr_jadwalP P = first(L);

    if(first(L) = nil){
        cout << "List Kosong!" << endl;
    }else{
        while(P != nil){
            if(info(P).asal == dari && info(P).tujuan == ke && info(P).tanggal == tanggal){
                return P;
            }else{
                return nil;
            }
            P = next(P);
        }
    }
}


