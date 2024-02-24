<!-- Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP2 dalam mata kuliah 
Desain Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. 
-->

<?php
 require('Product.php');

 class Clothing extends Product{
    private $size = '';
    private $material = '';
    private $gender = '';

    public function __construct($size = '', $material = '', $gender = ''){
        $this->size = $size;
        $this->material = $material;
        $this->gender = $gender;
    }

    public function setSize($size){
        $this->size = $size;
    }

    public function getSize(){
        return $this->size;
    }

    public function setMaterial($material){
        $this->material = $material;
    }

    public function getMaterial(){
        return $this->material;
    }

    public function setGender($gender){
        $this->gender = $gender;
    }

    public function getGender(){
        return $this->gender;
    }
    

 }


?>