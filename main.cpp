#include "cdll.h"

int main() {
    List Lmain{}, L2;
    address x;

    createList_1302220001(Lmain);
    insertLast_1302220001(Lmain, alokasi_1302220001(5));
    insertLast_1302220001(Lmain, alokasi_1302220001(15));
    insertLast_1302220001(Lmain, alokasi_1302220001(25));
    insertLast_1302220001(Lmain, alokasi_1302220001(35));
    insertLast_1302220001(Lmain, alokasi_1302220001(45));
    insertLast_1302220001(Lmain, alokasi_1302220001(55));
    insertLast_1302220001(Lmain, alokasi_1302220001(65));
    insertLast_1302220001(Lmain, alokasi_1302220001(75));
    insertLast_1302220001(Lmain, alokasi_1302220001(85));

    printInfo_1302220001(Lmain);

    x = findElm_1302220001(Lmain, 5); //Test for search function
    cout << info(x) << endl;
    x = findElm_1302220001(Lmain, 15);
    cout << info(x) << endl;
    x = findElm_1302220001(Lmain, 45);
    cout << info(x) << endl;
    x = findElm_1302220001(Lmain, 85);
    cout << info(x) << endl;

    /*deleteByValue(Lmain,5);
    deleteByValue(Lmain,100);
    deleteByValue(Lmain,45);
    deleteByValue(Lmain,85);*/

    createList_1302220001(L2);
    reverseList_1302220001(Lmain, L2);

    printInfo_1302220001(L2);
    //printReverse(L2);*/
    return 0;
}
