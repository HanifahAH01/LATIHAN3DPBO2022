class Ram():
    # Constructor
    def __init__(self):
        
        self.kapasitas = "" #deklarasi atribut
        self.harga = 0 #deklarasi atribut

    # set get
    def setKapasitas(self, kapasitas):
        self.kapasitas = kapasitas
    def getKapasitas(self):
        return self.kapasitas
    def setHarga(self, harga):
        self.harga = harga
    def getHarga(self):
        return self.harga
    
    #keluaran
    def printRam(self):
        print("---- RAM ----")
        print("Capacity: " + str(self.kapasitas))
        print("RPrice: " + str(self.harga))