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

void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void insertFirst(List &L, address P);
void insertAfter(List &L, address Prec, address P);
void insertLast(List &L, address P);
address findElm(List &L, infotype x);
void deleteFirst(List &L, address &P);
void deleteAfter(List &L, address Prec, address &P);
void deleteLast(List &L, address &P);
void printInfo(List L);
void deleteByValue(List &L, infotype x);
void reverseList(List L, List &L2);
void printReverse(List L2);
#endif //UNTITLED6_CDLL_H
