////
//
//#include <iostream>
//#include <cstdlib> // de su dung random
//#include <ctime>
//
//using namespace std;
//
//
//void output_29_Quyen(int a[], int n){ // ham xuat
//
//    for ( int i=0; i<n; i++){ // duyet tu dau den cuoi danh sach
//        cout << a[i] << " "; // in cac gia tri tai vi tri i
//    }
//    cout << endl; // xuong dong khi in xong
//}
//void input_29_Quyen(int a[], int&n){ // ham nhap random so
//    for ( int i =0; i<n ; i++){ // chay tu dau den cuoi ds
//        a[i] = rand()%(100+5+1)-5; // random
//        cout << endl; // xuong dong
//    }
//}
//void swap_29_Quyen ( int &a, int &b){ // ham hoan doi
//    int c=a; // c voi a
//    a=b;  // a cho b
//    b=c; // va gan nguoc lai b= c tuc la b=a
//}
//void Bubble_29_Quyen( int a[], int n){ // ham noi bot
//    for (int i = 0; i < n; i++){ // cho chay tu i =0 den n-1 va tang i
//        for ( int j=n-1; j>i; j--){ // cho j chay nguoc lai tu n-1 den i
//            if ( a[j-1] > a[j]) // ktra dki
//                swap_29_Quyen(a[j-1],a[j]); // swap
//        }
//    }
//}
//int main (){
//    int a[100]; // khai bao mang
//    int n; // khai bao n
//    cin >> n; // nhao n
//    input_29_Quyen(a, n); // ham nhap random so
//    output_29_Quyen(a, n); // ham xuat
////    Insertion_sort_29_Quyen(a, n);
//    Bubble_29_Quyen(a, n);
//    output_29_Quyen(a, n); // ham xuat
//    return 0;
//}
