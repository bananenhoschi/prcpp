//
// Created by Carlo Baumann on 2019-03-11.
//

#include "LinkedList.h"

using namespace std;


LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::~LinkedList() {

    Element *temp;
    while (head != nullptr) {
        temp = head->next;
        delete head;
        head = temp;
    }

}

void LinkedList::appendFront(int e) {

    Element *element = new Element(e);
    element->next = head;
    head = element;

}

int LinkedList::get(int index) {

    Element *element = head;
    for (int i = 0; i < index; i++) {
        element = element->next;
    }
    return element->data;

}

bool LinkedList::contains(int value) {

    Element *element = head;
    while (element != nullptr) {
        if (element->data == value) {
            return true;
        }
        element = element->next;
    }
    return false;


}


