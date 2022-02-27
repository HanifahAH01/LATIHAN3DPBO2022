public class Cpu{
    
    private String nama; //deklarasi Attribute
    private int harga; //deklarasi Attribute

    // Constructor 
    Cpu(){

    }
    
    Cpu(String nama, int harga){
        this.nama = nama;
        this.harga = harga;
    }
    // Get dan Set
    public String getNama() {
        return nama;
    }
    public void setNama(String nama) {
        this.nama = nama;
    }
    public int getHarga() {
        return harga;
    }
    public void setHarga(int harga) {
        this.harga = harga;
    }
   
    //keluaran
    public void printCpu(){
        System.out.println("---- CPU ----");
        System.out.println("Name: " + this.nama);
        System.out.println("Price: " + this.harga);
    }
}