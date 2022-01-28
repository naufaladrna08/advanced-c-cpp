## Stack and Heap Memory Allocation

Ada tiga bentuk memori yang dapat digunakan di program:
- Static
- Stack
- Heap

### Stack

Stack adalah bagian spesial dari memori yang menyimpan variabel
jangka pendek. Digunakan untuk menyimpan variabel di dalam fungsi.
Lebih mudah dilacak karena memory disimpan dalam fungsi serara
lokal.

Stack adalah data struktur LIFO (Last In, First Out) yang dimanage
dan dioptimisasi oleh CPU. Stack adalah data struktur linear. Nggak
perlu memanage memorinya sendiri dan akan dialokasikan otomatis jika
variable dibebaskan.

Stack tumbuh dan menyusut saat variable telah dibuat atau dihapus 
dalam fungsi. Setiap fungsi mendeklarasikan variable baru, dia akan
"push" data ke stack. Setiap fungsi itu keluar, maka data yang 
dipush ke stack akan dibebaskan/dihapus. Setelah itu bagian stack
dapat digunakan kembali oleh variable lain.

Ada batasan dari ukuran variable yang dapat disimpan dalam stack. 
Jika program mencoba untuk menyimpan terlalu banyak memory dalam 
stack, maka akan muncul **stack overflow**. Akan terjadi saat semua 
memory dalam stack yang telah dialokasikan lebih lanjut akan mulai 
meluap ke bagian lain dari memori. Stack overflow juga muncul kalau
salah menggunakan recursion.

### Heap

Heap adalah hierachical data struckture. Punya banyak tempat dalam
memory yang dapat digunakan secara dinamis. Memorinya tidak dimanage
otomatis. Heap dimanage oleh programmer, Memori diakses menggunakan
penggunaan pointer. Perlu alokasi dan dealokasi sendiri menggunakan
`malloc()` dan `free()`. Kegagalan untuk membebaskan memory saat 
setelah selesai akan menghasilkan memory leaks. Memory yang masih
digunakan tidak dapat dipakai oleh proses lain.