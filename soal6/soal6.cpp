#include<iostream>
using namespace std;

int penambahan(int a, int b){
        int hasil_tambah;
        hasil_tambah=a+b;
        return hasil_tambah;
}

int pengurangan(int a, int b){
        int hasil_kurang;
        hasil_kurang=a-b;
        return hasil_kurang;
}

int perkalian(int a, int b){
        int hasil_kali;
        hasil_kali=a*b;
        return hasil_kali;
}
float pembagian(float a, float b){
        float hasil_pembagian=a/b;
        return hasil_pembagian;
}

int main(){
        int pertama,kedua;
        cout<<"Masukkan angka pertama = ";
        cin>>pertama;
        cout<<"Masukkan angka kedua = ";
        cin>>kedua;

        int tambah = penambahan(pertama,kedua);
        int kurang = pengurangan(pertama,kedua);
        int kali = perkalian(pertama,kedua);
        float bagi = pembagian(pertama,kedua);

        cout<<"Hasil penjumlahan = "<<tambah<<endl;
        cout<<"Hasil pengurangan = "<<kurang<<endl;
        cout<<"Hasil perkalian = "<<kali<<endl;
        cout<<"Hasil pembagian= "<<bagi<<endl;;
        return 0;
}