#include<iostream>

#include "dsht.h"
using namespace std;
int main() {
    dsks d;
    int sl;
   
    
    cout << "Nhap so luong khach san : ";
    cin >> sl;
    d.khoitao(sl);
    d.nhapks();
    d.inds();
    
    d.them();
    
    d.timkiem();
    d.xoads();
    
   
  
}