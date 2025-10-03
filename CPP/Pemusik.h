#ifndef PEMUSIK_H
#define PEMUSIK_H

#include "Seniman.h"
#include "Material.h"
#include <string>
#include <iostream>
using namespace std;

class Pemusik : public Seniman {
private:
    string nama_lagu;
    string tahun_rilis;
    Material material; // composite (Pelukis HAS-A Material)

public:
    Pemusik() {}

    Pemusik(string nama_seniman, string umur_seniman, string sejak,
            string nama_lagu, string tahun_rilis, Material m)
        : Seniman(nama_seniman, umur_seniman, sejak),
          nama_lagu(nama_lagu),
          tahun_rilis(tahun_rilis),
          material(m) {}


    // Setter & Getter nama lukisan
    void setNamaPemusik(string nama_lagu) { this->nama_lagu = nama_lagu; }
    string getNamaPemusik() const { return this->nama_lagu; }

    // Setter & Getter tahun lukisan
    void setTahunPemusik(string tahun_rilis) { this->tahun_rilis = tahun_rilis; }
    string getTahunPemusik() const { return this->tahun_rilis; }
    
    //agar Material dapat digunakan oleh pemusik saat dipanggil di main
    Material getMaterial() const {
        return material;
    }


    // Method add data Lukisan
    void addDataPemusik(string nama_seniman, string umur_seniman, string sejak,
                        string nama_lagu, string tahun_rilis, Material m) {
        addDataSeniman(nama_seniman, umur_seniman, sejak); // panggil parent
        this->nama_lagu = nama_lagu;
        this->tahun_rilis = tahun_rilis;
        this->material = m;
    }

    ~Pemusik() {}
};

#endif
