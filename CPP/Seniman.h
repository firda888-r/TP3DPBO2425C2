#ifndef SENIMAN_H //if untuk mengecek apakah SENIMAN_H belum didefinisikan 
#define SENIMAN_H //mendefinisikan SENIMAN_H

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

class Seniman{
    protected: //ini supaya atribut parent bisa diakses sama child
        string nama_seniman;
        string umur_seniman;
        string sejak; //tahun awal berkarir

    public:
    Seniman() {}

    // constructor dengan parameter
    Seniman(string nama, string umur, string sejak) {
        this->nama_seniman = nama;
        this->umur_seniman = umur;
        this->sejak = sejak;
    }

    //Get Set nama seniman
    void SetNama(string nama_seniman){
        this->nama_seniman = nama_seniman;
    }
    string GetNama() const {return this->nama_seniman;}
    //Get set umur seniman
    void SetUmur(string umur_seniman){
        this->umur_seniman = umur_seniman;
    }
    string GetUmur() const {return this->umur_seniman;}
    //Get set sejak aktif berkarier
    void SETSejak(string sejak){
        this->sejak = sejak;
    }
    string GetSejak() const {return this->sejak;}

    //Method add data Seniman
    void addDataSeniman(string nama_seniman, string umur_seniman, string sejak) {
        this->nama_seniman = nama_seniman;
        this->umur_seniman = umur_seniman;
        this->sejak = sejak;
    }
    ~Seniman() {
    }

};
#endif