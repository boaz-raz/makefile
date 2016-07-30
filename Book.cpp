//book.cpp
// Created by Boaz Raz on 7/17/16.
//

#include "Library.h"
#include "Book.h"


void Book::setBookTitle(string title) {
    Book::title = title;
}

string Book::getBookTitle(){
    return title;
}


void Book::setPageNumer(int pageNum) {
    Book::pageNum = pageNum;
}

int Book::getPageNumer(){
    return pageNum;
}

Book::Book(const string &title) : title(title) {

}
