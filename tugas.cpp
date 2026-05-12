#include <iostream>
#include <string>
#include <vector>

using namespace std;

class user 
{
public:
    static int globalId; 
    int id;
    string nama;
    string email;

    user(string pNama, string pEmail) {
        nama = pNama;
        email = pEmail;
        generateId(); 
    }

    void generateId() {
        globalId++;
        id = globalId;
    }
};

int user::globalId = 0; 

class admin : public user {
public:
    admin(string pNama, string pEmail) : user(pNama, pEmail) {}

    void showAllMember() {
        cout << "Menampilkan semua member..." << endl;
    }

    void toggleActivationMember() {
        cout << "Mengubah status aktivasi member..." << endl;
    }
};

class member : public user 
{
public:
    string status;

    member(string pNama, string pEmail, string pStatus) : user(pNama, pEmail) {
        status = pStatus;
    }

    void showProfile() {
        cout << "ID    : " << id << endl;
        cout << "Nama  : " << nama << endl;
        cout << "Email : " << email << endl;
        cout << "Status: " << status << endl;
    }
};

int main() 
{
    admin adm1("Admin Satu", "admin1@mail.com");
    member mem1("User Biasa", "user@mail.com", "Aktif");

    adm1.showAllMember();
    mem1.showProfile();

    return 0;
}