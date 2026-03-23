package OfficeInventoryOOP;

//class barang inventori
class Barang {
    // attributes (data objek)
    String id;
    String nama;
    String kondisi;
    String lokasi;
    boolean tersedia = true;

    // constructor
    Barang(String id, String nama, String kondisi, String lokasi) {
        this.id = id;
        this.nama = nama;
        this.kondisi = kondisi;
        this.lokasi = lokasi;
    }

    // method pinjam barang
    void pinjam() {
        // cek status barang
        if (tersedia) {
            // ubah status barang
            tersedia = false;
            System.out.println(nama + " berhasil dipinjam");
        } else {
            System.out.println(nama + " tidak tersedia");
        }
    }

    // method kembalikan barang
    void kembalikan() {
        tersedia = true;
    }

    // method tampilkan informasi barang
    void info() {
        String status = tersedia ? "Tersedia" : "Dipinjam";
        System.out.println(id + " " + nama + " - " + status);
    }
}

// class utama
public class OfficeInventoryOOP {

    // main method
    public static void main(String[] args) {

        // buat data objek baru
        Barang laptop = new Barang("K001", "Laptop Dell", "Baik", "Ruang A");
        Barang meja = new Barang("M001", "Meja Kerja", "Baik", "Ruang B");

        // memanggil method (contoh pinjam barang)
        laptop.pinjam();

        // memanggil method tampilkan data
        laptop.info();
        meja.info();
    }
}