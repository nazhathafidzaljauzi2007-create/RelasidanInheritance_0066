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
    vector<anak*> daftar_anak;
    
    //membuat constructor dan destructor pada class ibu
    ibu(string pnama) : nama(pnama) 
    {
        cout << "Ibu \"" << nama << "\" ada \n";
    };
    
    ~ibu() 
    {
        cout << "Ibu \"" << nama << "\" tidak ada \n";
    };

    // deklarasi prosedur tambahAnak() dan cetakAnak()
    void tambahAnak(anak* pAnak);
    void cetakAnak();
};

// pendefinisian prosedur - prosedur pada class ibu diluar class
void ibu::tambahAnak(anak* pAnak)
{
    daftar_anak.push_back(pAnak);
}

void ibu::cetakAnak()
{
    cout << "Daftar anak dari Ibu \"" << this->nama << "\" : \n";
    for (auto& a : daftar_anak)
    {
        cout << a->nama << "\n";
    }
    cout << endl;
}

#endif 