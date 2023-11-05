//
// Created by reinhardsitumeang on 04/11/2023.
//
#include "cdll.h"

void createList(List &L) {
    first(L) = NULL;
    last(L) = NULL;
}

address alokasi(infotype x) {
    address P = new elmList;

    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;

    return P;
}

void dealokasi(address &P) {
    delete P;
}

void insertFirst(List &L, address P) {
    if (first(L) != NULL && last(L) != NULL) {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    } else {
        first(L) = P;
        last(L) = P;
    }
}

void insertAfter(List &L, address Prec, address P) {
    if (first(L) != NULL && last(L) != NULL) {
        next(P) = next(Prec);
        prev(P) = Prec;
        prev(next(Prec)) = P;
        next(Prec) = P;
    } else {
        first(L) = P;
        last(L) = P;
    }
}

void insertLast(List &L, address P) {
    if (first(L) != NULL && last(L) != NULL) {
        next(P) = first(L);
        prev(P) = last(L);
        next(last(L)) = P;
        last(L) = P;
    } else {
        first(L) = P;
        next(P) = first(L);
        prev(P) = first(L);
        last(L) = P;
    }
}

address findElm(List &L, infotype x) {
    address P, Pfound;

    P = first(L);

    while (info(P) != x) {
        P = next(P);
    }
    if (info(P) == x) {
        Pfound = P;
    } else if (info(last(L)) == x) {
        Pfound = last(L);
    } else {
        Pfound = NULL;
    }
    return Pfound;
}

void deleteFirst(List &L, address &P) {
    if (next(P) != first(L) && prev(P) != first(L)) {
        first(L) = next(first(L));
        next(P) = NULL;
        prev(first(L)) = NULL;
    } else {
        first(L) = NULL;
        last(L) = NULL;
    }
}

void deleteAfter(List &L, address Prec, address &P) {
    Prec = prev(P);
    next(Prec) = next(P);
    prev(next(P)) = Prec;
    prev(P) = NULL;
    next(P) = NULL;
}

void deleteLast(List &L, address &P) {
    if (prev(P) != last(L) && next(P) != last(L)) {
        last(L) = prev(last(L));
        prev(P) = NULL;
        next(last(L)) = NULL;
    } else {
        first(L) = NULL;
        last(L) = NULL;
    }
}

void printInfo(List L) {
    address P;

    P = first(L);
    while (P != last(L)) {
        cout << info(P) << ", ";
        P = next(P);
    }
    cout << info(last(L)) << endl;
}

void printReverse(List L) {
    address P;

    P = first(L);
    while (P != NULL) {
        cout << info(P) << ", ";
        P = next(P);
    }
    cout << endl;
}

/*void deleteByValue(List &L, infotype x){
    if (first(L) == NULL && last(L) == NULL) {
        cout << "List kosong" << endl;
    } else {
        address P;
        address Q = findElm(L, x);
        if (Q == NULL) {
            cout << "Tidak ditemukan" <<endl;
        } else {
            deleteAfter(L, P, Q);
        }
    }
}*/

void reverseList(List L, List &L2) {
    address Plast, P;
    infotype angka;

    Plast = last(L);
    while (Plast != first(L)) {
        angka = info(Plast);
        P = alokasi(angka);
        insertLast(L2, P);
        Plast = prev(Plast);
    }
}