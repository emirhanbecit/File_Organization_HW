#include <stdio.h>

int main() {
    FILE *dosya;
    
    // Dosyayý yazma modunda oluþturup metni yazýyoruz
    dosya = fopen("test.txt", "w");
    if(dosya == NULL) {
        printf("Dosya olusturulamadi!");
        return 1;
    }
    fprintf(dosya, "lorem ipsum dolar sit amet");
    fclose(dosya);
    
    // Dosyayý okuma modunda aç ve içeriði kontrol et
    dosya = fopen("test.txt", "r");
    if(dosya == NULL) {
        printf("Dosya acilamadi!");
        return 1;
    }
	
	// dosya içeriðini char dizisine aktarýyoruz.
    char icerik[100];
    fgets(icerik, 100, dosya);
    printf("Dosya icerigi: %s", icerik);
    
    fclose(dosya);
    return 0;
}
