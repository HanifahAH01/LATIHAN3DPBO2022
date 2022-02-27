#include <iostream>
#include <string>
using namespace std;
class cpu{
    
    private:
        string nama; //deklarasi Attribute
        int harga; //deklarasi Attribute
    public:
        //Constructor
        cpu(){

        }
    
        cpu(string name, int price){
            this->nama = name;
            this->harga = price;
        }
        // get dan Set
        void setNama(string name){
            this->nama = name;
        }
        string getNama(){
            return this->nama;
        }
        void setHarga(int price){
            this->harga = price;
        }
        int getHarga(){
            return this->harga;
        }
        //keluaran
        void printCpu(){
            cout << "---- CPU ----" << endl;
            cout << "Name: " << this->nama << endl;
            cout << "Price: " << this->harga << endl;
        }
        
        ~cpu(){}
};