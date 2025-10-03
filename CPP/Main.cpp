#include "Pelukis.h"
#include "Pemusik.h"
#include "Pematung.h"
#include "Material.h"
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Fungsi Cetak Tabel 
void printLine(const vector<int>& widths) {
    cout << "+";
    for (int w : widths) cout << string(w, '-') << "+";
    cout << "\n";
}

void printRow(const vector<string>& row, const vector<int>& widths) {
    cout << "|";
    for (int i = 0; i < row.size(); i++) {
        cout << left << setw(widths[i]) << row[i] << "|";
    }
    cout << "\n";
}

vector<int> computeWidths(const vector<string>& headers, const vector<vector<string>>& rows) {
    vector<int> widths(headers.size());
    for (int i = 0; i < headers.size(); i++) widths[i] = headers[i].size();
    for (auto &row : rows) {
        for (int i = 0; i < row.size(); i++) {
            widths[i] = max(widths[i], (int)row[i].size());
        }
    }
    return widths;
}

//Cetak Tabel Pelukis
void tampilkanPelukis(const vector<Pelukis>& daftarPelukis) {
    cout << "\n== DATA PELUKIS ==" << endl;
    if (daftarPelukis.empty()) {
        cout << "Belum ada data pelukis.\n";
        return;
    }

    vector<string> headers = {"Nama", "Umur", "Sejak", "Judul Lukisan", "Tahun", "Jenis Material", "Nama Material"};
    vector<vector<string>> rows;

    for (auto &p : daftarPelukis) {
        rows.push_back({
            p.GetNama(),
            p.GetUmur(),
            p.GetSejak(),
            p.GetNamaLukisan(),
            p.GetTahunLukisan(),
            p.getMaterial().GetJenisMaterial(),
            p.getMaterial().GetNamaMaterial()
        });
    }

    vector<int> widths = computeWidths(headers, rows);
    printLine(widths);
    printRow(headers, widths);
    printLine(widths);
    for (auto &row : rows) {
        printRow(row, widths);
        printLine(widths);
    }
}

//Cetak Tabel Pemusik
void tampilkanPemusik(const vector<Pemusik>& daftarPemusik) {
    cout << "\n== DATA PEMUSIK ==" << endl;
    if (daftarPemusik.empty()) {
        cout << "Belum ada data pemusik.\n";
        return;
    }

    vector<string> headers = {"Nama", "Umur", "Sejak", "Judul Musik", "Tahun", "Jenis Material", "Nama Material"};
    vector<vector<string>> rows;

    for (auto &pm : daftarPemusik) {
        rows.push_back({
            pm.GetNama(),
            pm.GetUmur(),
            pm.GetSejak(),
            pm.getNamaPemusik(),
            pm.getTahunPemusik(),
            pm.getMaterial().GetJenisMaterial(),
            pm.getMaterial().GetNamaMaterial()
        });
    }

    vector<int> widths = computeWidths(headers, rows);
    printLine(widths);
    printRow(headers, widths);
    printLine(widths);
    for (auto &row : rows) {
        printRow(row, widths);
        printLine(widths);
    }
}

//Cetak Tabel Pematung
void tampilkanPematung(const vector<Pematung>& daftarPematung) {
    cout << "\n== DATA PEMATUNG ==" << endl;
    if (daftarPematung.empty()) {
        cout << "Belum ada data pematung.\n";
        return;
    }

    vector<string> headers = {"Nama", "Umur", "Sejak", "Nama Patung", "Tahun", "Jenis Material", "Nama Material"};
    vector<vector<string>> rows;

    for (auto &p : daftarPematung) {
        rows.push_back({
            p.GetNama(),
            p.GetUmur(),
            p.GetSejak(),
            p.GetNamaPatung(),
            p.GetTahunpatung(),
            p.getMaterial().GetJenisMaterial(),
            p.getMaterial().GetNamaMaterial()
        });
    }

    vector<int> widths = computeWidths(headers, rows);
    printLine(widths);
    printRow(headers, widths);
    printLine(widths);
    for (auto &row : rows) {
        printRow(row, widths);
        printLine(widths);
    }
}

