class Cpu():

    #Constructor 
    def __init__(self):
        
        self.nama = "" #deklarasi atribut
        self.harga = 0 #deklarasi atribut
    
    #set get
    def setNama(self, nama):
        self.nama = nama
    def getNama(self):
        return self.nama
    def setHarga(self, harga):
        self.harga = harga
    def getHarga(self):
        return self.harga
   
    #keluaran
    def printCpu(self):
        print("---- CPU ----")
        print("Name: " + str(self.nama))
        print("Price: " + str(self.harga))