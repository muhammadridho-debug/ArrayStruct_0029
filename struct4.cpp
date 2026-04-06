#include <iostream>
#include <string>
using namespace std;

struct alamatDetail
{
    string Desa;
    string Kota;
};

struct mahasiswa
{
    string nama;
    alamatDetail alamat;
    int umur;
};

int main()
{
    //Deklarasi variabel struct
    mahasiswa mhs[3];

    //Mengisi data
    for(int i = 0; i < 3; i++)
    {
        cout << "Isikan Data Nama : ";
        getline(cin, mhs[i].nama);
        cout << "Isikan Data Kota : ";
        getline(cin, mhs[i].alamat.Kota);
        cout << "Isikan Data Desa : ";
        getline(cin, mhs[i].alamat.Desa);
        cout << "Isikan Data Usia : ";
        cin >> mhs[i].umur;
        cin.ignore();
    }
    
    cout << "Data Mahasiswa" << endl;
    for(int i = 0; i < 3; i++)
    {
        cout << "Nama : " << mhs[i].nama << endl;
        cout << "Kota : " << mhs[i].alamat.Kota << endl;
        cout << "Desa : " << mhs[i].alamat.Desa << endl;
        cout << "Usia : " << mhs[i].umur << endl;
    }
}