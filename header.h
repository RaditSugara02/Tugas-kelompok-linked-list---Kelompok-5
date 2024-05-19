#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Mahasiswa {
    string nama;
    int kehadiran[14];
    Mahasiswa* next;
};

typedef Mahasiswa* simpul;

void Sisip(simpul& L, string nama);
void TambahKehadiran(simpul& L, string nama, int pertemuan);
void Cetak(simpul L);



