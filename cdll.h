//
// Created by reinhardsitumeang on 04/11/2023.
//

#ifndef UNTITLED6_CDLL_H
#define UNTITLED6_CDLL_H
#include <iostream>

using namespace std;

#define first(L) (L).first
#define last(L) (L).last
#define next(P) (P)->next
#define prev(P) (P)->prev
#define info(P) (P)->info

typedef int infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next, prev;
};

struct List {
    address first, last;
};

void createList_1302220001(List &L);
address alokasi_1302220001(infotype x);
void dealokasi_1302220001(address &P);
void insertFirst_1302220001(List &L, address P);
void insertAfter_1302220001(List &L, address Prec, address P);
void insertLast_1302220001(List &L, address P);
address findElm_1302220001(List &L, infotype x);
void deleteFirst_1302220001(List &L, address &P);
void deleteAfter_1302220001(List &L, address Prec, address &P);
void deleteLast_1302220001(List &L, address &P);
void printInfo_1302220001(List L);
void deleteByValue_1302220001(List &L, infotype x);
void reverseList_1302220001(List L, List &L2);
void printReverse(List L2);
#endif //UNTITLED6_CDLL_H
