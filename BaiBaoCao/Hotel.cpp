#include<iostream>
#include"Hotel.h"

using namespace std;
void Hotel::nhap() {
    
    checkin = new char[50];
    checkout = new char[50];
    chinhanh = new char[50];
        ten = new char[50];
        maks = new char[50]; cin.ignore();
        cout << "Nhap ten khach san: "  << endl;
 
        fgets(ten, 50, stdin);
        cout << "Nhap ma khach san: "  << endl;
        
        fflush(stdin); fgets(maks, 50, stdin);
        cout << "Nhap chi nhanh khach san: " << endl;
        
        fflush(stdin); fgets(chinhanh, 50, stdin);
        cout << "Ngay check-in phong " << endl;
       
        fflush(stdin); fgets(checkin, 50, stdin);
        cout << "Ngay check-out phong: " << endl;
        
        fflush(stdin); fgets(checkout, 50, stdin);
        
    
    cout << "Khach san co Phong an khong (1 co, 0 khong): ";
    cin >> ck;
    cout << "Khach san co ho boi khong (1 co, 0 khong): ";
    cin >> kc;  

}

void Hotel::xuat() {
    
        cout << "ten khach san la :" << ten << endl;
        cout << "Ma khach san la :" << maks << endl;
        cout << "Chi nhanh khach san:" << chinhanh << endl;
        cout << "Ngay check in la: " << checkin << endl;
        cout << "Ngay check out la: " << checkout << endl;
        

    if (ck) {
        cout << "khach san nay co phong an" << endl;
    }
    else {
        cout << "khach san nay khong co phong an" << endl;
    }
    if (kc) {
        cout << "khach san nay co ho boi" << endl;
    }
    else {
        cout << "khach san nay khong co ho boi" << endl;
    }
}
char* Hotel::get_maks() {
    return maks;
}
char* Hotel::get_ten() {
    return ten;
}

/*void Hotel::phong(int a, int b) {
    cout << "so phong con lai" << a - b << endl;
}*/





