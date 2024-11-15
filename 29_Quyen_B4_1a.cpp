//
#include <iostream>
#include <cstdlib> // de su dung random
#include <ctime>

using namespace std;

void Insertion_sort_29_Quyen ( int a[], int n){ // ham sap xep chen
    int j;
    for ( int i=1; i<n; i++){ // vong lap tu dau den cuoi danh sach
        j=i-1; // gan j bang i-1
        int x=a[i]; // gan gia tri cho x tai vi tri i
        while ( 0<=j && a[j] > x){ // tien hanh vong lap neu j>=0 va gia tri tai vi tri j nho hon x ( gia tri tai vi tri i)
            a[j+1] =a[j]; // thi swap, ( vi j=i-1 thi a[i] di truoc j, vi the a[j+1] la a[i])
            j--; // giam j di 1 don vi

        }
        a[j+1]=x; // gan nguoc lai gia tri moi cho x de tiep tuc den het danh sach
    }
}
void output_29_Quyen(int a[], int n){ // ham xuat

    for ( int i=0; i<n; i++){ // duyet tu dau den cuoi danh sach
        cout << a[i] << " "; // in cac gia tri tai vi tri i
    }
    cout << endl; // xuong dong khi in xong
}
void input_29_Quyen(int a[], int&n){ // ham nhap random so
    for ( int i =0; i<n ; i++){ // chay tu dau den cuoi ds
        a[i] = rand()%(100+5+1)-5; // random
        cout << endl; // xuong dong
    }
}
void swap_29_Quyen ( int &a, int &b){ // ham hoan doi
    int c=a; // c voi a
    a=b;  // a cho b
    b=c; // va gan nguoc lai b= c tuc la b=a
}
void selection_29_Quyen(int a[], int n){ // chen truc tiep
    int min_pos;  // bien tam cho so nho nhat
    for (int i = 0; i< n-1; i++){ // chay vong lap tim vi tri nho nhat de gan
        min_pos=i; // gan lai
        for ( int j =i+1; j< n; j++) // chay vong j
            if ( a[j] < a[min_pos]) // ktra dkieu. de gan lai
                min_pos=j;
        swap_29_Quyen(a[min_pos], a[i]); // hoan doi
    }
}
void Bubble_29_Quyen( int a[], int n){ // ham noi bot
    for (int i = 0; i < n; i++){ // cho chay tu i =0 den n-1 va tang i
        for ( int j=n-1; j>i; j--){ // cho j chay nguoc lai tu n-1 den i
            if ( a[j-1] > a[j]) // ktra dki
                swap_29_Quyen(a[j-1],a[j]); // swap
        }
    }
}
void InterchangeSort_29_Quyen(int a[], int n) { //
    for(int i=0; i<n-1; i++) // duyet tu i=0, chay den i < n-2 roi tang i
        for (int j=i+1;j<n;j++) // cho vong lap j chay tu j=i+1 , <n va tang len
            if (a[i]>a[j]) // neu vi tri tai i > j thi swap
                swap_29_Quyen(a[i], a[j]); }// đổi chỗ a[i] và a[j]

int main (){
    int a[100]; // khai bao mang
    int n; // khai bao n
    cin >> n; // nhao n
    input_29_Quyen(a, n); // ham nhap random so
    output_29_Quyen(a, n); // ham xuat
//    Insertion_sort_29_Quyen(a, n);
//    selection_29_Quyen(a, n);
//    Bubble_29_Quyen(a, n);
    InterchangeSort_29_Quyen(a, n);
    output_29_Quyen(a, n); // ham xuat
    return 0;
}
