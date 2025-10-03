public class Material {
    private String jenisBahan;
    private String namaBahan;

    public Material() {}

    public Material(String jenis, String nama) {
        this.jenisBahan = jenis;
        this.namaBahan = nama;
    }

    public void setJenisMaterial(String jenisBahan) {
        this.jenisBahan = jenisBahan;
    }

    public String getJenisMaterial() {
        return jenisBahan;
    }

    public void setNamaMaterial(String namaBahan) {
        this.namaBahan = namaBahan;
    }

    public String getNamaMaterial() {
        return namaBahan;
    }

    public void addDataMaterial(String jenisBahan, String namaBahan) {
        this.jenisBahan = jenisBahan;
        this.namaBahan = namaBahan;
    }
}
