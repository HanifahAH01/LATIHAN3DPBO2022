<?php
class Pc{
    
    private $CPU; //deklarasi Attribute
    private $RAM; //deklarasi Attribute
    private $DISK; //deklarasi Attribute
    private $total_price; //deklarasi Attribute

    #constructor 
    function __construct(Ram $RAM, Cpu $CPU, Disk $DISK, $total_price)
    {
        $this->total_price = $total_price;
        $this->RAM = $RAM;
        $this->CPU = $CPU;
        $this->DISK = $DISK;
    }
    #set get
    function setCpu(Cpu $CPU){
        $this->CPU = $CPU;
    }
    function getCpu(){
        return $this->CPU;
    }
    function setRam(Ram $RAM){
        $this->RAM = $RAM;
    }
    function getRam(){
        return $this->RAM;
    }
    function setDisk(Disk $DISK){
        $this->DISK = $DISK;
    }
    function getDisk(){
        return $this->DISK;
    }
    function setTotal_price($total_price){
        $this->total_price = $total_price;
    }
    function getTotal_price(){
        return $this->total_price;
    }
    
    #keluaran
    function printPc(){
        $this->CPU->printCpu();
        $this->RAM->printRam();
        $this->DISK->printDisk();
        echo "----- PC -----". "<br>";
        echo "Total Price: " .$this->total_price."<br>";
    }

    function __destruct()
    {
        
    }
}
?>