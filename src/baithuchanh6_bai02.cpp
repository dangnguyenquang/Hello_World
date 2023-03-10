#include <iostream>
using namespace std;

struct phanso {
    int tuSo;
    int mauSo;
};

void nhapphanso(phanso *x){
    cout << "Nhap tu cua phan so: "; cin >> x->tuSo;
    do {
        cout << "Nhap mau cua phan so: "; cin >> x->mauSo;
        if (x->mauSo == 0) cout << "Mau so phan lon hon 0";
    } while (x->mauSo == 0);
}

void xuatphanso(phanso *x){
    cout << x->tuSo << "/" << x->mauSo << endl;
}

int UCLN(int a, int b){
    a = abs(a);
    b = abs(b);
    while (a != b){
        if (a>b) a=a-b;
        else b=b-a;
    }
    return a;
}

void rutgon(phanso *x){
    int ucln = UCLN(x->tuSo, x->mauSo);
    x->tuSo = x->tuSo/ucln;
    x->mauSo = x->mauSo/ucln;
    cout << x->tuSo << "/" << x->mauSo << endl;
}

void tongphanso(phanso *x, phanso *y){
    phanso *z = new phanso;
    z->mauSo = (x->mauSo)*(y->mauSo);
    z->tuSo = (x->tuSo)*(y->mauSo) + (y->tuSo)*(x->mauSo);
    rutgon(z);
}

void hieuphanso(phanso *x, phanso *y){
    phanso *z = new phanso;
    z->mauSo = (x->mauSo)*(y->mauSo);
    z->tuSo = (x->tuSo)*(y->mauSo) - (y->tuSo)*(x->mauSo);
    rutgon(z);
}

void tichphanso(phanso *x, phanso *y){
    phanso *z = new phanso;
    z->mauSo = (x->mauSo)*(y->mauSo);
    z->tuSo = (x->tuSo)*(y->tuSo);
    rutgon(z);
}

void thuongphanso(phanso *x, phanso *y){
    phanso *z = new phanso;
    z->mauSo = (x->mauSo)*(y->tuSo);
    z->tuSo = (x->tuSo)*(y->mauSo);
    rutgon(z);
}

int  main(){
    phanso *x = new phanso;
    phanso *y = new phanso;
    cout << "Nhap phan so thu 1: " << endl;
    nhapphanso(x);
    cout << "Nhap phan so thu 2: " << endl;
    nhapphanso(y);
    cout << "Phan so thu 1 la: ";
    xuatphanso(x);
    cout << "Phan so thu 2 la: ";
    xuatphanso(y);
    cout << "<--------------------------------->";
    cout << "Tong cua 2 phan so la: ";
    tongphanso(x, y);
    cout << "Hieu cua 2 phan so la: ";
    hieuphanso(x, y);
    cout << "Tich cua 2 phan so la: ";
    tichphanso(x, y);
    cout << "Thuong cua 2 phan so la: ";
    thuongphanso(x, y);
    return 0;
}