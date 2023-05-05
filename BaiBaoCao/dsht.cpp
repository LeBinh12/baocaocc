#include<iostream>
#include"dsht.h"

using namespace std;
void dsks::khoitao(int sl) {
    soluong = sl;
    ks = new Hotel[1000];
}

void dsks::nhapks() {

    for (int i = 1; i <= soluong; i++) {
        cout << "Khach san thu " << i << endl;
        ks[i].nhap();

    }
}

void dsks::inds() {
    
    for (int i = 1; i <= soluong; i++) {
        ks[i].xuat();
    }
}


void dsks::them() {
   
    cout << "\nNhap so luong can them: "; 
    
    soluong++;cin.ignore();
    ks[soluong].nhap();
    cout << "\n";
    ks[soluong].xuat();

}






void dsks::timkiem() {
    int dem = 0;
    char* ten = new char[50];
    cout << "nhap ten khach san ban can tim" << endl;
    fgets(ten, 50, stdin);
    for (int i = 1; i <= soluong; i++) {

        if (strcmp(ks[i].get_ten(), ten) == 0) {

            ks[i].xuat();

            dem++;

        }
    }
    if (dem == 0) {

        cout << "khong ton tai ten nhan vien nay!" << endl;

    }
    cout << " \n";
}



void dsks::xoads() {
    
    char* timkiemsp = new char[100];
    int dem = 0;
    cin.ignore();
    cout << "\nnhap san pham can xoa: ";
    fgets(timkiemsp, 100, stdin);
    for (int i = 1; i <= soluong; i++) {
        if (strcmp(ks[i].get_ten(), timkiemsp) == 0) {
            ks[i] = ks[i + 1];
            soluong--;
            dem++;
        }
        if (dem == 0) {
            cout << "\nkhong co san pham nay";
        }
        cout << "\n";
    }
}


/*void dsks::sua() {

    for (int i = 1; i < soluong; i++) {
        if (ks[i].get_maks());
        ks[i].get_ten();
    }
}
*/





