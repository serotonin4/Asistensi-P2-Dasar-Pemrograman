#include <stdio.h>

// Fungsi untuk menggambar persegi
void drawSquare(int width, int height) {
    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            if(i == 0 || i == height-1 || j == 0 || j == width-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Fungsi untuk menggambar segitiga
void drawTriangle(int height) {
    for(int i = 0; i < height; i++) {
        for(int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Fungsi untuk menggambar diamond
void drawDiamond(int size) {
    // Bagian atas diamond
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size-i-1; j++)
            printf(" ");
        for(int j = 0; j < 2*i+1; j++)
            printf("*");
        printf("\n");
    }
    // Bagian bawah diamond
    for(int i = size-2; i >= 0; i--) {
        for(int j = 0; j < size-i-1; j++)
            printf(" ");
        for(int j = 0; j < 2*i+1; j++)
            printf("*");
        printf("\n");
    }
}

// Fungsi untuk mengecek validitas input
int validateInput(int value, int min, int max) {
    return (value >= min && value <= max);
}

int main() {
    int choice, width, height;
    
    printf("\nPilihan Generator Gambar Sederhana:\n");
    printf("1. Kotak\n");
    printf("2. Segitiga Siku-Siku\n");
    printf("3. Belah Ketupat\n");
    printf("Pilih gambar (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: // Square
            printf("Masukkan lebar (10-100): ");
            scanf("%d", &width);
            printf("Masukkan tinggi (5-75): ");
            scanf("%d", &height);
            
            if(!validateInput(width, 10, 100) || !validateInput(height, 5, 75)) {
                printf("Error: Ukuran tidak valid! Harus dalam rentang yang ditentukan.\n");
                break;
            }
            
            drawSquare(width, height);
            break;

        case 2: // Triangle
            printf("Masukkan tinggi (5-75): ");
            scanf("%d", &height);
            
            if(!validateInput(height, 5, 75)) {
                printf("Error: Ukuran tidak valid! Harus dalam rentang 5-75.\n");
                break;
            }
            
            drawTriangle(height);
            break;

        case 3: // Diamond
            printf("Masukkan ukuran (5-37): "); // Setengah dari max width karena diamond memerlukan 2n+1 width
            scanf("%d", &height);
            
            if(!validateInput(height, 5, 37)) {
                printf("Error: Ukuran tidak valid! Harus dalam rentang 5-37.\n");
                break;
            }
            
            drawDiamond(height);
            break;

        default:
            printf("Pilihan tidak valid!\n");
    }

    return 0;
}