# Mengimpor class-class untuk dijadikan composition di class Pc
from Ram import Ram
from Cpu import Cpu
from Disk import Disk
class Pc():
    # Constructor
    def __init__(self):
        # Attribute-attribute class pc
        self.total_price = 0 
        # Class-class yang telah dibuat dijadikan sebagai composition
        self.RAM = Ram()
        self.CPU = Cpu()
        self.DISK = Disk()
    # Get dan Set tiap attribut
    def setTotal_price(self):
        # Harga dari tiap composition dijumlahkan sebagai total price
        self.total_price = self.CPU.getHarga() + self.RAM.getHarga() + self.DISK.getHarga()
    def getTotal_price(self):
        return self.total_price
    def setRam(self, RAM):
        self.RAM = RAM
    def getRam(self):
        return self.RAM
    def setCpu(self, CPU):
        self.CPU = CPU
    def getCpu(self):
        return self.CPU
    def setDisk(self, DISK):
        self.DISK = DISK
    def getDisk(self):
        return self.DISK
    
    #keluaran
    def printPc(self):
        
        self.CPU.printCpu()
        self.RAM.printRam()
        self.DISK.printDisk()

        print("---- PC ----")
        print("Total Price: Rp " + str(self.total_price))