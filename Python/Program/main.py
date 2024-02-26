## Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP2 dalam mata kuliah 
## Desain Pemorograman Berbasis Objek untuk keberkahanNya maka saya tidak 
## melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Import file
from Shirt import Shirt

## Deklarasi array
datas = []

## Deklarasi nomor menu
menu = 0

print ("SELAMAT DATANG DI DAFTAR BAJU RIFKY")
print()

## Selama Program tidak diberhentikan, maka akan terus berjalan
while menu != 3:
    print("SILAHKAN MASUKKAN NOMOR MENU YANG TERSEDIA")
    print()
    print("1 MASUKKAN DATA")
    print("2 TAMPILKAN LIST")
    print("3 KELUAR DARI PROGRAM")
    menu = int(input()) ## Input nomor menu
    
    print()
    if menu == 1: ## Masukkan data
        list = Shirt() ## Tampungan
        
        ## Lakukan input
        print("ID: ")
        id = str(input())
        print("NAMA: ")
        name = str(input())
        print("BRAND: ")
        brand = str(input())
        print("HARGA: ")
        price = str(input())
        print("UKURAN: ")
        size = str(input())
        print("BAHAN: ")
        material = str(input())
        print("JENIS KELAMIN: ")
        gender = str(input())
        print("WARNA: ")
        colour = str(input())
        print("TIPE LENGAN: ")
        sleeveType = str(input())
        
        
        ## Set data
        list.set_id(id)
        list.set_name(name)
        list.set_brand(brand)
        list.set_price(price)
        list.set_size(size)
        list.set_material(material)
        list.set_gender(gender)
        list.set_colour(colour)
        list.set_sleeve(sleeveType)
        
        ## Masukkan ke dalam list
        datas.append(list)
        
        print()
        print("DATA BERHASIL DIMASUKKAN")
        print()
    elif menu == 2: ##Tampilkan list
        if not datas: ## Kondisi jika list belum ada
            print("MAAF, LIST BELUM ADA")
        else: ## Kondisi jika list ada
            i = 0
            for data in datas:
                print("LIST KE-", (i + 1))
                print(data.get_id(), " ", data.get_name(), " ", data.get_brand(), " ", data.get_price(), " ", data.get_size(), " ", data.get_material(), " ", data.get_gender(), " ", data.get_colour(), " ",data.get_sleeve())
                i += 1
                print()
    elif menu == 3: ## Keluar dari program
        print("TERIMA KASIH")
        print()