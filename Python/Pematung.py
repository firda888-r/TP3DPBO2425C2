from Seniman import Seniman
from Material import Material

class Pematung(Seniman):
    def __init__(self, nama="", umur="", sejak="", nama_patung="", tahun_diciptakan="", material=None):
        super().__init__(nama, umur, sejak)
        self.nama_patung = nama_patung
        self.tahun_diciptakan = tahun_diciptakan
        self.material = material if material else Material()

    def set_nama_patung(self, nama_patung):
        self.nama_patung = nama_patung

    def get_nama_patung(self):
        return self.nama_patung

    def set_tahun_patung(self, tahun):
        self.tahun_diciptakan = tahun

    def get_tahun_patung(self):
        return self.tahun_diciptakan

    def get_material(self):
        return self.material

    def add_data_patung(self, nama, umur, sejak, nama_patung, tahun_diciptakan, material):
        super().add_data_seniman(nama, umur, sejak)
        self.nama_patung = nama_patung
        self.tahun_diciptakan = tahun_diciptakan
        self.material = material
