<?php
class Cpu{
    
    private $nama; //deklarasi Attribute
    private $harga; //deklarasi Attribute

    #constructor
    function __construct($nama, $harga){
        $this->nama = $nama;
        $this->harga = $harga;

    }
    #set get
    function setNama($nama){
        $this->nama = $nama;
    }
    function getNama(){
        return $this->nama;
    }
    function setHarga($harga){
        $this->harga = $harga;
    }
    function getHarga(){
        return $this->harga;
    }
    
    #keluaran
    function printCpu(){
        echo "---- CPU ----". "<br>";
        echo "Name: " .$this->nama."<br>";
        echo "Price: " .$this->harga."<br>";
    }

    function __destruct()
    {
        
    }
}
?>