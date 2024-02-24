<!-- Saya Muhammad Rifky Afandi dengan NIM 2202346 mengerjakan LP2 dalam mata kuliah 
Desain Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. 
-->

<?php
    
    class Product{

        private $id = '';
        private $name = '';
        private $brand = '';
        private $price = '';

        public function __construct($id = '', $name = '', $brand = '', $price = ''){
            $this->id = $id;
            $this->name = $name;
            $this->brand = $brand;
            $this->price = $price;
        }

        public function setId($id){
            $this->id = $id;
        }

        public function getId(){
            return $this->id;
        }

        public function setName($name){
            $this->name = $name;
        }

        public function getName(){
            return $this->name;
        }

        public function setBrand($brand){
            $this->brand = $brand;
        }

        public function getBrand(){
            return $this->brand;
        }

        public function setPrice($price){
            $this->price = $price;
        }

        public function getPrice(){
            return $this->price;
        }
    }


?>