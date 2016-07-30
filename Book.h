//book.h
// Created by Boaz Raz on 7/17/16.
//

#ifndef MAKEFILE2_BOOK_H
#define MAKEFILE2_BOOK_H

#include <string>
#include "Library.h"

class Book {
private:
    string title;
public:
    Book(const string &title);

private:
    string author;
    int pageNum;
public:
   void setBookTitle(string title);
    string getBookTitle();

    void setPageNumer(int pageNum);
    int getPageNumer();

};

#endif //MAKEFILE2_BOOK_H
