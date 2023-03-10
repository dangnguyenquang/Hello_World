#include <iostream>
#include <cmath>
using namespace std;

struct diem {
    int x;
    int y;
};

void nhapdiem(diem *d){
    cout << "Nhap hoanh do: "; cin >> d->x;
    cout << "Nhap tung do: "; cin >> d->y;
}

void xuatdiem(diem *d){
    cout << "Hoanh do: " << d->x << endl;
    cout << "Tung do: " << d->y << endl;
}

void khoangcach(diem *d1, diem *d2){
    cout << sqrt(pow((d2->x-d1->x),2)+pow((d2->y-d1->y), 2));
}

void doixung(diem *d){
    cout << "A (" << -d->x << "," << -d->y << ")" << endl;
}

void doixungquatruc(diem *d){
    cout << "Doi xung qua Ox: " <<  "A (" << -d->x << "," << d->y << ")" << endl;
    cout << "Doi xung qua Oy: " <<  "A (" << d->x << "," << -d->y << ")" << endl;
}

main(){
    int luachon = 0;
    diem *A = new diem;
    diem *B = new diem;
    cout << "Nhap diem A: " << endl;
    nhapdiem(A);
    cout << "Xuat diem A: " << endl;
    xuatdiem(A);
    cout << "<--------- MENU --------->" << endl;
    cout << "Tinh khoang cach 2 diem (1)" << endl;
    cout << "Tim diem doi xung qua goc toa do (2)" << endl;
    cout << "Tim diem doi xung qua truc Ox, Oy (3)" << endl;
    cout << "Nhap lua chon cua ban: "; cin >> luachon;
    if (luachon == 1){
        cout << "Nhap diem B: " << endl;
        nhapdiem(B);
        cout << "Khoang cach giua 2 diem la: ";
        khoangcach(A, B);
    } else if (luachon == 2){
        cout << "Diem doi xung qua goc toa do la: ";
        doixung(A);
    } else if (luachon == 3){
        doixungquatruc(A);
    } 
    return 0;
}