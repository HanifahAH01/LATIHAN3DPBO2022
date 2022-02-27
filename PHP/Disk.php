<?php
class Disk{
    
    private $tipe; //deklarasi Attribute
    private $kapasitas; //deklarasi Attribute
    private $harga; //deklarasi Attribute

    #Constructor 
    function __construct($tipe, $kapasitas, $harga)
    {
        $this->tipe = $tipe;
        $this->kapasitas = $kapasitas;
        $this->harga = $harga;
    }
    #set get
    function setTipe($tipe){
        $this->tipe = $tipe;
    }
    function getTipe(){
        return $this->tipe;
    }
    function setKapasitas($kapasitas){
        $this->kapasitas = $kapasitas;
    }
    function getKapasitas(){
        return $this->kapasitas;
    }
    function setHarga($harga){
        $this->harga = $harga;
    }
    function getHarga(){
        return $this->harga;
    }
    
    #keluaran
    function printDisk(){
        echo "---- DISK ----". "<br>";
        echo "Type: " .$this->tipe."<br>";
        echo "Capacity: " .$this->kapasitas."<br>";
        echo "Price: " .$this->harga."<br>";
    }

    function __destruct()
    {
        
    }
}
?>