int main() {
    vector<Pelukis> daftarPelukis;
    vector<Pemusik> daftarPemusik;
    vector<Pematung> daftarPematung;

    // Data awal (statis)
    daftarPelukis.push_back(Pelukis("Affandi", "60 tahun", "1934", "Tiga Wajah Papua", "2006", Material("Cat Minyak", "Kanvas")));
    daftarPelukis.push_back(Pelukis("Basuki Abdullah", "78 tahun", "1933", "Potrait", "1970", Material("Cat Minyak", "Kanvas")));
    daftarPemusik.push_back(Pemusik("Ed Sheeran", "34 tahun", "2005", "Perfect", "2017", Material("Gitar Kayu", "Sheeran by Lowden")));
    daftarPematung.push_back(Pematung("Nyoman Nuarta", "73 tahun", "1979", "Patung Garuda Wisnu Kencana", "1997", Material("stainless steel", "Tembaga dan Kuningan")));

    int pilihan;
    bool running = true;

    while (running) {
        cout << "\n============== MENU SENIMAN =============" << endl;
        cout << "1. Tambah Data Pelukis" << endl;
        cout << "2. Tambah Data Pemusik" << endl;
        cout << "3. Tambah Data Pematung" << endl;
        cout << "4. Tampilkan Seluruh Data" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore();

        if (pilihan == 0) {
            cout << "Program selesai." << endl;
            running = false;
        }
        else if (pilihan == 1) {
            string nama, umur, sejak, judul, tahun, jenisMat, namaMat;
            cout << "\n[Tambah Data Pelukis]" << endl;
            cout << "Nama Pelukis     : "; getline(cin, nama);
            cout << "Umur             : "; getline(cin, umur);
            cout << "Sejak (tahun)    : "; getline(cin, sejak);
            cout << "Judul Lukisan    : "; getline(cin, judul);
            cout << "Tahun Lukisan    : "; getline(cin, tahun);
            cout << "Jenis Material   : "; getline(cin, jenisMat);
            cout << "Nama Material    : "; getline(cin, namaMat);
            daftarPelukis.push_back(Pelukis(nama, umur, sejak, judul, tahun, Material(jenisMat, namaMat)));
        }
        else if (pilihan == 2) {
            string nama, umur, sejak, judul, tahun, jenisMat, namaMat;
            cout << "\n[Tambah Data Pemusik]" << endl;
            cout << "Nama Pemusik     : "; getline(cin, nama);
            cout << "Umur             : "; getline(cin, umur);
            cout << "Sejak (tahun)    : "; getline(cin, sejak);
            cout << "Judul Musik      : "; getline(cin, judul);
            cout << "Tahun Rilis      : "; getline(cin, tahun);
            cout << "Jenis Material   : "; getline(cin, jenisMat);
            cout << "Nama Material    : "; getline(cin, namaMat);
            daftarPemusik.push_back(Pemusik(nama, umur, sejak, judul, tahun, Material(jenisMat, namaMat)));
        }else if (pilihan == 3) {
            string nama, umur, sejak, judul, tahun, jenisMat, namaMat;
            cout << "\n[Tambah Data Pematung]" << endl;
            cout << "Nama Pematung     : "; getline(cin, nama);
            cout << "Umur             : "; getline(cin, umur);
            cout << "Sejak (tahun)    : "; getline(cin, sejak);
            cout << "nama patung     : "; getline(cin, judul);
            cout << "Tahun diciptakan      : "; getline(cin, tahun);
            cout << "Jenis Material   : "; getline(cin, jenisMat);
            cout << "Nama Material    : "; getline(cin, namaMat);
            daftarPematung.push_back(Pematung(nama, umur, sejak, judul, tahun, Material(jenisMat, namaMat)));

        }
        else if (pilihan == 4) {
            tampilkanPelukis(daftarPelukis);
            tampilkanPemusik(daftarPemusik);
            tampilkanPematung(daftarPematung);
        }
        else {
            cout << "Pilihan tidak valid!\n";
        }
    }

    return 0;
}
