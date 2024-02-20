/*Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP2 dalam mata kuliah 
Desain Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

public class Product {
    //private attribute
    private String idProduct;
    private String name;
    private String brand;
    private String price;

    //Constructor without parameter
     public Product(){
        this.idProduct = "";
        this.name = "";
        this.brand = "";
        this.price = "";
    }

    //constructor with parameter
    public Product(String idProduct, String name, String brand, String price){
        this.idProduct = idProduct;
        this.name = name;
        this.brand = brand;
        this.price = price;
    }

    /*Getter dan Setter */
    public void setiDProduct(String idProduct){
            this.idProduct = idProduct;
    }

    public String getIdProduct(){
        return this.idProduct;
    }

    public void setName(String name){
        this.name = name;
    }

    public String getName(){
        return this.name;
    }

    public void setBrand(String brand){
        this.brand = brand;
    }

    public String getBrand(){
        return this.brand;
    }

    public void setprice(String price){
        this.price = price;
    }

    public String getprice(){
        return this.price;
    }


    
}