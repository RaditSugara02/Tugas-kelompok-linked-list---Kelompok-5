#include "header.h"

void Sisip(simpul& L, string nama) {
    simpul baru = new Mahasiswa;
    baru->nama = nama;
    for (int i = 0; i < 14; ++i) {
        baru->kehadiran[i] = 0;
    }
    baru->next = NULL;
    if (L == NULL)
        L = baru;
    else {
        baru->next = L;
        L = baru;
    }
}

void TambahKehadiran(simpul& L, string nama, int pertemuan) {
    simpul bantu = L;
    while (bantu != NULL) {
        if (bantu->nama == nama) {
            if (pertemuan > 0 && pertemuan <= 14) {
                bantu->kehadiran[pertemuan - 1]++;
                cout << "Kehadiran mahasiswa " << nama << " pada pertemuan " << pertemuan << " ditambahkan." << endl;
            } else {
                cout << "Nomor pertemuan tidak valid." << endl;
            }
            return;
        }
        bantu = bantu->next;
    }
    cout << "Mahasiswa tidak ditemukan." << endl;
}

void Cetak(simpul L) {
    if (L == NULL) {
        cout << "Linked List Kosong." << endl;
        return;
    }
    simpul bantu = L;
    cout << "Data Mahasiswa dan Kehadiran:" << endl;
    while (bantu != NULL) {
        cout << "Nama: " << bantu->nama << endl;
        cout << "Kehadiran: ";
        for (int i = 0; i < 14; ++i) {
            cout << bantu->kehadiran[i] << " ";
        }
        cout << endl;
        bantu = bantu->next;
    }
}

