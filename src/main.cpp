#include <iostream>
using namespace std;
#include <cstdlib>
#include "heaptree.hpp"

int main()
{
    heaptree* agac= new heaptree(15);
    int *sayilar=new int[15];

    cout<<"dizinin ilk hali"<<endl;
    for (int i = 0; i < 15; i++)
    {
        int sayilar[15]={99, 62, 46, 92, 84, 78, 75, 26, 20, 17, 72, 85, 96, 82, 58};
        agac->add(sayilar[i]);
        cout<<sayilar[i]<<" ";
    }
    
    int index=0;
    while (!agac->isempty())
    {
        
        sayilar[index++]=agac->getminvalue();

    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"dizinin sirali hali"<<endl;
    for (int i = 0; i < 15; i++)
    {
        cout<<"index: "<<i<<" ";
        cout<<sayilar[i]<<" "<<endl;
    }
    cout<<endl;
    delete [] sayilar;
    delete agac;
    return 0;
}