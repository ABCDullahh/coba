#include <iostream>

using namespace std;

int main()
{
    string isitabungan, pin, id, YA, IYA,yn ; //VARIABEL STRING
    int tarik, saldo, isi, lul ; //VARIABEL INT

    //UANG PADA TABUNGAN
    int jenis[1];
    jenis[0] = 9900000;


        cout << "=============================================" << endl;
        cout << "=========SELAMAT DATANG DI BANK ABCD=========" << endl;
        cout << "================DIJAMIN AMAN=================" << endl;
        cout << "=============================================" << endl;
        cout << "" << endl;
        cout << "MASUKKAN AKUN : "; cin >> id;
        cout << "NOMOR PIN : ";     cin >> pin;

        do {
            if (id == "ABCD") {
                if (pin == "7799") {
                    cout << "KETIK 1 UNTUK MASUK KE TABUNGAN " << endl;
                    cin >> isitabungan;
                    if (isitabungan == "1") {
                        cout << "REKENING TABUNGAN : " << jenis[0] << endl;
                        cout << "Apakah ingin melakukan tarik tunai ?" << endl;
                        cout << "masukkan jumlah uang yang ingin ditarik : "; cin >> tarik;
                        cout << "" << endl;
                        saldo = jenis[0] - tarik;
                        cout << "sisa saldo anda : " << saldo << endl;
                    }
                   
                }
                else {
                    cout << "PIN Salah Silahkan Coba Lagi" << endl;
                    exit(0);
                }
            }
            //JIKA BELUM MENDAFTAR
            else {
                cout << "" << endl;
                cout << "MOHON MAAF ANDA BELUM TERDAFTAR" << endl;
                cout << "APAKAH ANDA INGIN MENJADI NASABAH ?" << endl;
                cout << "KETIK (1) JIKA INGIN BERGABUNG" << endl;
                cout << "" << endl;
                //BUAT AKUN
                cin >> YA;
                if (YA == "1") {
                    cout << "BUAT NAMA AKUN : "; cin >> id;
                    cout << "BUAT PIN : ";       cin >> pin;

                    //Y ONLY
                    cout << "Apakah anda sudah yakin dengan data diatas ? (Y)" << endl;
                    cin >> yn;
                    if (yn == "Y") {
                        cout << "======================================" << endl;
                        cout << "=ANDA TELAH MENJADI NASABAH BANK ABCD=" << endl;
                        cout << "======================================" << endl;
                        cout << "" << endl;
                        cout << "MASUKAN/SETOR UANG TUNAI" << endl; //SETOR UANG
                        cout << "Jumlah uang yang disetorkan : "; cin >> isi;
                        cout << "" << endl;

                        cout << "=========SETOR SALDO BERHASIL========" << endl;

                        cout << "" << endl;
                        cout << "=====================================" << endl;
                        cout << "====BERIKUT INFORMASI AKUN NASABAH===" << endl; //INFORMASI SALDO
                        cout << "=====================================" << endl;
                        cout << "" << endl;

                        cout << "NAMA REKENING : " << id << endl;
                        cout << "Tabungan : " << isi << endl;
                        cout << "" << endl;

                        cout << "Apakah ingin melakukan tarik tunai ?" << endl; //PENARIKAN SALDO AKUN BARU
                        cout << "masukkan jumlah uang yang ingin ditarik : "; cin >> tarik;
                        saldo = isi - tarik;
                        cout << "" << endl;
                        cout << "=====PENARIKAN BERHASIL====" << endl;
                        cout << "" << endl;
                        cout << "Sisa Saldo Anda : " << saldo << endl;
                        cout << "" << endl;
                        cout << "TERIMAKASIH" << endl;
                        exit(0);
                    }
                }
            }
            cout << "KEMBALI TARIK TEKAN 1" << endl;
            cout << "KELUAR TEKAN 2";
            cout << "" << endl; cin >> lul;
            
        } while (lul != 2);
    return 0;
}

