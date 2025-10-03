#ifndef MATERIAL_H
#define MATERIAL_H

#include <string>
#include <iostream>
using namespace std;

class Material{
    //Atribut private hanya bisa diakseslewat getter setter
    private:
        string jenis_bahan;
        string nama_bahan;

    public:
    Material(){} //contructor default (tanpa paramter)
    //contruktor dengan parameter untuk langsung mengisi atribut 
    Material(string jenis, string nama) {
        jenis_bahan = jenis;
        nama_bahan = nama;
    }

    //Get Set jenis bahan material
    void SetJenisMaterial(string jenis_bahan){
        this->jenis_bahan = jenis_bahan; //this menunjuk pada atribut class material
    }
    string GetJenisMaterial() const {return this->jenis_bahan;}

    //getter setter nama bahan material
    void SetNamaMaterial(string nama_bahan){
        this->nama_bahan = nama_bahan;
    }
    string GetNamaMaterial() const {return this->nama_bahan;}
   
    //Method untuk add data material
    void addDataMaterial(string jenis_bahan, string nama_bahan) {
        this->jenis_bahan = jenis_bahan;
        this->nama_bahan = nama_bahan;
    }

    ~Material() {
    }

};
#endif