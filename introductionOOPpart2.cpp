#include <iostream>
using namespace std;

class barang{

    public:

        string nama;
        int jumlah;
        string kategori;
        int tanggalProduksi;

        void printData(){
            cout << "Nama: " << nama << endl;
            cout << "Jumlah: " << jumlah << endl;
            cout << "Kategori: " << kategori << endl;
            cout << "Tanggal Produksi: " << tanggalProduksi << endl;
        }
    };

        int main(){
        {
            barang elektronik;
            barang nonElektronik;

            elektronik.nama = "Laptop";
            elektronik.jumlah = 10;
            elektronik.kategori = "Elektronik";
            elektronik.tanggalProduksi = 20220101;

            nonElektronik.nama = "Buku";
            nonElektronik.jumlah = 20;
            nonElektronik.kategori = "Non Elektronik";
            nonElektronik.tanggalProduksi = 20220201;

            elektronik.printData();
            nonElektronik.printData();


        }

};

