#include <iostream>
#include <string>
using namespace std;

#include "pc.cpp"
int main (){
    //keluaran
    cout << "======= Spesifikasi =======" << endl;
    ram limit1("500 GB", 2500000);
    cpu limit2("Intel Core", 3000000);
    disk limit3("SSD", "477 GB", 2000000);
        
    pc Hanifah(limit1, limit2, limit3, (limit1.getPrice() + limit2.getHarga() + limit3.getHarga()));
    
    Hanifah.printPC(); 
    cout << "===========================" << endl;
    
    return 0;
}