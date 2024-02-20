/*Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP2 dalam mata kuliah 
Desain Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/


public class Clothing extends Product {
    //private attribute
    private String size;
    private String material;
    private String gender;

    //Constructor without parameter
    public Clothing(){
        this.size = "";
        this.material = "";
        this.gender = "";
    }

    //constructor with parameter
    public Clothing(String size, String material, String gender){
        this.size = size;
        this.material = material;
        this.gender = gender;
    }

    /*Getter dan Setter */
    public void setSize(String size){
        this.size = size;
    }

    public String getSize(){
        return this.size;
    }

    public void setMaterial(String material){
        this.material = material;
    }

    public String getMaterial(){

        return this.material;
    }

    public void setGender(String gender){
        this.gender = gender;
    }

    public String getGender(){
        return this.gender;
    }






}
