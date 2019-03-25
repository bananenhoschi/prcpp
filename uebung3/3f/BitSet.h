

#include <iostream>
#pragma once

using element_type = unsigned char;


class BitSet {

    static const size_t INITIAL_SIZE = 2;
    static const size_t ELEMENT_WIDTH = sizeof(element_type) * 8;
    size_t m_size;
    element_type *m_bitfield;

    void setCapacity(size_t);

public:
    BitSet();

    BitSet(const BitSet &);

    ~BitSet();

    bool add(size_t n);

    void addAll(size_t size, size_t elements[]);

    bool remove(size_t n);

    bool contains(size_t n);

    void unite(const BitSet &other);

    void intersect(const BitSet &other);


    friend std::ostream& operator<< (std::ostream& out, const BitSet& set)	{
        element_type element;
        out << "[ ";
        for (size_t e=0; e < set.m_size; ++e){
            element = set.m_bitfield[e];
            for (size_t b=0; b<ELEMENT_WIDTH; ++b){
                out << (element % 2 != 0);
                element >>= 1;
            }
            out << ' ';
        }
        out << "]";
        return out;
    }
};
