/*Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP2 dalam mata kuliah 
Desain Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/


//import library
#include <iostream>
#include <string>
#include "Clothing.cpp" //import file clothing

//menggunakan namespace standar
using namespace std;

// Inheritance dengan file clothing
class Shirt : public Clothing{
    // Atribut privat
    private:
        string colour;
        string sleeve_type;
    
    // Atribut Publik
    public:
    // Constructor
        Shirt(){
            this->colour = "";
            this->sleeve_type = "";
        }
    // Constructor dengan parameter
        Shirt(string colour, string sleeve_type){
            this->colour = colour;
            this->sleeve_type = sleeve_type;
        }

    // Getter dan Setter
        string getColour(){
            return this->colour;
        }

        void setColour(string colour){
            this->colour = colour;
        }

        string getSleeve(){
            return this->sleeve_type;
        }

        void setSleeve(string sleeve_type){
            this->sleeve_type = sleeve_type;
        }

        ~Shirt(){
            
        }
    
};
