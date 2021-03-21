#include <iostream>
#include <string>
using namespace std;

//membuat struct untuk tanggal lahir
struct tanggalLahir
{
    int tanggal;
    string bulan;
    int tahun;
};

//membuat struct untuk tanggal alamat
struct alamat
{
    string namaJalan;
    string nomorRumah;
    string kota;
    string provinsi;
};

//membuat struct untuk tanggal Mahasiswa
struct mahasiswa
{
    string nim;
    string nama;
    alamat Alamat;
    string tempat;
    tanggalLahir ttl;
};

int main()
{
    struct mahasiswa mhs[5];
    struct tanggalLahir ttl[5];
    struct alamat almt[5];

    int i;
    //membuat perulangan sebanyak 5x untuk meng input data
    for (i = 0; i < 5; i++)
    {
        cout << "MAHASISWA KE- " << i + 1 << endl;
        cout << "NIM : ";
        cin >> mhs[i].nim;
        cout << "Nama : ";
        cin >> mhs[i].nama;
        cout << "-- Alamat --" << endl;
        cout << "Jalan : ";
        cin >> almt[i].namaJalan;
        cout << "No Rumah : ";
        cin >> almt[i].nomorRumah;
        cout << "Kota : ";
        cin >> almt[i].kota;
        cout << "Provinsi : ";
        cin >> almt[i].provinsi;
        cout << "--Tempat Tanggal Lahir -- " << endl;
        cout << "Tempat lahir : ";
        cin >> mhs[i].tempat;
        cout << "Tanggal : ";
        cin >> ttl[i].tanggal;
        cout << "Bulan : ";
        cin >> ttl[i].bulan;
        cout << "Tahun : ";
        cin >> ttl[i].tahun;
    }

    //membuat perulangan untuk menampilkan banyaknya data input an
    for (i = 0; i < 5; i++)
    {
        cout << "\n\n MAHASISWA KE - " << i + 1 << endl;
        cout << "NIM : " << mhs[i].nim << endl;
        cout << "NAMA : " << mhs[i].nama << endl;
        cout << "=== ALAMAT ===" << endl;
        cout << "NAMA JALAN : " << almt[i].namaJalan << endl;
        cout << "NO RUMAH : " << almt[i].nomorRumah << endl;
        cout << "KOTA : " << almt[i].kota << endl;
        cout << "PROVINSI : " << almt[i].provinsi << endl;
        cout << "TEMPAT LAHIR : " << mhs[i].tempat << endl;
        cout << "TANGGAL LAHIR : " << ttl[i].tanggal << ttl[i].bulan << ttl[i].tahun << endl;
    }
    return 0;
}
