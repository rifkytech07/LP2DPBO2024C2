<?php

require('Shirt.php');

$listBaju = array();

$data1 = new Shirt();

$data1->setId("111");
$data1->setName("SportJacket");
$data1->setBrand("Adidas");
$data1->setPrice("Rp.9000000");
$data1->setSize("L");
$data1->setMaterial("Katun");
$data1->SetGender("Man");
$data1->setColour("Biru");
$data1->setSleeve("LongSleeve");

array_push($listBaju, $data1);


$data2 = new Shirt();

$data2->setId("112");
$data2->setName("T-Shirt");
$data2->setBrand("Erigo");
$data2->setPrice("Rp.700000");
$data2->setSize("L");
$data2->setMaterial("Katun");
$data2->SetGender("Man");
$data2->setColour("Hitam");
$data2->setSleeve("ShortSleeve");

array_push($listBaju, $data2);

$data3 = new Shirt();

$data3->setId("111");
$data3->setName("SportJacket");
$data3->setBrand("Adidas");
$data3->setPrice("Rp.9000000");
$data3->setSize("L");
$data3->setMaterial("Katun");
$data3->SetGender("Man");
$data3->setColour("Biru");
$data3->setSleeve("LongSleeve");

array_push($listBaju, $data3);

echo "<table border = '2'>";
   echo "<tr>";
   echo "<th>ID</th>";
   echo "<th>Nama</th>";
   echo "<th>Brand</th>";
   echo "<th>Harga</th>";
   echo "<th>Ukuran</th>";
   echo "<th>Bahan</th>";
   echo "<th>Gender</th>";
   echo "<th>Warna</th>";
   echo "<th>Tipe Sleeve</th>";
   echo "</tr>";


   foreach($listBaju as $daftar){
       echo "<tr>";
       echo "<td>" . $daftar->getId(). "</td>";
       echo "<td>" . $daftar->getName(). "</td>";
       echo "<td>" . $daftar->getBrand() . "</td>";
       echo "<td>" . $daftar->getPrice() . "</td>";
       echo "<td>" . $daftar->getSize() . "</td>";
       echo "<td>" . $daftar->getMaterial() . "</td>";
       echo "<td>" . $daftar->getGender() . "</td>";
       echo "<td>" . $daftar->getColour() . "</td>";
       echo "<td>" . $daftar->getSleeve() . "</td>";
       echo "</tr>";
   }

    echo "</table>";






?>