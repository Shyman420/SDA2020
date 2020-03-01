#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include "boolean.h"
#include "point.h"


/*  PROTOTYPE */

/*Membuat Point*/
void MakePoint(POINT *P, int XX, int YY);
POINT CreatePoint (int XX, int YY);

/* PRINT/CETAK*/
void PrintPoint(POINT P);

/* GET / SET */
int GetX(POINT P);
void SetX(POINT *P,int XX);
int GetY(POINT P);
void SetY(POINT *P,int YY);
void ReSet(POINT *P);

/*KELOMPOK LAIN */
int Kuadran(POINT P);
boolean IsOnSumbuX(POINT P);
boolean IsOnSumbuY(POINT P);
boolean IsOrigin(POINT P);
void NextX(POINT *PP);
void NextX_N(POINT *PP, int N);
void PrevX(POINT *P);
void PrevX_N(POINT *P, int N);
int Jarak (POINT P1, POINT P2);


/*Body dari fungsi-fungsi yang ada */
/*MEMBUAT POINT */
void MakePoint(POINT *P, int XX, int YY){
  /*Prosedur untuk membuat POINT dengan nilai dari user*/
	(*P).x=XX;
	(*P).y=YY;
}

POINT CreatePoint (int XX, int YY) {
/*Fungsi untuk menghasilkan sebuah POINT berdasarkan nilai-nilai dari user*/
/* Input  :  XX, YY  adalah nilai-nilai pembentuk Point    */
/* Output :  Sebuah point dengan koordinat (XX,YY)      */
   POINT P;
    P.x = XX;
    P.y = YY;
    return P;
}

/* GET / SET */
int GetX(POINT P) { 
/*Mengembalikan nilai x dari sebuah POINT */
  /* Input    : Sebuah Point  */
 /*  Output :  Nilai X dari Point P */

     return P.x;
}

void SetX(POINT *P, int XX){
  /* Mengubah nilai X dari sebuah POINT */
   /*  I.S  :  Koordinat Point P sembarang   */
   /*  F.S  : nilai x dari Point P menjadi XX */
  (*P).x = XX;

}

int GetY(POINT P){ 
    /*Mengembalikan nilai y dari sebuah POINT */
    /*  Input     :  sebuah Point P sembarang   */
    /*  Output  :   nilai y dari Point P */
 return P.y;

}

void SetY(POINT *P, int YY){ 
  /* Mengubah nilai Y dari sebuah POINT */
   /* I.S    :  Sebuah Point sembarang    */
   /* F.S   :  nilai y dari Point P menjadi YY */
  (*P).y = YY;
}

void ReSet(POINT *P){ 
/* Mengubah koordinat sebuah POINT menjadi 0,0 */
/*   I.S   :  Point  di posisi sembarang  */
 /*   F.S  :  Point P berada di koordinat 0,0 */
  (*P).x =0;
  (*P).y =0;
}

/*KELOMPOK PRINT/CETAK*/

void PrintPoint(POINT P){ 
   /* Menampilkan POINT */
   /* I.S    : sebuah point P berada di koordinat sembarang   */
   /* F.S   :  Point P tampil di layar   */
  printf("(%d,%d)",P.x, P.y);
}

/*KELOMPOK LAIN */
int Kuadran(POINT P) { 
/* menghasilkan kuadran dari POINT P*/
/*  Input :   Sebuah point P sembarang   */
/*  Output :  kuadran dari Point P  -- 1, 2, 3, atau 4 */
	int k;
	
	if(P.x == 0 || P.y == 0){
		//jika salah satu nilai dari point adalah 0 maka tidak termasuk ke dalam kuadran
		return 0;
	}
	
	else if(P.x > 0){
			if(P.y > 0){
				k = 1;
			}
			else{
				k = 4;
			}
	}
	//Nilai X < 0 
	else if (P.x < 0){
   	 		if(P.y > 0){
   	 			k = 2;	
			}
			else{
				k = 3;
			}
	}

return k;
}

boolean IsOnSumbuX(POINT P){ 
/* Mengirimkan True jika P ada di sumbu X  */
  /*  Input :   Sebuah point P sembarang   */
  /*  Output :  True/False     */

      return (P.y==0);
}

boolean IsOnSumbuY(POINT P){
/* Mengirimkan True jika P ada di sumbu Y  */    
 /*  Input :   Sebuah point P sembarang   */
  /*  Output : True / False  */
     return (P.x==0);
}



boolean IsOrigin(POINT P){ 
/* Mengirimkan True jika P ada di titik pusat */
 /*  Input :   Sebuah point P sembarang   */
  /*  Output :  True/False */

  return ((P.x==0) && (P.y==0));
}

void NextX(POINT *PP){ 
/* Menggeser PP, 1 koordinat ke kanan*/
  /*  I.S  :  Sebuah point P berada di posisi sembarang   */
  /*  F.S :  Point P berada di posisi awal + 1 ke kanan    */

  (*PP).x++;
}

void NextX_N(POINT *PP, int N){
 /* Menggeser P, sejauh N koordinat ke kanan*/
  /*  I.S  :  Sebuah point P berada di posisi sembarang   */
  /*  F.S :  Point P berada di posisi awal + N ke kanan    */

	 (*PP).x=(*PP).x + N;
}

void PrevX(POINT *P) {
  /* Menggeser P 1 koordinat ke kiri*/
  /*  I.S  :  Sebuah point P berada di posisi sembarang   */
  /*  F.S :  Point P berada di posisi awal - 1 ke kiri    */  
  (*P).x--;
}

void PrevX_N(POINT *P, int N){
/* Menggeser P, sejauh N koordinat ke kiri */
  /*  I.S  :  Sebuah point P berada di posisi sembarang   */
  /*  F.S :  Point P berada di posisi awal – N ke kiri         */
 (*P).x=(*P).x - N;

}

/*MENGHITUNG JARAK DUA POINT */

int Jarak (POINT P1, POINT P2) {
/*Menghasilkan jarak P1 dan P2 */
/*  Input :   Sebuah point P sembarang   */
  /*  Output :  jarak dari  P1 dan P2         */

	//RUMUS JARAK 2 TITIK
	// -/(X1-X2)^2 + (Y1-Y2)^2
  return sqrt((P1.x-P2.x)*(P1.x-P2.x) +(P1.y-P2.y) * (P1.y-P2.y));

}
