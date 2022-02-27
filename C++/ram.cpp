#include <iostream>
#include <string>
using namespace std;
class ram{
    
    private:
        string kapasitas; //deklarasi Attribute
        int price; //deklarasi Attribute
    public:

    //Constructor
    ram(){
    }
    
    ram(string capacity, int harga){
        this->kapasitas = capacity;
        this->price = harga;
    }

    // Get dan Set
    void setKapasitas(string capacity){
        this->kapasitas = capacity;
    }
    string getKapasitas(){
        return this->kapasitas;
    }
    void setPrice(int harga){
        this->price = harga;
    }
    int getPrice(){
        return this->price;
    }
    
    //keluaran
    void printRam(){
        cout << "---- RAM ----" << endl;
        cout << "Capacity: " << this->kapasitas << endl;
        cout << "Price: " << this->price << endl;
    }
    
    ~ram(){}
};