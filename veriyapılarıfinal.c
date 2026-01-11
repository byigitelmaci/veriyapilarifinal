//Yiðit Bilal Elmacý
//2420171023
//Github=byigitelmaci
//https://www.btkakademi.gov.tr/portal/certificate/validate?certificateId=ZA1Urdebdw

#include <stdio.h>

void bubbleSort(int dizi[], int n) {
    int i, j, gecici;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (dizi[j] > dizi[j + 1]) {
                gecici = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = gecici;
            }
        }
    }
}

int binarySearch(int dizi[], int sol, int sag, int aranan) {
    while (sol <= sag) {
        int orta = sol + (sag - sol) / 2;

        if (dizi[orta] == aranan) {
            return orta;
        }
        
        if (dizi[orta] < aranan) {
            sol = orta + 1;
        } 
		else {
            sag = orta - 1;
        }
    }
    return -1;
}

int main() {
    int n, i, aranan, sonuc;

    printf("Dizi kac elemanli olsun ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("0 dan yuksek bir deger giriniz");
    } 
	else {
        int dizi[n]; 
        
        printf("Dizi elemanlarini giriniz\n");
        for (i = 0; i < n; i++) {
            printf("%d. eleman ", i + 1);
            scanf("%d", &dizi[i]);
        }

        printf("\nGirilen Dizi ");
        for (i = 0; i < n; i++) {
            printf("%d ", dizi[i]);
        }

        bubbleSort(dizi, n);

        printf("\nSiralanmis Dizi ");
        for (i = 0; i < n; i++) {
            printf("%d ", dizi[i]);
        }
        printf("\n");
        printf("\nAranacak sayiyi giriniz ");
        scanf("%d", &aranan);

        sonuc = binarySearch(dizi, 0, n - 1, aranan);

        if (sonuc != -1) {
            printf("Bulundu %d sayisi dizinin %d. indeksinde (sira %d) yer aliyor\n", aranan, sonuc, sonuc + 1);
        } 
		else {
            printf("Sonuc= %d sayisi dizide bulunamadi\n", aranan);
        }
    }

    return 0;
}
