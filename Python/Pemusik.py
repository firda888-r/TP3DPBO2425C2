from Seniman import Seniman
from Material import Material

class Pemusik(Seniman):
    def __init__(self, nama="", umur="", sejak="", nama_lagu="", tahun_rilis="", material=None):
        super().__init__(nama, umur, sejak)
        self.nama_lagu = nama_lagu
        self.tahun_rilis = tahun_rilis
        self.material = material if material else Material()

    def set_nama_pemusik(self, nama_lagu):
        self.nama_lagu = nama_lagu

    def get_nama_pemusik(self):
        return self.nama_lagu

    def set_tahun_pemusik(self, tahun):
        self.tahun_rilis = tahun

    def get_tahun_pemusik(self):
        return self.tahun_rilis

    def get_material(self):
        return self.material

    def add_data_pemusik(self, nama, umur, sejak, nama_lagu, tahun_rilis, material):
        super().add_data_seniman(nama, umur, sejak)
        self.nama_lagu = nama_lagu
        self.tahun_rilis = tahun_rilis
        self.material = material
