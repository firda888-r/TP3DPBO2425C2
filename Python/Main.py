from Pelukis import Pelukis
from Pemusik import Pemusik
from Pematung import Pematung
from Material import Material

def print_table(headers, rows):
    widths = [len(h) for h in headers]
    for row in rows:
        for i, col in enumerate(row):
            widths[i] = max(widths[i], len(str(col)))

    line = "+" + "+".join("-" * w for w in widths) + "+"
    print(line)
    print("|" + "|".join(f"{headers[i]:<{widths[i]}}" for i in range(len(headers))) + "|")
    print(line)
    for row in rows:
        print("|" + "|".join(f"{str(row[i]):<{widths[i]}}" for i in range(len(row))) + "|")
        print(line)

def tampilkan_pelukis(daftar):
    print("\n== DATA PELUKIS ==")
    if not daftar:
        print("Belum ada data pelukis.")
        return
    headers = ["Nama", "Umur", "Sejak", "Judul Lukisan", "Tahun", "Jenis Material", "Nama Material"]
    rows = [[p.get_nama(), p.get_umur(), p.get_sejak(),
             p.get_nama_lukisan(), p.get_tahun_lukisan(),
             p.get_material().get_jenis_material(), p.get_material().get_nama_material()]
            for p in daftar]
    print_table(headers, rows)

def tampilkan_pemusik(daftar):
    print("\n== DATA PEMUSIK ==")
    if not daftar:
        print("Belum ada data pemusik.")
        return
    headers = ["Nama", "Umur", "Sejak", "Judul Musik", "Tahun", "Jenis Material", "Nama Material"]
    rows = [[p.get_nama(), p.get_umur(), p.get_sejak(),
             p.get_nama_pemusik(), p.get_tahun_pemusik(),
             p.get_material().get_jenis_material(), p.get_material().get_nama_material()]
            for p in daftar]
    print_table(headers, rows)

def tampilkan_pematung(daftar):
    print("\n== DATA PEMATUNG ==")
    if not daftar:
        print("Belum ada data pematung.")
        return
    headers = ["Nama", "Umur", "Sejak", "Nama Patung", "Tahun", "Jenis Material", "Nama Material"]
    rows = [[p.get_nama(), p.get_umur(), p.get_sejak(),
             p.get_nama_patung(), p.get_tahun_patung(),
             p.get_material().get_jenis_material(), p.get_material().get_nama_material()]
            for p in daftar]
    print_table(headers, rows)

def main():
    daftar_pelukis = [
        Pelukis("Affandi", "60 tahun", "1934", "Tiga Wajah Papua", "2006", Material("Cat Minyak", "Kanvas")),
        Pelukis("Basuki Abdullah", "78 tahun", "1933", "Potrait", "1970", Material("Cat Minyak", "Kanvas"))
    ]
    daftar_pemusik = [
        Pemusik("Ed Sheeran", "34 tahun", "2005", "Perfect", "2017", Material("Gitar Kayu", "Sheeran by Lowden"))
    ]
    daftar_pematung = [
        Pematung("Nyoman Nuarta", "73 tahun", "1979", "Patung Garuda Wisnu Kencana", "1997",
                 Material("Stainless steel", "Tembaga dan Kuningan"))
    ]

    while True:
        print("\n============== MENU SENIMAN =============")
        print("1. Tambah Data Pelukis")
        print("2. Tambah Data Pemusik")
        print("3. Tambah Data Pematung")
        print("4. Tampilkan Seluruh Data")
        print("0. Keluar")
        pilihan = input("Pilih menu: ")

        if pilihan == "0":
            print("Program selesai.")
            break
        elif pilihan == "1":
            print("\n[Tambah Data Pelukis]")
            nama = input("Nama Pelukis     : ")
            umur = input("Umur             : ")
            sejak = input("Sejak (tahun)    : ")
            judul = input("Judul Lukisan    : ")
            tahun = input("Tahun Lukisan    : ")
            jenisMat = input("Jenis Material   : ")
            namaMat = input("Nama Material    : ")
            daftar_pelukis.append(Pelukis(nama, umur, sejak, judul, tahun, Material(jenisMat, namaMat)))
        elif pilihan == "2":
            print("\n[Tambah Data Pemusik]")
            nama = input("Nama Pemusik     : ")
            umur = input("Umur             : ")
            sejak = input("Sejak (tahun)    : ")
            judul = input("Judul Musik      : ")
            tahun = input("Tahun Rilis      : ")
            jenisMat = input("Jenis Material   : ")
            namaMat = input("Nama Material    : ")
            daftar_pemusik.append(Pemusik(nama, umur, sejak, judul, tahun, Material(jenisMat, namaMat)))
        elif pilihan == "3":
            print("\n[Tambah Data Pematung]")
            nama = input("Nama Pematung    : ")
            umur = input("Umur             : ")
            sejak = input("Sejak (tahun)    : ")
            judul = input("Nama Patung      : ")
            tahun = input("Tahun Diciptakan : ")
            jenisMat = input("Jenis Material   : ")
            namaMat = input("Nama Material    : ")
            daftar_pematung.append(Pematung(nama, umur, sejak, judul, tahun, Material(jenisMat, namaMat)))
        elif pilihan == "4":
            tampilkan_pelukis(daftar_pelukis)
            tampilkan_pemusik(daftar_pemusik)
            tampilkan_pematung(daftar_pematung)
        else:
            print("Pilihan tidak valid!")

if __name__ == "__main__":
    main()
