import time

# Simpan waktu awal
start_time = time.time()

n = 0
while n < 100000000:
    n += 1

# Hitung waktu eksekusi
end_time = time.time()

# Cetak lama waktu eksekusi
execution_time = end_time - start_time
print(f"Eksekusi memakan waktu: {execution_time} detik")
