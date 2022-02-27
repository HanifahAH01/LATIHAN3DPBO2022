#include <iostream>
#include <string>
using namespace std;
class disk{
  
    private:
        string tipe; //deklarasi Attribute
        string kapasitas; //deklarasi Attribute
        int harga; //deklarasi Attribute
    public:
        // Constructor kosong
        disk(){

        }

        disk(string type, string capacity, int price){
            this->tipe = type;
            this->kapasitas = capacity;
            this->harga = price;
        }
        // Get dan Set
        void setTipe(string type){
            this->tipe = type;
        }
        string getTipe(){
            return this->tipe;
        }
        void setKapasitas(int capacity){
            this->kapasitas = capacity;
        }
        string getKapasitas(){
            return this->kapasitas;
        }
        void setHarga(int price){
            this->harga = price;
        }
        int getHarga(){
            return this->harga;
        }
      
        //keluaran
        void printDisk(){
            cout << "---- DISK ---" << endl;
            cout << "Type: " << this->tipe << endl;
            cout << "Capacity: " << this->kapasitas << endl;
            cout << "Price: " << this->harga << endl;
        }
        
        ~disk(){}
};