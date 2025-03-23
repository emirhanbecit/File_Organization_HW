#include <stdio.h>

int main() {
    FILE *dosya;
    
    // Dosyay� yazma modunda olu�turup metni yaz�yoruz
    dosya = fopen("test.txt", "w");
    if(dosya == NULL) {
        printf("Dosya olusturulamadi!");
        return 1;
    }
    fprintf(dosya, "lorem ipsum dolar sit amet");
    fclose(dosya);
    
    // Dosyay� okuma modunda a� ve i�eri�i kontrol et
    dosya = fopen("test.txt", "r");
    if(dosya == NULL) {
        printf("Dosya acilamadi!");
        return 1;
    }
	
	// dosya i�eri�ini char dizisine aktar�yoruz.
    char icerik[100];
    fgets(icerik, 100, dosya);
    printf("Dosya icerigi: %s", icerik);
    
    fclose(dosya);
    return 0;
}
