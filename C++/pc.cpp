#include <iostream>
#include <string>
using namespace std;
// class yang akan dijadikan composite
#include "ram.cpp"
#include "disk.cpp"
#include "cpu.cpp"
class pc{
    
    private:
        ram RAM; //deklarasi Attribute
        cpu CPU; //deklarasi Attribute
        disk DISK; //deklarasi Attribute
        int total_price; //deklarasi Attribute
    public:
        // Constructor
        pc(){

        }

        pc(ram a, cpu b, disk c, int total){
            this->RAM = a;
            this->CPU = b;
            this->DISK = c;
            this->total_price = total;
        }

        // Setter Getter
        void setRam(ram a){ 
            this->RAM = a; 
        }
        ram getRam(){ 
            return this->RAM; 
        }
        void setCpu(cpu b){ 
            this->CPU = b;
        }
        cpu getCpu(){ 
            return this->CPU; 
        }
        void setDisk(disk c){ 
            this->DISK = c;
        }
        disk getDisk(){ 
            return this->DISK; 
            }
        void setTotal(int total){ 
            this->total_price = total;
        }
        int getTotal(){ 
            return this->total_price;
        }
        
        //keluaran
        void printPC(){
            this->RAM.printRam();
            this->CPU.printCpu();
            this->DISK.printDisk();
            cout << "---- PC ----" << endl;
            cout << "Total Price: " << this->total_price << endl;
        }
        ~pc(){}
};