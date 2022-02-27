public class Main{
    public static void main(String [] args){
        
        //keluaran
        System.out.println("======= Spesifikasi =======");
        
        Ram limit1 = new Ram("500 Gb", 2500000);
        Cpu limit2 = new Cpu("Intel Core", 3000000);
        Disk limit3 = new Disk("477 GB", 2000000, "SSD" );
        
        Pc Hanifah = new Pc(limit1, limit2, limit3, (limit1.getHarga() + limit2.getHarga() + limit3.getHarga()));
        
        Hanifah.printPc();
        System.out.println("===========================");
    }
}