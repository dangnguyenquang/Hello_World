#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

#define maxc 100

int MAX(int a[][maxc], int m, int n){
    int max = a[0][0];
    for (int i = 0; i < m; i++){
        for (int j = 1; j < n; j++){
            if (a[i][j] > max){
                max = a[i][j];
            }        
        }
    }
    return max;
}

void nuatrenduongcheochinh(int a[][maxc], int m, int n){
    for (int i = 0; i < m; i++){
        cout << setw(4);
        for (int j = 0; j < n; j++){
            if (j > i) cout << a[i][j] << setw(4);
            else cout << "_" << setw(4);
        }
        cout << endl;
    }
}

void minRow(int a[][maxc], int m, int n){
    for (int i = 0; i < m; i++){
        int min = a[i][0];
        for (int j = 1; j < n; j++){
            if (a[i][j] < min){
                min = a[i][j];
            }        
        }
        cout << "Gia tri nho nhat tren dong thu " << i+1 << " la: " << min << endl;
    }
}

void maxCol(int a[][maxc], int m, int n){
    for (int j = 0; j < n; j++){
        int max = a[0][j];
        for (int i = 1; i < m; i++){
            if (a[i][j] > max){
                max = a[i][j];
            }        
        }
        cout << "Gia tri lon nhat tren cot thu " << j+1 << " la: " << max << endl;
    }
}

int laSNT(int a){
    if (a == 2) return 0;
    else {
        for (int i = 2; i < a; i++){
            if (a%i == 0) return 1;
        }
    }
    return 0;
}

void inraSNT(int a[][maxc], int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (laSNT(a[i][j]) == 0) cout << a[i][j] << " ";
        }
    }
    cout << endl;
}

void nhapmang(int a[][maxc], int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << "Nhap phan tu a [" << i << "][" << j << "]: "; cin >> a[i][j];
        }
    }
}

int main(){
    int a[100][maxc], n, luachon = 99, m;
    while(luachon != 0){
        cout << "Co tiep tuc thuc hien chuong trinh khong?(Co: 1, Khong: 0): "; cin >> luachon;
        if (luachon == 1) luachon = 99;
        else return 0;
        cout << "Nhap so dong, so cot cua mang " << endl;
        cin >> m; cin >> n;
        nhapmang(a, m, n);
        cout << "--------------- MENU --------------" << endl;
        cout << "Tim phan tu lon nhat cua mang (chon 1): " << endl;
        cout << "Cac phan tu nam nua tren duong cheo chinh (chon 2): " << endl;
        cout << "Tim gia tri nho nhat tren tung dong (chon 3): " << endl;
        cout << "Tim gia tri lon nhat tren tung cot (chon 4): " << endl;
        cout << "In ra cac so nguyen to co trong mang (chon 5): " << endl;
        cout << "Nhap lua chon: "; cin >> luachon;
        if (luachon == 1){
            cout << "Phan tu lon nhat trong mang la: " << MAX(a, m, n) << endl;
        } else if (luachon == 2){
            while (n != m){
                cout << "Ma tran nhap vao phai la ma tran vuong, nhap lai: " << endl;
                cout << "Nhap so dong, so cot cua mang " << endl;
                cin >> m; cin >> n;
                nhapmang(a, m, n);        
            }
            nuatrenduongcheochinh(a, m, n);
        } else if (luachon == 3){
            minRow(a, m, n);
        } else if (luachon == 4){
            maxCol(a, m, n);
        } else if (luachon == 5){
            cout << "So nguyen to co trong mang la: ";
            inraSNT(a, m, n);
        }
    }    
    return 0; 
}
