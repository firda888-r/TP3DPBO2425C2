Saya Firda Ridzki Utami dengan NIM 2401626 mengerjakan TP3 dalam Praktikum mata kuliah DPBO untuk keberkahannya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aaminn

Flow kode TP3 bertema Seni :
Dalam desain ini terdapat 4 class utama: Seniman, Pelukis, Pemusik, Pematung, dan tambahan class Material yang composite dengan class Pelukis, Pemusik, Pematung.
1. Class Seniman memiliki atribut Nama, Umur, dan Sejak (tahun awal berkarier).
Di dalam class ini juga terdapat method addData yang berfungsi untuk memungkinkan user menginput data seniman.
2. Class Pelukis, memiliki atribut spesifik seperti NamaLukisan dan TahunLukisan.
3. Pemusik memiliki atribut seperti NamaMusik dan TahunRilis.
4. Pematung memiliki atribut NamaPatung dan TahunDiciptakan.

   <img width="781" height="705" alt="DesainTP3" src="https://github.com/user-attachments/assets/0331798d-353e-407f-93c2-42414de7cfc0" />

Pada desain diagram ini, Seniman merupakan parent class (superclass). Dari Seniman diturunkan tiga child class (subclass), yaitu Pelukis, Pemusik, dan Pematung. Karena satu parent mewarisi beberapa child sekaligus, maka pola pewarisan yang digunakan pada desain ini termasuk Hierarchical Inheritance. Selain itu, ketiga subclass tersebut memiliki hubungan composition dengan class Material. Hubungan ini menunjukkan bahwa setiap karya seni (lukisan, musik, maupun patung) selalu membutuhkan material tertentu sebagai bagian yang tidak terpisahkan. Dengan kata lain, tanpa adanya material, karya seni tersebut tidak dapat diciptakan.

Meskipun ketiga class (Pelukis, Pemusik, dan Pematung) berasal dari parent yang sama, yaitu Seniman, tetapi setiap class tetap ditampilkan dalam tabel yang berbeda. Hal ini dilakukan karena masing-masing subclass memiliki atribut khusus yang berbeda sesuai dengan bidang seninya. 

Alur kode: Program ini diawali dengan inisialisasi data awal yang disimpan dalam tiga daftar, yaitu daftar_pelukis, daftar_pemusik, dan daftar_pematung. Selanjutnya, disediakan menu interaktif yang memungkinkan pengguna untuk menambahkan data baru ke masing-masing daftar atau menampilkan seluruh data yang sudah ada. Pada saat data ditampilkan, setiap daftar akan dicetak dalam bentuk tabel terpisah dengan header yang menyesuaikan atribut khusus dari masing-masing subclass, sehingga informasi yang ditampilkan lebih terstruktur dan mudah dipahami.
CPP before addData:
![cpp_beforeAdd](https://github.com/user-attachments/assets/e291d49e-fdba-4343-baae-22ede48bcfab)
CPP After addData:
![cpp_afterAdd](https://github.com/user-attachments/assets/14e1419c-9740-401e-bfdc-12605681e60b)

Python before addData:
![BeforeAdd_pythom](https://github.com/user-attachments/assets/7ed6cf8b-efca-47c3-b297-0487e9edcdc2)
python after addData:
![AfterAdd_python](https://github.com/user-attachments/assets/055d1b7f-fc30-4189-bfea-d3f12ade47b4)

Java before addData:
![BeforeAdd_java](https://github.com/user-attachments/assets/5b7ee577-2dcc-452e-904f-ecce604f90a3)
Java after addData:
![AfterAdd_java](https://github.com/user-attachments/assets/53f6c326-a8d5-41c6-8d94-e76ce37f31f8)
