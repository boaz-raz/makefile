//
// Created by Boaz Raz on 7/17/16.
//

#ifndef MAKEFILE2_LIBRARY_H
#define MAKEFILE2_LIBRARY_H

#include <string>
//#include "Book.h"
//#include <iostream>
using namespace std;

class Library {
private:
    bool Book[5];
    int bookNum;

public:
    Library();

    void setBookNum(int bookNum);
    int getBookNum();

};

#endif //MAKEFILE2_LIBRARY_H
