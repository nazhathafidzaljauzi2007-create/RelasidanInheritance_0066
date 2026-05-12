#ifndef ANAK_H
#define ANAK_H

#include <string>
#include <iostream>
using namespace std;

// membuat class anak di file header anak.h
class anak
{
public:
    //deklarasi member variabel pada class anak
    string nama;

    //membuat constructor dan destructor pada class anak
    anak(string pnama) : nama(pnama) 
    {
        cout << "Anak \"" << nama << "\" ada \n";
    }
    
    ~anak() 
    {
        cout << "Anak \"" << nama << "\" tidak ada \n";
    }
}
