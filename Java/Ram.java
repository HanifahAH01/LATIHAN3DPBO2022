public class Ram{
    
    private String kapasitas; //deklarasi Attribute
    private int harga; //deklarasi Attribute

    // Constructor
    public Ram(){

    }
    public Ram(String kapasitas, int harga) {
        this.kapasitas = kapasitas;
        this.harga = harga;
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
    
    //keluaran
    public void printRam(){
        System.out.println("---- RAM ----");
        System.out.println("Kapasitas: " + this.kapasitas);
        System.out.println("Harga: " + this.harga);
    }   
}