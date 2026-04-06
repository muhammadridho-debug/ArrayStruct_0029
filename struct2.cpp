#include <iostream>
using namespace std;

// Mendefinisikan tipe data bentukan (struct)
struct alamatDetail
{
    string kota;
    string desa;
};

struct mahasiswa
{
    string nama;
    alamatDetail alamat; // Diperbaiki: menggunakan struct alamatDetail, bukan string
    int umur;
};

int main()
{
    // deklarasi variable struct
    mahasiswa mhs;
}