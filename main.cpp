#include "cdll.h"

int main() {
    List Lmain{}, L2;
    address x;

    createList(Lmain);
    insertLast(Lmain, alokasi(5));
    insertLast(Lmain, alokasi(15));
    insertLast(Lmain, alokasi(25));
    insertLast(Lmain, alokasi(35));
    insertLast(Lmain, alokasi(45));
    insertLast(Lmain, alokasi(55));
    insertLast(Lmain, alokasi(65));
    insertLast(Lmain, alokasi(75));
    insertLast(Lmain, alokasi(85));

    printInfo(Lmain);

    x = findElm(Lmain, 5);
    cout << info(x) << endl;
    x = findElm(Lmain, 15);
    cout << info(x) << endl;
    x = findElm(Lmain, 45);
    cout << info(x) << endl;
    x = findElm(Lmain, 85);
    cout << info(x) << endl;

    createList(L2);
    reverseList(Lmain, L2);

    printInfo(L2);
    //printReverse(L2);*/
    return 0;
}
