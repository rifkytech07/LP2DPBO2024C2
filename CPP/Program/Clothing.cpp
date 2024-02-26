/*Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP2 dalam mata kuliah 
Desain Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/


//import library
#include <iostream>
#include <string>
#include "Product.cpp" //import file product 

//menggunakan namespace standar
using namespace std;

// Inheritance dengan file product
class Clothing : public Product{

    // Atribut privat
    private:
        string size;
        string material;
        string gender;
    
    // Atribut Publik
    public:
        // Constructor
        Clothing(){
            this->size = "";
            this->material = "";
            this->gender = "";
        }
        // Constructor dengan parameter
        Clothing(string size, string material, string gender){
            this->size = size;
            this->material = material;
            this->gender = gender;
        }

        // Getter dan Setter
        string getSize(){
            return this->size;
        }

        void setSize(string size){
            this->size = size;

        }

        string getMaterial(){
            return this->material;
        }

        void setMaterial(string material){
            this->material = material;
        }

        string getGender(){
            return this->gender;
        }

        void setGender(string gender){
            this->gender = gender;
        }

        ~Clothing(){

        }

};