from Seniman import Seniman
from Material import Material

class Pelukis(Seniman):
    def __init__(self, nama="", umur="", sejak="", nama_lukisan="", tahun_lukisan="", material=None):
        super().__init__(nama, umur, sejak)
        self.nama_lukisan = nama_lukisan
        self.tahun_lukisan = tahun_lukisan
        self.material = material if material else Material()

    def set_nama_lukisan(self, nama):
        self.nama_lukisan = nama

    def get_nama_lukisan(self):
        return self.nama_lukisan

    def set_tahun_lukisan(self, tahun):
        self.tahun_lukisan = tahun

    def get_tahun_lukisan(self):
        return self.tahun_lukisan

    def get_material(self):
        return self.material

    def add_data_lukisan(self, nama, umur, sejak, nama_lukisan, tahun_lukisan, material):
        super().add_data_seniman(nama, umur, sejak)
        self.nama_lukisan = nama_lukisan
        self.tahun_lukisan = tahun_lukisan
        self.material = material
