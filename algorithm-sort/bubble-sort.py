# Bubble sort adalah salah satu algoritma pengurutan sederhana yang bekerja dengan cara membandingkan dan menukar elemen-elemen data satu per satu hingga seluruh daftar terurut. Algoritma ini bekerja dengan cara membandingkan dua elemen berturut-turut dan menukarnya jika urutan tersebut tidak sesuai.


def bubble_sort(arr):
    n = len(arr)

    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

my_list = [64, 34, 25, 12, 22, 11, 90, 8]
print("Original List:", my_list)

bubble_sort(my_list)

print("Sorted List:", my_list)
