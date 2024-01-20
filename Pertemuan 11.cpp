#include <stdio.h>
#include <string.h>

union Siswa{
	char name[100];
	int age;
};


typedef struct Data{
	int angka;
	char huruf;
} D;

struct Mahasiswa{
	char name[100];
	int age;
} mhs2;

int main() {
	//struct
	//membuat sebuah variabel yang menyimpan 
	//banyak value/nilai
	struct Mahasiswa mhs1;
	//SET VALUE
	strcpy(mhs1.name, "Budi");
	mhs1.age = 20;
	
	//print value
	printf("Nama: %s, Umur: %d\n", mhs1.name, mhs1.age);
	
	strcpy(mhs2.name, "Anton");
	mhs2.age = 19;
	
	printf("Nama: %s, Umur: %d\n", mhs2.name, mhs2.age);
	
	struct Mahasiswa mhs3 = {
		"Caca", 24
	};
	
	printf("Nama: %s, Umur: %d\n", mhs3.name, mhs3.age);
	
	//array of struct
	struct Mahasiswa listMahasiswa[100];
	
	strcpy(listMahasiswa[0].name, "Daniel");
	listMahasiswa[0].age = 10;
	
	printf("Nama Mahasiswa ke-0: %s\n", listMahasiswa[0].name);
	
	D data1;
	//cari besar memori dari struct
	int size = sizeof(struct Mahasiswa);
	printf("Size: %d\n", size);
	
	//union
	union Siswa siswa1;
	siswa1.age = 23;
	strcpy(siswa1.name, "Vincent");
	
	printf("Siswa 1, nama: %s, ummur: %d\n", siswa1.name, siswa1.age);
		
	//cari besar memori dari union
	int sizeUnion = sizeof(union Siswa);
	printf("Size: %d\n", sizeUnion);
		
	return 0;
}
