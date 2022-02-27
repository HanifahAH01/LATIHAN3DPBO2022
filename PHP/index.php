<?php
#include class
include "Cpu.php";
include "Ram.php";
include "Disk.php";
include "Pc.php";

echo "======= Spesifikasi =======" ."<br>";

$limit1 = new Ram("500", 2500000);
$limit2 = new Cpu("Intel Core", 3000000);
$limit3 = new Disk("SSD", "477 GB", 2000000);
$Hanifah = new Pc($limit1, $limit2, $limit3, ($limit1->getHarga() + $limit2->getHarga() + $limit3->getHarga()));
$Hanifah->printPc();

echo "=======================";

?>