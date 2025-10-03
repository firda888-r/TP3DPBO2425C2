public class Seniman {
    protected String namaSeniman;
    protected String umurSeniman;
    protected String sejak;

    public Seniman() {}

    public Seniman(String nama, String umur, String sejak) {
        this.namaSeniman = nama;
        this.umurSeniman = umur;
        this.sejak = sejak;
    }

    public void setNama(String nama) { this.namaSeniman = nama; }
    public String getNama() { return namaSeniman; }

    public void setUmur(String umur) { this.umurSeniman = umur; }
    public String getUmur() { return umurSeniman; }

    public void setSejak(String sejak) { this.sejak = sejak; }
    public String getSejak() { return sejak; }

    public void addDataSeniman(String nama, String umur, String sejak) {
        this.namaSeniman = nama;
        this.umurSeniman = umur;
        this.sejak = sejak;
    }
}
