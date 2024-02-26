## Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP2 dalam mata kuliah 
## Desain Pemorograman Berbasis Objek untuk keberkahanNya maka saya tidak 
## melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Membuat class
class Product:
    ## Atribut privat
    __id = ""
    __name = ""
    __brand = ""
    __price = ""
    
    ## Constructor
    ## Atribut Publik
    def __init__(self, id = "", name = "", brand = "", price = ""):
        self.__id = id
        self.__name = name
        self.__brand = brand
        self.__price = price
        
    ## Getter dan Setter
        
    def get_id(self):
        return self.__id
    
    def set_id(self, id):
        self.__id = id
        
    def get_name(self):
        return self.__name
    
    def set_name(self, name):
        self.__name = name
        
    def get_brand(self):
        return self.__brand
    
    def set_brand(self, brand):
        self.__brand = brand
    
    
    def get_price(self):
        return self.__price
    
    def set_price(self, price):
        self.__price = price
    
    