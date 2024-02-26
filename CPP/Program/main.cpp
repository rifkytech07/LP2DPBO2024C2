/*Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP2 dalam mata kuliah 
Desain Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/


#include <bits/stdc++.h> //include semua library

#include "Shirt.cpp" //import file shirt

//menggunakan namespace standar
using namespace std;

int main(){
    /*Lakukan deklarasi*/
        int i;
        int n = 0;

        string id;
        string name;
        string brand; 
        string price;
        string size;
        string material;
        string gender;
        string colour;
        string sleeve_type;

        // Buat list
        list<Shirt> llist;


        cout << "DAFTAR PRODUK BAJU" << endl;
        cout << '\n' << endl;

        // Program akan terus berjalan selama tidak diberhentikan
        do
        {
            cout << "SILAHKAN PILIH MENU" << endl;
            cout << "1 MASUKKAN DATA" << endl;
            cout << "2 TAMPILKAN DATA" << endl;
            cout << "3 KELUAR DARI PROGRAM" << endl;

            cin >> n; // input nomor menu

            if(n == 1){ //Masukkan Data
            // Masukkan data yang diinginkan
                cout << "MASUKKAN DATA" <<endl;
                cout << "ID: ";
                cin >> id;
                cout << "NAMA: ";
                cin >> name;
                cout << "BRAND: ";
                cin >> brand;
                cout << "PRICE: ";
                cin >> price;
                cout << "SIZE: ";
                cin >> size;
                cout << "MATERIAL: ";
                cin >> material;
                cout << "GENDER: ";
                cin >> gender;
                cout << "COLOUR: ";
                cin >> colour;
                cout << "TYPE SLEEVE: ";
                cin >> sleeve_type;

                Shirt temp; //Deklarasi tampungan
                // Set data
                temp.setId(id);
                temp.setName(name);
                temp.setBrand(brand);
                temp.setPrice(price);
                temp.setSize(size);
                temp.setMaterial(material);
                temp.setGender(gender);
                temp.setColour(colour);
                temp.setSleeve(sleeve_type);

                // Masukkan ke dalam list
                llist.push_back(temp);

                cout << '\n' << endl;

                cout << "DATA BERHASIL DIMASUKKAN" << endl;

                cout << '\n' << endl;

            }
            else if(n == 2){ // Tampilkan list
                if(llist.empty()){ // Kondisi kalau list belum ada
                    cout << "MAAF DATA TIDAK TERSEDIA" << endl;
                }
                else // Kondisi kalau list ada
                {
                    /* code */
                    cout << "DAFTAR PRODUK BAJU" << endl;
                    cout << '\n' << endl;

                    i = 0; //inisiasi
                    //buat looping dan print
                    for(list<Shirt>::iterator it = llist.begin(); it != llist.end(); it++)
                    {
                        cout << "List ke - " << (i + 1) << endl;
                        cout << it->getId() << " " <<it->getName() << " " << it->getBrand() << " " << it->getPrice() << " " << it->getSize() << " " << it->getMaterial() << " " << it->getGender() << " " << it->getColour() << " " << it->getSleeve() << endl;
                        cout << '\n' << endl;
                        i++;
                    }

                }
                
            }
            else if(n == 3){ // Keluar dari program
                cout << "BYE BYE" << endl;
            }

        } while (n != 3);
        

        return 0;


}