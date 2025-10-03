#ifndef PEMATUNG_H
#define PEMATUNG_H

#include "Seniman.h"
#include "Material.h"
#include <string>
#include <iostream>
using namespace std;
class Pematung : public Seniman {
    private:
        string nama_patung;
        string tahun_diciptakan;
        Material material; //composite

    public:
    Pematung(){}


    Pematung(string nama_seniman, string umur_seniman, string sejak,
            string nama_patung, string tahun_diciptakan, Material m)
        : Seniman(nama_seniman, umur_seniman, sejak),
          nama_patung(nama_patung),
          tahun_diciptakan(tahun_diciptakan),
          material(m) {}



    //Get Set nama Pematung
    void SetNamaPematung(string nama_patung){
        this->nama_patung = nama_patung;
    }
    string GetNamaPatung() const {return this->nama_patung;}
    
    //tahun dibuat nya patung
    void SetTahunpatung(string tahun_diciptakan){
        this->tahun_diciptakan = tahun_diciptakan;
    }
    string GetTahunpatung() const {return this->tahun_diciptakan;}

    //agar Material dapat digunakan oleh Pematung saat dipanggil di main
    Material getMaterial() const {
        return material;
    }
   

    //Method add data patung
    void addDatapatung(string nama_seniman, string umur_seniman, string sejak, string nama_patung, string tahun_diciptakan, Material m) {
        this->addDataSeniman(nama_seniman, umur_seniman, sejak); //panggil parent
        this->nama_patung = nama_patung;
        this->tahun_diciptakan = tahun_diciptakan;
        this->material = m;
    }


    ~Pematung() {
    }

};
#endif