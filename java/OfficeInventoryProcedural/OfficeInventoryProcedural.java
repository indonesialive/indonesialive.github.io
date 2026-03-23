package OfficeInventoryProcedural;

//import library
import java.util.*;

//class utama
public class OfficeInventoryProcedural {

    // variabel inventaris
    static List<Map<String, Object>> inventaris = new ArrayList<>();

    // fungsi tambah barang
    static void tambahBarang(String id, String nama, String jenis, String kondisi, int usia, String lokasi) {

        // dictionary baru untuk menyimpan data satu barang
        Map<String, Object> barang = new HashMap<>();
        barang.put("id", id);
        barang.put("nama", nama);
        barang.put("jenis", jenis);
        barang.put("kondisi", kondisi);
        barang.put("usia", usia);
        barang.put("lokasi", lokasi);
        barang.put("tersedia", true);

        // menambahkan barang ke list inventaris
        inventaris.add(barang);
    }

    // fungsi pinjam barang berdasarkan id
    static void pinjamBarang(String id) {

        // loop linear search barang inventaris
        for (Map<String, Object> barang : inventaris) {
            if (barang.get("id").equals(id)) {
                if ((boolean) barang.get("tersedia")) {

                    // ubah status barang yang dipinjam
                    barang.put("tersedia", false);
                    // tampilkan pesan dilayar
                    System.out.println(barang.get("nama") + " berhasil dipinjam");
                }
            }
        }
    }

    // fungsi tampilkan semua barang dan statusnya
    static void tampilInventaris() {
        for (Map<String, Object> barang : inventaris) {
            String status = (boolean) barang.get("tersedia") ? "Tersedia" : "Dipinjam";
            System.out.println(barang.get("id") + " " + barang.get("nama") + " - " + status);
        }
    }

    // fungsi utama
    public static void main(String[] args) {
        tambahBarang("K001", "Laptop Dell", "Komputer", "Baik", 2, "Ruang A");
        tambahBarang("M001", "Meja Kerja", "Meja", "Baik", 5, "Ruang B");

        pinjamBarang("K001");
        tampilInventaris();
    }
}