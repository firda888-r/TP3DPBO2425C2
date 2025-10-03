import java.util.*;

public class Main {
    // Fungsi cetak tabel sederhana
    private static void printTable(List<String[]> rows) {
        if (rows.isEmpty()) return;

        int[] widths = new int[rows.get(0).length];
        for (String[] row : rows) {
            for (int i = 0; i < row.length; i++) {
                if (row[i].length() > widths[i]) widths[i] = row[i].length();
            }
        }

        StringBuilder sb = new StringBuilder();
        for (int w : widths) {
            sb.append("+").append("-".repeat(w));
        }
        sb.append("+");
        String line = sb.toString();

        System.out.println(line);
        for (String[] row : rows) {
            for (int i = 0; i < row.length; i++) {
                System.out.print("|" + String.format("%-" + widths[i] + "s", row[i]));
            }
            System.out.println("|");
            System.out.println(line);
        }
    }

    private static void tampilkanPelukis(List<Pelukis> daftar) {
        System.out.println("\n== DATA PELUKIS ==");
        if (daftar.isEmpty()) {
            System.out.println("Belum ada data pelukis.");
            return;
        }
        List<String[]> rows = new ArrayList<>();
        rows.add(new String[]{"Nama", "Umur", "Sejak", "Judul Lukisan", "Tahun", "Jenis Material", "Nama Material"});
        for (Pelukis p : daftar) {
            rows.add(new String[]{p.getNama(), p.getUmur(), p.getSejak(),
                p.getNamaLukisan(), p.getTahunLukisan(),
                p.getMaterial().getJenisMaterial(), p.getMaterial().getNamaMaterial()});
        }
        printTable(rows);
    }

    private static void tampilkanPemusik(List<Pemusik> daftar) {
        System.out.println("\n== DATA PEMUSIK ==");
        if (daftar.isEmpty()) {
            System.out.println("Belum ada data pemusik.");
            return;
        }
        List<String[]> rows = new ArrayList<>();
        rows.add(new String[]{"Nama", "Umur", "Sejak", "Judul Musik", "Tahun", "Jenis Material", "Nama Material"});
        for (Pemusik p : daftar) {
            rows.add(new String[]{p.getNama(), p.getUmur(), p.getSejak(),
                p.getNamaPemusik(), p.getTahunPemusik(),
                p.getMaterial().getJenisMaterial(), p.getMaterial().getNamaMaterial()});
        }
        printTable(rows);
    }

    private static void tampilkanPematung(List<Pematung> daftar) {
        System.out.println("\n== DATA PEMATUNG ==");
        if (daftar.isEmpty()) {
            System.out.println("Belum ada data pematung.");
            return;
        }
        List<String[]> rows = new ArrayList<>();
        rows.add(new String[]{"Nama", "Umur", "Sejak", "Nama Patung", "Tahun", "Jenis Material", "Nama Material"});
        for (Pematung p : daftar) {
            rows.add(new String[]{p.getNama(), p.getUmur(), p.getSejak(),
                p.getNamaPatung(), p.getTahunPatung(),
                p.getMaterial().getJenisMaterial(), p.getMaterial().getNamaMaterial()});
        }
        printTable(rows);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<Pelukis> daftarPelukis = new ArrayList<>();
        List<Pemusik> daftarPemusik = new ArrayList<>();
        List<Pematung> daftarPematung = new ArrayList<>();

        // Data awal
        daftarPelukis.add(new Pelukis("Affandi", "60 tahun", "1934",
                "Tiga Wajah Papua", "2006", new Material("Cat Minyak", "Kanvas")));
        daftarPelukis.add(new Pelukis("Basuki Abdullah", "78 tahun", "1933",
                "Potrait", "1970", new Material("Cat Minyak", "Kanvas")));
        daftarPemusik.add(new Pemusik("Ed Sheeran", "34 tahun", "2005",
                "Perfect", "2017", new Material("Gitar Kayu", "Sheeran by Lowden")));
        daftarPematung.add(new Pematung("Nyoman Nuarta", "73 tahun", "1979",
                "Patung Garuda Wisnu Kencana", "1997",
                new Material("Stainless steel", "Tembaga dan Kuningan")));

        boolean running = true;
        while (running) {
            System.out.println("\n============== MENU SENIMAN =============");
            System.out.println("1. Tambah Data Pelukis");
            System.out.println("2. Tambah Data Pemusik");
            System.out.println("3. Tambah Data Pematung");
            System.out.println("4. Tampilkan Seluruh Data");
            System.out.println("0. Keluar");
            System.out.print("Pilih menu: ");
            int pilihan = Integer.parseInt(sc.nextLine());

            switch (pilihan) {
                case 0 -> {
                    System.out.println("Program selesai.");
                    running = false;
                }
                case 1 -> {
                    System.out.println("\n[Tambah Data Pelukis]");
                    System.out.print("Nama Pelukis     : "); String nama = sc.nextLine();
                    System.out.print("Umur             : "); String umur = sc.nextLine();
                    System.out.print("Sejak (tahun)    : "); String sejak = sc.nextLine();
                    System.out.print("Judul Lukisan    : "); String judul = sc.nextLine();
                    System.out.print("Tahun Lukisan    : "); String tahun = sc.nextLine();
                    System.out.print("Jenis Material   : "); String jenisMat = sc.nextLine();
                    System.out.print("Nama Material    : "); String namaMat = sc.nextLine();
                    daftarPelukis.add(new Pelukis(nama, umur, sejak, judul, tahun,
                            new Material(jenisMat, namaMat)));
                }
                case 2 -> {
                    System.out.println("\n[Tambah Data Pemusik]");
                    System.out.print("Nama Pemusik     : "); String nama = sc.nextLine();
                    System.out.print("Umur             : "); String umur = sc.nextLine();
                    System.out.print("Sejak (tahun)    : "); String sejak = sc.nextLine();
                    System.out.print("Judul Musik      : "); String judul = sc.nextLine();
                    System.out.print("Tahun Rilis      : "); String tahun = sc.nextLine();
                    System.out.print("Jenis Material   : "); String jenisMat = sc.nextLine();
                    System.out.print("Nama Material    : "); String namaMat = sc.nextLine();
                    daftarPemusik.add(new Pemusik(nama, umur, sejak, judul, tahun,
                            new Material(jenisMat, namaMat)));
                }
                case 3 -> {
                    System.out.println("\n[Tambah Data Pematung]");
                    System.out.print("Nama Pematung    : "); String nama = sc.nextLine();
                    System.out.print("Umur             : "); String umur = sc.nextLine();
                    System.out.print("Sejak (tahun)    : "); String sejak = sc.nextLine();
                    System.out.print("Nama Patung      : "); String judul = sc.nextLine();
                    System.out.print("Tahun Diciptakan : "); String tahun = sc.nextLine();
                    System.out.print("Jenis Material   : "); String jenisMat = sc.nextLine();
                    System.out.print("Nama Material    : "); String namaMat = sc.nextLine();
                    daftarPematung.add(new Pematung(nama, umur, sejak, judul, tahun,
                            new Material(jenisMat, namaMat)));
                }
                case 4 -> {
                    tampilkanPelukis(daftarPelukis);
                    tampilkanPemusik(daftarPemusik);
                    tampilkanPematung(daftarPematung);
                }
                default -> System.out.println("Pilihan tidak valid!");
            }
        }
        sc.close();
    }
}
