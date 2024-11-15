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
//void selection_29_Quyen(int a[], int n){ // chen truc tiep
//    int min_pos;  // bien tam cho so nho nhat
//    for (int i = 0; i< n-1; i++){ // chay vong lap tim vi tri nho nhat de gan
//        min_pos=i; // gan lai
//        for ( int j =i+1; j< n; j++) // chay vong j
//            if ( a[j] < a[min_pos]) // ktra dkieu. de gan lai
//                min_pos=j;
//        swap_29_Quyen(a[min_pos], a[i]); // hoan doi
//    }
//}
//int main (){
//    int a[100]; // khai bao mang
//    int n; // khai bao n
//    cin >> n; // nhao n
//    input_29_Quyen(a, n); // ham nhap random so
//    output_29_Quyen(a, n); // ham xuat
////    Insertion_sort_29_Quyen(a, n);
//    selection_29_Quyen(a, n);
////    Bubble_29_Quyen(a, n);
//    output_29_Quyen(a, n); // ham xuat
//    return 0;
//}
