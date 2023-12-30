#include "heaptree.hpp"
using namespace std;
#include <iostream>

int heaptree::leftchildindex(int index)
{
    return 2*index+1;
}

int heaptree::rightchildindex(int index)
{
    return 2*index+2;
}

int heaptree::parentindex(int index)
{
    return (index-1)/2;
}

void heaptree::heapfyup(int index)
{
    int pindex;
    if (index!=0)
    {
        pindex=parentindex(index);
        if (items[pindex]>items[index])
        {
            swap(items[pindex],items[index]);
            heapfyup(pindex);
        }
    }
}
void heaptree::heapfydown(int index)
{
    int solindex,sagindex,minindex;
    solindex=leftchildindex(index);
    sagindex=rightchildindex(index);
    
    if (sagindex >= length)
    {
        if (solindex >= length)
        {
            return;
        }
        else
        {
            minindex=solindex;
        }
    }
    else
    {
        if (items[solindex] <= items[sagindex])
        {   
            minindex=solindex;
        }
        else
        {
            minindex=sagindex;
        }
    }
    if (items[index]>items[minindex])
    {
        swap(items[index],items[minindex]);
        heapfydown(minindex);
    }
    
}


void heaptree::swap(int& val1, int& val2)
{
    int tmp=val1;
    val1=val2;
    val2=tmp;
}


heaptree::heaptree(int size)
{
    items =new int[size];
    capacity=size;
    length=0;
}


bool heaptree::isempty()
{
    return length==0;
}


void heaptree::add(int item)
{
    if (capacity==length)
    {
        throw "tree is full";
    }
    else
    {
        items[length]=item;
        length++;
        heapfyup(length-1);
    }
}


int heaptree::getminvalue()
{
    if (isempty())
    {
        throw "tree is empty.";
    }
    int minvalue=items[0];    
    items[0]=items[length-1];
    length--;
    if (length>0)
    {
        heapfydown(0);
    }
    return minvalue;
    
}


heaptree::~heaptree()
{
    delete [] items;
}