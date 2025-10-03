public class Pematung extends Seniman {
    private String namaPatung;
    private String tahunDiciptakan;
    private Material material;

    public Pematung() {}

    public Pematung(String nama, String umur, String sejak,
                    String namaPatung, String tahunDiciptakan, Material m) {
        super(nama, umur, sejak);
        this.namaPatung = namaPatung;
        this.tahunDiciptakan = tahunDiciptakan;
        this.material = m;
    }

    public void setNamaPatung(String namaPatung) { this.namaPatung = namaPatung; }
    public String getNamaPatung() { return namaPatung; }

    public void setTahunPatung(String tahunDiciptakan) { this.tahunDiciptakan = tahunDiciptakan; }
    public String getTahunPatung() { return tahunDiciptakan; }

    public Material getMaterial() { return material; }

    public void addDataPatung(String nama, String umur, String sejak,
                              String namaPatung, String tahunDiciptakan, Material m) {
        super.addDataSeniman(nama, umur, sejak);
        this.namaPatung = namaPatung;
        this.tahunDiciptakan = tahunDiciptakan;
        this.material = m;
    }
}
