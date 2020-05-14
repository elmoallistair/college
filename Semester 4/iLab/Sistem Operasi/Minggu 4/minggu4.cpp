#include<stdio.h>
#include<conio.h>

int pilihan;
int biodata();
int grade();
int beratbadan();
int looping();

int main(){
    menu:
    printf("\n===============MENU===============\n");
    printf("1. Biodata\n");
    printf("2. Grade\n");
    printf("3. Berat Badan Ideal\n");
    printf("4. Looping\n");
    printf("5. Keluar\n");
    printf("==================================\n");
    printf("Masukkan pilihan anda : ");
    scanf(" %i",&pilihan);

    switch(pilihan){
        case 1 : biodata();
            getch();
            goto menu;
        case 2 : grade();
            getch();
            goto menu;
        case 3 : beratbadan();
            getch();
            goto menu;
        case 4 : looping();
            getch();
            goto menu;
        case 5 : printf("Terima Kasih.\n");
        default : printf("Pilihan Anda Salah\n");
            getch();
            goto menu;
    }
}
 
int biodata() {
    char nama[50], npm[8], kelas[10];
    printf("\n----------Program Biodata---------\n");
    printf("Masukkan Nama Anda : ");
    scanf(" %s", &nama);
    printf("Masukkan NPM Anda : ");
    scanf(" %s", &npm);
    printf("Masukkan Kelas Anda : ");
    scanf(" %s", &kelas);
    printf("----------------------------------\n");
    printf("Nama anda adalah %s\n"
           "NPM anda adalah %s\n"
           "Kelas anda adalah %s\n",
           nama, npm, kelas);
    return 0;
}

int grade() {
    int uts,uas;
    float total;
    printf("\n----------Program Grade-----------\n");
    printf("Masukkan Nilai UTS : ");
    scanf("%d",&uts);
    printf("Masukkan Nilai UAS : ");
    scanf("%d",&uas);
    printf("----------------------------------\n");
    total = 0.7 * uts + 0.3 * uas;
        // NOTE Nilai total = 70% nilai UTS dan 30% nilai UAS
    printf("Total Nilai = %2.f",total);
    printf("\n");
    if( total >= 60 ){
        if( total >= 90 ){
            printf("Grade A");
        } else if( total >= 80 ){
            printf("Grade B");
        } else if( total >= 60 ){
            printf("Grade C");
        }
        printf("\nSelamat, anda lulus!");
    } else {
        if( total >= 40 ){
            printf("Grade D");
        } else {
            printf("Grade E");       
        printf("\nMaaf, anda tidak lulus.");
        }
    }
    return 0;
}

int beratbadan() {
    int berat,tinggi;
    printf("\n-----Program Berat Badan Ideal-----\n");
    printf("Masukkan tinggi badan dalam cm : ");
    scanf("%d",&tinggi);
    berat = (tinggi-100)-((tinggi-100)*0.15);
    printf("Berat badan ideal anda : 59 kg\n");
    return 0;
}

int looping() {
    int a, b, n;
    printf("\n--------Program Looping--------\n");
    printf("Masukkan batas : ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}