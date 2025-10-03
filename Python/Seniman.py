class Seniman:
    def __init__(self, nama="", umur="", sejak=""):
        self.nama_seniman = nama
        self.umur_seniman = umur
        self.sejak = sejak

    def set_nama(self, nama):
        self.nama_seniman = nama

    def get_nama(self):
        return self.nama_seniman

    def set_umur(self, umur):
        self.umur_seniman = umur

    def get_umur(self):
        return self.umur_seniman

    def set_sejak(self, sejak):
        self.sejak = sejak

    def get_sejak(self):
        return self.sejak

    def add_data_seniman(self, nama, umur, sejak):
        self.nama_seniman = nama
        self.umur_seniman = umur
        self.sejak = sejak
