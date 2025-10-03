class Material:
    def __init__(self, jenis="", nama=""):
        self.jenis_bahan = jenis
        self.nama_bahan = nama

    def set_jenis_material(self, jenis):
        self.jenis_bahan = jenis

    def get_jenis_material(self):
        return self.jenis_bahan

    def set_nama_material(self, nama):
        self.nama_bahan = nama

    def get_nama_material(self):
        return self.nama_bahan

    def add_data_material(self, jenis, nama):
        self.jenis_bahan = jenis
        self.nama_bahan = nama
