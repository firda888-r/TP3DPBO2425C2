#ifndef PELUKIS_H
#define PELUKIS_H

#include "Seniman.h"
#include "Material.h"
#include <string>
#include <iostream>
using namespace std;
class Pelukis : public Seniman {
    private:
        string nama_lukisan;
        string tahun_lukisan;
        Material material; //composite

    public:
    Pelukis(){}


    Pelukis(string nama_seniman, string umur_seniman, string sejak,
            string nama_lukisan, string tahun_lukisan, Material m)
        : Seniman(nama_seniman, umur_seniman, sejak),
          nama_lukisan(nama_lukisan),
          tahun_lukisan(tahun_lukisan),
          material(m) {}


    //Get Set nama pelukis
    void SetNamaLukisan(string nama_lukisan){
        this->nama_lukisan = nama_lukisan;
    }
    string GetNamaLukisan() const {return this->nama_lukisan;}
    
    //tahun dibuat nya lukisan
    void SetTahunLukisan(string tahun_lukisan){
        this->tahun_lukisan = tahun_lukisan;
    }
    string GetTahunLukisan() const {return this->tahun_lukisan;}

    //agar Material dapat digunakan oleh pelukis saat dipanggil di main
    Material getMaterial() const {
        return material;
    }
   

    //Method add data Lukisan
    void addDataLukisan(string nama_seniman, string umur_seniman, string sejak, string nama_lukisan, string tahun_lukisan, Material m) {
        this->addDataSeniman(nama_seniman, umur_seniman, sejak); //panggil parent
        this->nama_lukisan = nama_lukisan;
        this->tahun_lukisan = tahun_lukisan;
        this->material = m;
    }


    ~Pelukis() {
    }

};
#endif