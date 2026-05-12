#ifndef IBU_H
#define IBU_H

#include <string>
#include <iostream>
using namespace std;

class anak; 

// membuat class ibu di file header ibu.h
class ibu
{
public:
    //deklarasi member variabel pada class ibu
    string nama; 
    
    //membuat constructor dan destructor pada class ibu
    ibu(string pnama) : nama(pnama) 
    {
        cout << "Ibu \"" << nama << "\" ada \n";
    }
    
    ~ibu() 
    {
        cout << "Ibu \"" << nama << "\" tidak ada \n";
    }
};

#endif 