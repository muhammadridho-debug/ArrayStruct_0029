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

    // mengisi data
    cout << "Isikan data nama : ";
    cin >> mhs.nama;
    cout << "Isikan data kota : ";
    cin >> mhs.alamat.kota;
    cout << "Isikan data desa : ";
    cin >> mhs.alamat.desa;
    cout << "Isikan data usia : ";
    cin >> mhs.umur;
}