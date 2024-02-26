## Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP2 dalam mata kuliah 
## Desain Pemorograman Berbasis Objek untuk keberkahanNya maka saya tidak 
## melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Import file
from Clothing import Clothing

## Inheritance dengan file Clothing
class Shirt(Clothing):
    ## Atribut privat
     __colour = ""
     __sleeveType = ""
     
     ## Constructor
    ## Atribut Publik
     def __init__(self, colour = "", sleeveType = ""):
          self.__colour = colour
          self.__sleeveType = sleeveType
          
    ## Getter dan Setter    
          
     def get_colour(self):
         return self.__colour
     def set_colour(self, colour):
         self.__colour = colour
         
     def get_sleeve(self):
         return self.__sleeveType
     def set_sleeve(self, sleeveType):
         self.__sleeveType = sleeveType      
          
    
        
        
    