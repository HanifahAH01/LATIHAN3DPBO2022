
from Ram import Ram
from Cpu import Cpu
from Disk import Disk
from Pc import Pc

print("======= Spesifikasi =======")

limit1 = Ram()
limit1.setKapasitas("500 GB")
limit1.setHarga(2500000)

limit2 = Cpu()
limit2.setNama("Intel Core")
limit2.setHarga(3000000)

limit3 = Disk()
limit3.setTipe("SSD")
limit3.setKapasitas("477 GB")
limit3.setHarga(2000000)

Hanifah = Pc()
Hanifah.setRam(limit1)
Hanifah.setCpu(limit2)
Hanifah.setDisk(limit3)
Hanifah.setTotal_price()
Hanifah.printPc()

print("===========================")
