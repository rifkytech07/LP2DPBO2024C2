<!-- Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP2 dalam mata kuliah 
Desain Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. 
-->

<?php

require('Clothing.php');

class Shirt extends Clothing{
    private $colour = '';
    private $sleeveType = '';

    public function __construct($colour = '', $sleeveType = ''){
        $this->colour = $colour;
        $this->sleeveType = $sleeveType;
    }

    public function setColour($colour){
        $this->colour = $colour;
    }

    public function getColour(){
        return$this->colour;
    }

    public function setSleeve($sleeveType){
        $this->sleeveType = $sleeveType;
    }

    public function getSleeve(){
        return $this->sleeveType;
    }


}




?>