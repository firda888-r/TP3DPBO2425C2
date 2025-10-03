public class Pemusik extends Seniman {
    private String namaLagu;
    private String tahunRilis;
    private Material material;

    public Pemusik() {}

    public Pemusik(String nama, String umur, String sejak,
                   String namaLagu, String tahunRilis, Material m) {
        super(nama, umur, sejak);
        this.namaLagu = namaLagu;
        this.tahunRilis = tahunRilis;
        this.material = m;
    }

    public void setNamaPemusik(String namaLagu) { this.namaLagu = namaLagu; }
    public String getNamaPemusik() { return namaLagu; }

    public void setTahunPemusik(String tahunRilis) { this.tahunRilis = tahunRilis; }
    public String getTahunPemusik() { return tahunRilis; }

    public Material getMaterial() { return material; }

    public void addDataPemusik(String nama, String umur, String sejak,
                               String namaLagu, String tahunRilis, Material m) {
        super.addDataSeniman(nama, umur, sejak);
        this.namaLagu = namaLagu;
        this.tahunRilis = tahunRilis;
        this.material = m;
    }
}
