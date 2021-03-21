#include <iostream>
#include <string>
using namespace std;

struct dataPegawai
{
    string nama;
    string nip;
    string jabatan;
};

int main()
{
    struct dataPegawai pgw;

    int gapok;
    int bonus;
    int gajian;

    cout << "masukan nama anda : ";
    cin >> pgw.nama;
    cout << "masukan NIP anda : ";
    cin >> pgw.nip;
    cout << "masukan jabatan anda ( 'direktur' , 'manager', 'administrasi' , 'B') : ";
    cin >> pgw.jabatan;

    if (pgw.jabatan == "direktur")
    {
        gapok = 10000000;
        bonus = gapok * 0.2;
        cout << "\n\n --- DATA BONUS PEGAWAI --- \n\n";
        cout << "NAMA : " << pgw.nama << endl;
        cout << "NIP : " << pgw.nip << endl;
        cout << "Gaji Pokok anda : Rp. " << gapok << endl;
        cout << "Bonus anda 20 % : Rp. " << bonus << endl;
        cout << "\n\n --- TERIMAKSIH --- \n\n ";
    }
    else if (pgw.jabatan == "manager")
    {
        gapok = 7000000;
        bonus = gapok * 0.15;
        cout << "\n\n --- DATA BONUS PEGAWAI --- \n\n";
        cout << "NAMA : " << pgw.nama << endl;
        cout << "NIP : " << pgw.nip << endl;
        cout << "Gaji Pokok anda : Rp. " << gapok << endl;
        cout << "Bonus anda 20 % : Rp. " << bonus << endl;
        cout << "\n\n --- TERIMAKSIH --- \n\n ";
    }
    else if (pgw.jabatan == "administrasi")
    {
        gapok = 5000000;
        bonus = gapok * 0.05;
        cout << "\n\n --- DATA BONUS PEGAWAI --- \n\n";
        cout << "NAMA : " << pgw.nama << endl;
        cout << "NIP : " << pgw.nip << endl;
        cout << "Gaji Pokok anda : Rp. " << gapok << endl;
        cout << "Bonus anda 20 % : Rp. " << bonus << endl;
        cout << "\n\n --- TERIMAKSIH --- \n\n ";
    }
    else if (pgw.jabatan == "B")
    {
        gapok = 3500000;
        bonus = gapok * 0;
        cout << "\n\n --- DATA BONUS PEGAWAI --- \n\n";
        cout << "NAMA : " << pgw.nama << endl;
        cout << "NIP : " << pgw.nip << endl;
        cout << "Gaji Pokok anda : Rp. " << gapok << endl;
        cout << "Bonus anda 20 % : Rp. " << bonus << endl;
        cout << "\n\n --- TERIMAKSIH --- \n\n";
    }
    return 0;
}