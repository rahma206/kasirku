#include <iostream>

using namespace std;

int main()
{ 
 // Deklarasi variabel
 int pemograman, pkkw, ppkn, pbo, agama;
 float Book, Disc, FixBook;
 
 // Menampilkan daftar harga
 cout<<"\n\t\t=== Daftar barang beserta harganya ==="<<endl;
 cout<<"\t\t| buku pemograman    : Rp 105.000,00 |"<<endl;
 cout<<"\t\t| buku pkkw          : Rp 188.000,00 |"<<endl;
 cout<<"\t\t| buku ppkn          : Rp  55.000,00 |"<<endl;
 cout<<"\t\t| buku pbo           : Rp  10.000,00 |"<<endl;
 cout<<"\t\t| buku agama         : Rp  35.000,00 |"<<endl;
 cout<<"\t\t======================================\n"<<endl;
 
 // Memasukkan jumlah barang yang dibeli
 cout<<"Masukkan jumlah buku pemograman yang dibeli    : "; cin>>pemograman;
 cout<<"Masukkan jumlah buku pkkw yang dibeli          : "; cin>>pkkw;
 cout<<"Masukkan jumlah buku ppkn yang dibeli          : "; cin>>ppkn;
 cout<<"Masukkan jumlah buku pbo yang dibeli           : "; cin>>pbo;
 cout<<"Masukkan jumlah buku agama yang dibeli         : "; cin>>agama;
 cout<<"\n"<<endl;
 
 // Menampilkan customer's bill
 cout<<"\t=========================== Customer's BILL ========================="<<endl;
 cout<<"\t| Jumlah \tDeskripsi \t\tHarga Satuan \tTotal Harga |"<<endl;
 cout<<"\t| ------ \t--------- \t\t------------ \t----------- |"<<endl;
 cout<<"\t|   "<<pemograman<<"\t\t buku pemograman \t105000 \t\t"<<pemograman*105000<<"\t    |"<<endl;
 cout<<"\t|   "<<pkkw<<"\t\t buku pkkw \t\t188000 \t\t"<<pkkw*188000<<"\t    |"<<endl;
 cout<<"\t|   "<<ppkn<<"\t\t buku ppkn \t\t55000 \t\t"<<ppkn*55000<<"\t    |"<<endl;
 cout<<"\t|   "<<pbo<<"\t\t buku pbo       \t10000 \t\t"<<pbo*10000<<"\t    |"<<endl;
 cout<<"\t|   "<<agama<<"\t\t buku agama \t\t35000 \t\t"<<agama*35000<<"\t    |"<<endl;
 cout<<"\t| ------------------------------------------------------------------|"<<endl;
 Book = pemograman*105000+pkkw*188000+ppkn*55000+pbo*10000+agama*35000;
 Disc = 0.10*Book;
 cout<<"\t|\t\t\t Harga Total Buku \t : "<<Book<<"\t    |"<<endl;
 cout<<"\t|\t\t\t Diskon 10% \t\t : "<<Disc<<"   \t    |"<<endl;
 cout<<"\t|\t\t\t Harga Setelah Diskon \t : "<<Book-Disc<<"\t    |"<<endl;
 FixBook = Book-Disc;
 cout<<"\t|\t\t\t ------------------------------------------ |"<<endl;
 cout<<"\t|\t\t\t Total Pembayaran \t: "<<FixBook<<"\t    |"<<endl;
 cout<<"\t====================================================================="<<endl;
}
