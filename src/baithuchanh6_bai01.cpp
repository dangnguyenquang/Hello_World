#include <iostream>
using namespace std;

int *input(int n){
    int arr int[100];
    for (int i = 0; i < n; i++){
        cout << "Nhap phan tu arr[" << i << "] :"; cin >> arr[i];
    }
    return arr;
}

void output(int *arr, int n){
    for (int i = 0; i < n; i++){
        cout << "Phan tu arr[" << i << "] :" << arr[i] << endl;
    }
}

double sum(int *arr, int n){
    double S = 0;
    for (int i = 0; i < n; i++){
        S += arr[i];
    }
    return S;
}

void arrange(int *arr, int n){
    int sx;
    for (int i = 0; i < n-1; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] < arr[j]){
                sx = arr[i];
                arr[i] = arr[j];
                arr[j] = sx;
            }
        }
    }
    output(arr, n);
}

int countX(int *arr, int n, int x){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == x) count ++;
    }
    return count;
}

void minLct(int *arr, int n){
    int min = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] < min) min = arr[i];
    }
    for (int i = 0; i < n; i++){
        if (arr[i] == min){
            cout << "arr[" << i << "] ";
        }
    }
}

void reverse(int *arr, int n){
    for (int i = n-1; i >= 0; i--){
        cout << arr[i] << " ";
    }
}

int main(){
    int n, *pArr, luachon = 99, x;
    while (luachon != 0){
        while (luachon != 99){
            cout << "Tiep tuc chuong trinh (1: Co/ 2: Khong): "; cin >> luachon;
            if (luachon == 2){
                cout << "Da ket thuc chuong trinh"; 
                return 0;
            } else luachon = 99;
        }
        cout << "Nhap n: "; cin >> n;
        pArr = input(n);
        cout << "<------------------------>" << endl;
        output(pArr, n);
        cout << "<--------- MENU --------->" << endl;
        cout << "Tinh tong cac phan tu trong mang (1)" << endl;
        cout << "Sap xep mang giam dan (2)" << endl;
        cout << "Dem so lan xuat hien cua phan tu x (3)" << endl;
        cout << "Xuat cac phan tu chan nho hon 20 (4)" << endl;
        cout << "Tim vi tri phan tu nho nhat trong mang (5)" << endl;
        cout << "Xuat ra day dao nguoc (6)" << endl;
        cout << "Nhap lua chon cua ban: "; cin >> luachon;
        if (luachon == 1){
            cout << "Tong cac phan tu xuat hien trong mang: " << sum(pArr, n) << endl;
        } else if (luachon == 2){
            cout << "Mang sap khi duoc sap xep: " << endl;
            arrange(pArr, n);
            cout << endl;
        } else if (luachon == 3){
            cout << "Nhap phan tu x: "; cin >> x;
            cout << "So lan xuat hien phan tu x: " << countX(pArr, n, x) << endl;
        } else if (luachon == 4){
            cout << "Cac phan tu chan nho hon 20: ";
            evenLower20(pArr, n);
            cout << endl;
        } else if (luachon == 5){
            cout << "Vi tri cua phan tu nho nhat trong mang: ";
            minLct(pArr, n);
            cout << endl;
        } else if (luachon == 6){
            cout << "Day dao nguoc: ";
            reverse(pArr, n);
            cout << endl;
        } 
    delete pArr;       
    }
    return 0;
}
