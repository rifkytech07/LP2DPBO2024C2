/*Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP2 dalam mata kuliah 
Desain Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

//import library
#include <iostream>
#include <string>

//menggunakan namespace standar
using namespace std;

// class product
class Product{
    // Atribut privat
    private:
        string id;
        string name;
        string brand;
        string price;
    
    // Atribut Publik
    public:
        // Constructor
        Product(){
            this->id = "";
            this->name = "";
            this->brand = "";
            this->price = "";
        }
        // Constructor dengan parameter
        Product(string id, string name,string brand, string price){
            this->id = id;
            this->name = name;
            this->brand = brand;
            this->price = price;

        }

        // Getter dan Setter
        string getId(){
            return this->id;
        }

        void setId(string id){
            this->id = id;
        }

        string getName(){
            return this->name;
        }

        void setName(string name){
            this->name = name;
        }

        string getBrand(){
            return this->brand;
        }

        void setBrand(string brand){
            this->brand = brand;
        }

        string getPrice(){
            return this->price;
        }

        void setPrice(string price){
            this->price = price;
        }
        // Destructor
        ~Product(){

        }

};