public class Pelukis extends Seniman {
    private String namaLukisan;
    private String tahunLukisan;
    private Material material;

    public Pelukis() {}

    public Pelukis(String nama, String umur, String sejak,
                   String namaLukisan, String tahunLukisan, Material m) {
        super(nama, umur, sejak);
        this.namaLukisan = namaLukisan;
        this.tahunLukisan = tahunLukisan;
        this.material = m;
    }

    public void setNamaLukisan(String namaLukisan) { this.namaLukisan = namaLukisan; }
    public String getNamaLukisan() { return namaLukisan; }

    public void setTahunLukisan(String tahunLukisan) { this.tahunLukisan = tahunLukisan; }
    public String getTahunLukisan() { return tahunLukisan; }

    public Material getMaterial() { return material; }

    public void addDataLukisan(String nama, String umur, String sejak,
                               String namaLukisan, String tahunLukisan, Material m) {
        super.addDataSeniman(nama, umur, sejak);
        this.namaLukisan = namaLukisan;
        this.tahunLukisan = tahunLukisan;
        this.material = m;
    }
}
