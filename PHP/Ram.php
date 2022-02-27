<?php
class Ram{
    
    private $kapasitas; //deklarasi Attribute
    private $harga; //deklarasi Attribute

    # Constructor 
    function __construct($kapasitas, $harga)
    {
        $this->kapasitas = $kapasitas;
        $this->harga = $harga;
    }
    #set get
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
    function printRam(){
        echo "---- RAM ----". "<br>";
        echo "Capacity: " .$this->kapasitas."<br>";
        echo "Price: " .$this->harga."<br>";
    }
    
    function __destruct()
    {
        
    }
}
?>