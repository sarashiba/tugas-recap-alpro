#include <stdio.h>

int main(){
    int jmlh_elemen, nilai_elemen[100], i;
    int hasil_penjumlhan = 0;

scanf("%d", &jmlh_elemen);

for (int i=0; i<jmlh_elemen; i++){
    scanf("%d", &nilai_elemen[i]);
}

for (int i=0;i<jmlh_elemen; i++){
    hasil_penjumlhan += nilai_elemen[i];
}

printf("%d\n", hasil_penjumlhan);
return 0;

}