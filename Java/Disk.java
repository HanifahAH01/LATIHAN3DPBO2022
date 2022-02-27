public class Disk{
    
    private String kapasitas; //deklarasi Attribute
    private int harga; //deklarasi Attribute
    private String tipe; //deklarasi Attribute

    // Constructor
    Disk(){

    }
    public Disk(String kapasitas, int harga, String tipe) {
        this.kapasitas = kapasitas;
        this.harga = harga;
        this.tipe = tipe;
    }
    
    // Get dan Set
    public String getKapasitas() {
        return kapasitas;
    }
    public void setKapasitas(String kapasitas) {
        this.kapasitas = kapasitas;
    }
    public int getHarga() {
        return harga;
    }
    public void setHarga(int harga) {
        this.harga = harga;
    }
    public String getTipe() {
        return tipe;
    }
    public void setTipe(String tipe) {
        this.tipe = tipe;
    }
    
    //keluaran
    public void printDisk(){
        System.out.println("---- DISK ----");
        System.out.println("Type: " + this.tipe);
        System.out.println("Capacity: " + this.kapasitas);
        System.out.println("Price: " + this.harga);
    }
}