/*
Program			: Circle.c
Deskripsi		: body dari Circle.h
Nama			: Irsyad Muhammad
Versi/Tanggal	: 1 Maret2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/


#include "Circle.h"

/*Prototype*/

/*KELOMPOK CREATOR */

void MakeCircle(Circle *C, int XX, int YY, float r);
Circle CreateCircle (int XX, int YY, float R);

/*KELOMPOK Get/Set */

float GetRadius(Circle C);
void SetRadius(Circle *C1, float R);

/*KELOMPOK PRINT/CETAK*/

void PrintCircle(Circle C);

/*KELOMPOK LAIN */

float Area(Circle C1);
float Circumf(Circle C1);
boolean CompareCircle(Circle C1, Circle C2);
Circle CopyCircle(Circle C1);


/*BODY DARI FUNGSI YANG ADA*/

/*MEMBUAT CIRCLE*/

void MakeCircle(Circle *C, int XX, int YY, float r){
/*Prosedur untuk membuat Circle dengan nilai dari user*/

	(*C).P.x = XX;
	(*C).P.y = YY;
	(*C).r = r;

}

Circle CreateCircle(int XX, int YY, float R){
/*Fungsi untuk menghasilkan sebuah Cricle berdasarkan nilai-nilai dari user*/
/*input		: XX, YY adalah titik pusat dari lingkaran. R adalah Radius lingkaran*/
/*output	: Sebuah lingkaran dengan titk pusat (XX,YY), Radius R */	
	Circle C;
	
	C.P.x = XX;
	C.P.y = YY;
	C.r	= R;
	
	return C;
	
}
	
/*KELOMPOK Get/Set */

float GetRadius(Circle C){
/* mengembalikan nilai radius dari sebuah Circle */
/* Input	: sebuah radius*/
/* Ouput	: Nilai R dari Circle C*/

	return C.r;
	
}

void SetRadius(Circle *C1, float R){
/* Mengubah nilai Radius sebuah Circle */
/* I.S	: Radius Circle r sembarang*/
/* F.S	: Nilai r dari Circle r menjadi R*/
	(*C1).r = R;
	
}

/*KELOMPOK PRINT/CETAK*/
void PrintCircle(Circle C){
/* Menampilkan Circle : Titik Pusat & Radius */
/* I.S	: sebuah circle C di koordinat sembarang*/
/* F.S	: Circle C tampil di layar*/
	printf("Titik pusat :(%d,%d) Radius : %.2f",C.P.x,C.P.y, C.r);

}

/*KELOMPOK LAIN */
float Area(Circle C1){
/* menghasilkan nilai Luas dari Circle C1*/
/* Input	: koordinat titik pusat lingkaran dan Radiusnya*/
/* Ouput	: Luas lingkaran*/

	return M_PI* pow(C1.r,2);

}

float Circumf(Circle C1){
/* menghasilkan nilai Keliling dari Circle */
/* Input	: koordinat titik pusat lingkaran dan Radiusnya*/
/* Output	: keliling lingkaran*/

	return 2*M_PI*(C1.r);
	
}

boolean CompareCircle(Circle C1, Circle C2){
/* menghasilkan True jika Luas C1 = C2, Gunakan fungsi Luas */
/* Input	: 2 lingkaran sembarang yang akan dibandingkan*/
/* Output	: True/False */

	return Area(C1) == Area(C2);

}

Circle CopyCircle(Circle C1){
/*Mengembalikan sebuah Circle */
/* Input	: Sebuah Circle Circle1 sembarang*/
/* Output	: Nilai Titik pusat dan Radius*/

	return C1;
}
