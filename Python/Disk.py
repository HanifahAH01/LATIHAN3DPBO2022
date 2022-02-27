class Disk():

    #Constructor
    def __init__(self):
        
        self.tipe = "" #deklarasi atribut
        self.kapasitas = "" #deklarasi atribut
        self.harga = 0 #deklarasi atribut

    #set get
    def setTipe(self, tipe):
        self.tipe = tipe
    def getTipe(self):
        return self.tipe
    def setKapasitas(self, kapasitas):
        self.kapasitas = kapasitas
    def getKapasitas(self):
        return self.kapasitas
    def setHarga(self, harga):
        self.harga=  harga
    def getHarga(self):
        return self.harga
    
    #keluaran
    def printDisk(self):
        print("---- DISK ----")
        print("Type: " + str(self.tipe))
        print("Capacity: " + str(self.kapasitas))
        print("Price: " + str(self.harga))