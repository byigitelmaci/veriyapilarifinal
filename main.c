//https://www.btkakademi.gov.tr/portal/certificate/validate?certificateId=ZA1Urdebdw
//Yiðit Bilal Elmacý
//2420171023
//Github=byigitelmaci

#include <stdio.h>
#define N

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
    
    int dizi[] = N{5,62,59,7,34,81,73,1,49,14}; 
    
   	
    int n = sizeof(dizi) / sizeof(dizi[0]);
    int i, aranan, sonuc;

    
    
    printf("Tanýmlanan Dizi= ");
    for (i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }

    
    bubbleSort(dizi, n);

    printf("\nSiralanmis Dizi= ");
    for (i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }
    
    printf("\nAranacak sayiyi giriniz= ");
    scanf("%d", &aranan);

    sonuc = binarySearch(dizi, 0, n - 1, aranan);

    if (sonuc != -1) {
        printf("Bulundu %d sayisi siralanmis dizinin %d. indeksinde\n", aranan, sonuc);
    } 
    else {
        printf("Sonuc= %d sayisi dizide bulunamadi\n", aranan);
    }

    return 0;
}
