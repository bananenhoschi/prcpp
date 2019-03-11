//
// Created by Carlo Baumann on 2019-03-11.
//

#include <iostream>
#pragma once


#ifndef PRCPP_LINKEDLIST_H
#define PRCPP_LINKEDLIST_H

using namespace std;

class LinkedList {

public:
    LinkedList();

    ~LinkedList();

    void appendFront(int e);

    int get(int index);

    bool contains(int value);

    class Element {
    public:
        int data;                                     // das Datenfeld eines Elements
        Element *next;                          // das verkettungsfeld eines Elements
        Element(int value) : data(value), next(nullptr) {}              // Konstruktor
    };


    Element* head;


    friend std::ostream &operator<<(std::ostream &out, const LinkedList &list) {
        out << "[";
        Element *r = list.head;
        while (r != nullptr) {
            out << ' ' << r->data;
            r = r->next;
        }
        out << " ]";
        return out;
    }


};


#endif //PRCPP_LINKEDLIST_H
