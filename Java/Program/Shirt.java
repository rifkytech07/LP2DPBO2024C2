/*Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP2 dalam mata kuliah 
Desain Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/


public class Shirt extends Clothing {
    //private attribute
    private String colour;
    private String sleeve_type;

    //Constructor without parameter
    public Shirt(){
        this.colour = "";
        this.sleeve_type = "";
    }

    //constructor with parameter
    public Shirt(String colour, String sleeve_type){
        this.colour = colour;
        this.sleeve_type = sleeve_type;
    }

    /*Getter dan Setter */
    public void setColour(String colour){
        this.colour = colour;
    }

    public String getColour(){
        return this.colour;
    }

    public void setSleeveType(String sleeve_type){
        this.sleeve_type = sleeve_type;
    }

    public String getSleeveType(){
        return this.sleeve_type;
    }
    
}
