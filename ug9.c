#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum gender{
    Laki_laki, 
    Perempuan
};

typedef struct IvanRoberto{
    int nim;
    char nama[50];
    char kampus[50];
    char prodi[20];
    int semester;
    enum gender myGender;
}InfoMahasiswa;

int main(){
    struct IvanRoberto *InfoMahasiswa = malloc(sizeof(InfoMahasiswa)*100);
    //isi dengan data kalian.
    InfoMahasiswa-> nim = 71230986;
    strcpy(InfoMahasiswa -> nama, "Ivan Roberto Halim");
    strcpy(InfoMahasiswa -> kampus, "UKDW");
    strcpy(InfoMahasiswa -> prodi, "Informatika");
    InfoMahasiswa -> semester = 3;
    InfoMahasiswa -> myGender = Laki_laki; 

    printf("NIM             : %d\n", InfoMahasiswa -> nim);
    printf("Nama            : %s\n", InfoMahasiswa -> nama);
    printf("Jenis Kelamin   : %s\n", InfoMahasiswa -> myGender == Laki_laki? "Laki-laki":"Perempuan");
    printf("Kampus          : %s\n", InfoMahasiswa -> kampus);
    printf("Prodi           : %s\n", InfoMahasiswa -> prodi);
    printf("Semester        : %d\n", InfoMahasiswa -> semester);

    return 0;
}