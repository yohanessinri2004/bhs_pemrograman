#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisikan struktur untuk produk
struct Product {
    char name[50];
    double price;
    int quantity;
};

// Definisikan struktur untuk node dalam linked list
struct Node {
    struct Product product;
    struct Node* next;
};

// Definisikan struktur untuk toko
struct Store {
    struct Node* head;
};

// Fungsi untuk menambahkan produk baru ke toko
void addProduct(struct Store* store, const char* name, double price, int quantity) {
    // Buat node baru
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->product.name, name);
    newNode->product.price = price;
    newNode->product.quantity = quantity;
    newNode->next = NULL;

    // Jika toko masih kosong, jadikan node baru sebagai kepala
    if (store->head == NULL) {
        store->head = newNode;
        return;
    }

    // Jika tidak, cari posisi terakhir dalam linked list dan tambahkan node baru
    struct Node* temp = store->head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Fungsi untuk menampilkan semua produk yang tersedia di toko
void displayProducts(const struct Store* store) {
    struct Node* temp = store->head;
    printf("Produk yang tersedia:\n");
    while (temp != NULL) {
        printf("Nama: %s, Harga: %.2f, Stok: %d\n", temp->product.name, temp->product.price, temp->product.quantity);
        temp = temp->next;
    }
}

// Fungsi untuk memproses pembelian produk
void processPurchase(struct Store* store, const char* productName, int quantity) {
    struct Node* temp = store->head;
    while (temp != NULL) {
        if (strcmp(temp->product.name, productName) == 0) {
            if (temp->product.quantity >= quantity) {
                temp->product.quantity -= quantity;
                printf("Pembelian %s sebanyak %d berhasil.\n", productName, quantity);
                return;
            } else {
                printf("Stok %s tidak mencukupi.\n", productName);
                return;
            }
        }
        temp = temp->next;
    }
    printf("Produk %s tidak ditemukan.\n", productName);
}

// Fungsi untuk memesan produk sesuai dengan input pengguna
void placeOrder(struct Store* store) {
    char productName[50];
    int quantity;

    printf("Masukkan nama produk yang ingin dipesan: ");
    scanf("%s", productName);
    printf("Masukkan jumlah yang ingin dipesan: ");
    scanf("%d", &quantity);

    processPurchase(store, productName, quantity);
}

int main() {
    // Inisialisasi toko
    struct Store myStore;
    myStore.head = NULL;

    // Tambahkan beberapa produk ke toko
    addProduct(&myStore, "Gula", 5000.0, 20);
    addProduct(&myStore, "Kopi", 10000.0, 15);
    addProduct(&myStore, "Sabun", 2000.0, 30);

    // Tampilkan daftar produk yang tersedia
    displayProducts(&myStore);

    // Memasukkan pesanan
    printf("\nMasukkan pesanan Anda:\n");
    placeOrder(&myStore);

    // Tampilkan daftar produk setelah pembelian
    printf("\nStok produk setelah pembelian:\n");
    displayProducts(&myStore);

    return 0;
}