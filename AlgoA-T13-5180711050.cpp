#include <iostream>
using namespace::std;

void nonmember(){
    string nama;
    int macam,harga,jml,x=0,total;
    cout<<"Masukan Nama Anda : ";cin>>nama;
    cout<<"Berapa Macam Jumlah Barang : ";cin>>macam;
    for (int i=1;i<=macam;i++){
    cout<<"Harga Barang "<<i ;cout<<" : ";cin>>harga;
    cout<<"Jumlah Barang "<<i ;cout<<" : ";cin>>jml;
    x=x+(jml*harga);}
    total=x;
    cout<<"Total Haga Keseluruhan Barang : "<<total;
}
void member (){
    string no,nama;
    cout<<"Masukan Nomor Member : ";cin>>no;
    if (no=="A001")
    nama ="Bayu";
    else if (no=="A002")
    nama = "Irvan";
    else if (no=="A003")
    nama = "Susiati";
    else if (no=="A007")
    nama ="Diana";
    else if(no=="A008")
    nama = "Roni";
    else cout<<"Nomor Member Yang Anda Masukan Salah"<<endl;
    cout<<"Nama Member: "<<nama;
}

void member2(){
    int barang,harga,jml, subtotal=0,diskon,total,hargadiskon;
    cout<<"Berapa Macam Jumlah Barang = ";cin>>barang;
    for (int i=1;i<=barang;i++){
    cout<<"Harga Barang "<<i ;cout<<" : ";cin>>harga;
    cout<<"Jumlah Barang "<<i ;cout<<" : ";cin>>jml;
    subtotal=subtotal+(harga*jml);}
	total = subtotal;
    cout<<"Total Harga Sebelum Di Diskon : "<<total;cout<<endl;
    diskon=total*0.05;
    hargadiskon=total-diskon;
    cout<<"Total Harga Setelah Di Diskon : "<<hargadiskon;
}

main (){
char pilihan;
cout<<"Apakah anda Memeber [y/t] : ";cin>>pilihan;
if (pilihan=='y'||pilihan=='Y'){
        member ();cout<<endl;
        member2();}
else nonmember();

}
