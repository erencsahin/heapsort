#ifndef heaptree_hpp
#define heaptree_hpp
#include <iostream>
using namespace std;


class heaptree
{
private:
    int *items;
    int length;
    int capacity;

    int leftchildindex(int);
    int rightchildindex(int);
    int parentindex(int);
    void heapfyup(int);
    void heapfydown(int);
    void swap(int&, int&);
public:
    heaptree(int);
    bool isempty();
    void add(int);
    int getminvalue();
    ~heaptree();
};

#endif
