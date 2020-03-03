/*
Program			: lingkedlist.h
Deskripsi		: header untuk linkedlist
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/03 Maret 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/


#ifndef linkedList_H
#define linkedList_H

struct Node {
	
	int info;			//data yang disimpan
	struct Node *next;	//alamat node selanjutnya
	
};

/*Prototype*/

/*KELOMPOK CREATOR*/

struct Node *createNode();
/*fungsi untuk membuat 1 Node baru*/

/*KELOMPOK DESTRUCTOR*/

void deleteNodeAt(struct Node *H_Node, int position);
/*Menghapus Node di posisi tertentu*/

/*KELOMPOK SELECTOR*/

int size(struct Node *H_Node);
/*function untuk mengetahui panjang dari list yang sudah dibuat*/
/*Input		: List*/
/*Output	: panjang list*/

struct Node *addressAt(struct Node *H_Node, int index);
/*mendapatkan alamat dari node ke- */
/*input		: Head dari lilst dan index*/
/*output	: adress node */

struct Node *tailAddress(struct Node *H_Node);
/*mendapatkan alamat dari ujung list*/
/*input		: head dari list*/
/*output	: alamat tail dari list*/

int getNodeAt(struct Node *H_Node, int index);
/*mendapatkan value dari bagian info sebuah node*/
/*input		: head dari list dan node ke-*/
/*output	: info dari node ke- */


/*KELOMPOK SET*/

void assignNode(struct Node *info, int n);
/*mengubah nilai info dari sebuah Node*/
/*I.S	: nilai info sembarang*/
/*F.S	: nilai info menjadi n*/

/*KELOMPOK READ/WRITE*/

void printList(struct Node *H_Node);
/*menampilkan list ke layar*/
/*I.S	: list belum ditampilkan di layar*/
/*F.S	: list ditampilkan di layar*/

#endif
