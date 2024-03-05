#include<stdio.h>

int sisi;
int kelilingpersegi (int num);
int luaspersegi (int num);
int volumekubus (int num);

int main()
{
    int keliling, luas, volume;

    printf("Masukan panjang sebuah sisi : ");
    scanf("%d", &sisi);

    keliling = kelilingpersegi(sisi);
    luas = luaspersegi(sisi);
    volume = volumekubus(sisi);

    printf("Keliling persegi ketika sisi sepanjang %d: %d\n ", sisi, keliling);
    printf("Luas persegi ketika sisi sepanjang %d: %d\n ", sisi, luas);
    printf("Volume kubus ketika rusuk sepanjang %d: %d ", sisi, volume);

    return 0;
}

int kelilingpersegi (int num)
{
    return 4 * num;
}

int luaspersegi (int num)
{
    return num * num;
}

int volumekubus (int num)
{
    return num * num * num;
}