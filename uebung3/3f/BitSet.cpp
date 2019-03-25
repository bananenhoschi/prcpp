//
// Created by Carlo Baumann on 2019-03-25.
//

#include "BitSet.h"


BitSet::BitSet() : m_size(INITIAL_SIZE) {
    m_bitfield = new element_type[m_size];
    for (size_t i = 0; i < m_size; ++i) {
        m_bitfield[i] = 0;
    }
}

BitSet::BitSet(const BitSet &original) : m_size(original.m_size) {
    m_bitfield = new element_type[m_size];
    for (size_t i = 0; i < m_size; ++i) {
        m_bitfield[i] = original.m_bitfield[i];
    }
}

BitSet::~BitSet() {
    delete[] m_bitfield;
}

void BitSet::setCapacity(size_t newCapacity){
    element_type* temp = new element_type[newCapacity];
    for (size_t i=0; i<newCapacity; ++i){
        temp[i] = i<m_size ? m_bitfield[i] : 0;
    }
    m_size = newCapacity;
    delete[] m_bitfield;
    m_bitfield = temp;
}


bool BitSet::add(size_t element) {
    size_t arrayIndex = element / ELEMENT_WIDTH;
    size_t bitIndex = element % ELEMENT_WIDTH;
    if (arrayIndex >= m_size) {
        setCapacity(arrayIndex + 1);
    }
    if ((m_bitfield[arrayIndex] & (1 << bitIndex)) == 0) {
        m_bitfield[arrayIndex] |= (1 << bitIndex);
        return true;
    } else {
        return false;
    }
}


void BitSet::addAll(size_t size, size_t elements[]) {
    for (size_t i = 0; i < size; ++i)
        add(elements[i]);
}

bool BitSet::remove(size_t element) {
    size_t arrayIndex = element / ELEMENT_WIDTH;
    size_t bitIndex = element % ELEMENT_WIDTH;
    if (arrayIndex < m_size && contains(element)) {
            m_bitfield[arrayIndex] &= (0xFFFFFFFF ^ (1 << bitIndex));
        return true;
    }
    return false;
}

bool BitSet::contains(size_t n) {

    size_t arrayIndex = n / ELEMENT_WIDTH;
    size_t bitIndex = n % ELEMENT_WIDTH;
    return (arrayIndex < m_size && (m_bitfield[arrayIndex] & (1 << bitIndex)) != 0);

}

void BitSet::unite(const BitSet& other){
    if (m_size < other.m_size)
        setCapacity(other.m_size);
    for (size_t i=0; i<other.m_size; ++i)
        m_bitfield[i] |= other.m_bitfield[i];
}


void BitSet::intersect(const BitSet& other){
    if (m_size < other.m_size)
        setCapacity(other.m_size);
    for (size_t i=0; i<other.m_size; ++i)
        m_bitfield[i] &= other.m_bitfield[i];
}