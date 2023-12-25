#include <iostream>
#include <chrono>

int main() {
    // Simpan waktu awal
    auto start_time = std::chrono::high_resolution_clock::now();

    int n = 0;
    while (n < 1000000000) {
        n++;
    }

    // Simpan waktu akhir
    auto end_time = std::chrono::high_resolution_clock::now();

    // Hitung durasi eksekusi dalam nanoseconds
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time);

    // Konversi durasi ke dalam detik dengan presisi tinggi
    double execution_time = duration.count() * 1e-9;

    // Cetak lama waktu eksekusi
    std::cout << "Eksekusi memakan waktu: " << execution_time << " detik" << std::endl;

    return 0;
}
