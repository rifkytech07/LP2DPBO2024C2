/*Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP2 dalam mata kuliah 
Desain Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

/*import library */
import java.util.Scanner;
import java.util.ArrayList;

public class main {
    public static void main(String[] args) {

        //deklarasi atribut
        String idProduct;
        String name;
        String brand;
        String price;
        String size;
        String material;
        String gender;
        String colour;
        String sleeve_type;

        

        int menu = 0; //menu

        int i = 0; //parameter looping
        
        //membuat list
        ArrayList<Shirt> customer = new ArrayList<>();

        //scanner untuk membaca input
        Scanner sc = new Scanner(System.in);

       
        System.out.println("SELAMAT DATANG DI DAFTAR PRODUK BAJU");
        System.out.println();

        //selama pilihan menu bukan yang keluar dari program, maka akan terus berjalan
        do {
            System.out.println("SILAHKAN PILIH NOMOR MENU YANG TERSEDIA:");
            System.out.println("1 MENAMBAH ANGGOTA");
            System.out.println("2 MENAMPILKAN ANGGOTA");
            System.out.println("3 KELUAR DARI PROGRAM");

            menu = sc.nextInt(); //input nomor menu
            sc.nextLine();
            
            System.out.println();

            //menu tambah anggota
            if(menu == 1){
                System.out.println("MASUKKAN ID, NAMA, BRAND, HARGA, UKURAN, BAHAN, GENDER, WARNA, DAN TIPE SLEEVE");
                System.out.print("ID: ");
                idProduct = sc.nextLine();
                System.out.print("NAMA: ");
                name = sc.nextLine();
                System.out.print("BRAND: ");
                brand = sc.nextLine();
                System.out.print("HARGA: ");
                price = sc.nextLine();
                System.out.print("UKURAN: ");
                size = sc.nextLine();
                System.out.print("BAHAN: ");
                material = sc.nextLine();
                System.out.print("GENDER: ");
                gender = sc.nextLine();
                System.out.print("WARNA: ");
                colour = sc.nextLine();
                System.out.print("TIPE SLEEVE: ");
                sleeve_type = sc.nextLine();

                //Pointer tampungan
                Shirt data = new Shirt();

                //set data
                data.setiDProduct(idProduct);
                data.setName(name);
                data.setBrand(brand);
                data.setprice(price);
                data.setSize(size);
                data.setMaterial(material);
                data.setGender(gender);
                data.setColour(colour);
                data.setSleeveType(sleeve_type);

                //masukkan ke list
                customer.add(data);

                System.out.println();
                System.out.println("DATA BERHASIL DIMASUKKAN");
                System.out.println();
                
            } //menu 2
            else if(menu == 2){
                if(customer.isEmpty()){ //kalo listnya belum ada
                    System.out.println("MAAF, BELUM ADA DATA YANG TERSEDIA");
                }
                else{ //sebaliknya
                    System.out.println("   DAFTAR PRODUK BAJU   ");
                    System.out.println(); 
                    
                    for(i = 0; i < customer.size(); i++){
                        System.out.println("LIST KE - " + (i + 1)); 
                        System.out.println(" " + customer.get(i).getIdProduct() + " " + customer.get(i).getName() + " " + customer.get(i).getBrand() + " " + customer.get(i).getprice() + " " + customer.get(i).getSize() + " " + customer.get(i).getMaterial() + " " + customer.get(i).getGender() + " " + customer.get(i).getColour() + " " + customer.get(i).getSleeveType());
                    }
                    System.out.println();

                }
            }
            else if(menu == 3){
                System.out.println("TERIMA KASIH TELAH MENGGUNAKAN LAYANAN INI");
            }

        } while (menu != 3);

        sc.close(); //close scanner
        
    }
    
}
