## Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP2 dalam mata kuliah 
## Desain Pemorograman Berbasis Objek untuk keberkahanNya maka saya tidak 
## melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## import file
from Product import Product

## inheritance dengan file Product
class Clothing(Product):
    ## Atribut privat
    __size = ""
    __material = ""
    __gender = ""

    ## Constructor
    ## Atribut Publik
    def __init__(self, size = "", material = "", gender = ""):
        self.__size = size
        self.__material = material
        self.__gender = gender
    
    ## Getter dan Setter    
        
    def get_size(self):
        return self.__size
    
    def set_size(self, size):
        self.__size = size
        
    def get_material(self):
        return self.__material
    
    def set_material(self, material):
        self.__material = material
        
    def get_gender(self):
        return self.__gender
    
    def set_gender(self, gender):
        self.__gender = gender
    
    
    