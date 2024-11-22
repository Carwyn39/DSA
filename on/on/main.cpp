//// danh sach dac
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#define MAX 100
//using namespace std;
//struct DSDac{
//    int n;
//    int a[MAX];
//};
//void nhap( int a[], int &n){
//    cout << " nhap so phan tu cua mang";
//    cin >> n;
//    for ( int i = 0 ; i<n ; i++)
//    {
//        cout << " nhap a [" << i+1 << "]=";
//        cin >> a[i];
//    }
//    
//}
//void input_random( int a[], int n ){
//    srand( time ( NULL));
//    for ( int i = 0; i < n; i++){
//        a[i]= rand () % ( 100 -1 +1)+1;// ( 1-> 100)
//    }
//}
//void output( const int a[], const int n ){
//    for ( int i = 0; i < n ; i++){
//        cout << a[i]<< " ";
//    }
//    cout << endl;
//}
//int findFirstPlace(  int a[], int n, int x){
//    int vt=-1;
//    for ( int i =0; i< n; i++)
//        if (a[i]==x){
//            vt=i;
//            break;}
//    return vt;
//}
//int timcuoi ( int a [], int n, int x){
//    int vt =-1;
//    for ( int i=0; i<n ; i++){
//        if( a[i]==x){
//            vt = i;
//        }
//    }
//    return vt;
//}
//bool chenViTri( int a[], int &n, int pos, int x){
//    if ( pos <0 || pos >n)
//        return false;
//    n++;
//    for ( int i = n; i>= pos+1; i--){
//        a[i]= a[i-1];
//    }
//    a[pos]= x;
//    return true;
//}
//bool xoa( int a[], int &n, int pos){
//    if ( pos < 0 || pos > n)
//        return false;
//    for ( int i = pos; i< n; i++){
//        a[i]= a[i+1];
//    }
//    n--;
//    return true;
//}
//bool xoamid (int a[], int &n, int pos){
//    if ( pos < 0 || pos > n)
//        return false;
//    for ( int i = (n); i< n; i++){
//        a[i]= a[i+1];
//    }
//    n--;
//    return true;
//}
//bool xoaGiua(int a[], int &n) {
//    if (n <= 0) {
//        cout << "Mang rong, khong the xoa!" << endl;
//        return false;
//    }
//    int pos = n / 2; // Tính vị trí giữa (nếu n lẻ thì là chính giữa, nếu n chẵn thì chọn phần tử thứ n/2)
//    for (int i = pos; i < n - 1; i++) {
//        a[i] = a[i + 1]; // Dịch chuyển các phần tử phía sau lên
//    }
//    n--; // Giảm kích thước mảng
//    return true;
//}
////int sapxep_chan( int a[], int n){
////    int chan[MAX];
////    int size_chan=0;
////    for (int i =0; i< n; i++){
////        if ( a[i] %2 ==0 ){
////            chan[size_chan++]= a[i];
////        }
////    }
////    return 1;
////}
////
//// De quy
//int dequy (int n){
//    if ( n == 1 )
//        return 1;
//    return n + dequy( n-1);
//}
////int timDauTien( i)
//int main () {
//    int a [MAX];
//    int n;
//    cin >> n;
//    input_random(a,n);
////    nhap( a,n);
//    output(a,n);
////    sapxep_chan(a, n);
//    output(a,n);
////    int x; cout << " nhap x";
////    cin >>x;
////    int pos; cout << " nhap vi tri can chen";
////    cin >> pos;
////    chenViTri(a, n, pos,x);
////    cout << " ket qua sau khi chen" << endl;
////    int pos;cout << " nhap vi tri can xoa: ";
////    cin >> pos;
////    xoa(a, n, pos);
////    xoaGiua(a, n);
////    int pos;
////    cin >> pos;
////    if ( xoa(a, n, pos)== true)
////        output(a, n);
////    else
////        cout<<" xoa ko thanh cong";
////    int x;
////    cout << " nhap x can tim ";
////    cin>> x;
////    int vt=timcuoi(a, n, x);
////    if (vt==-1){
////        cout << " khong tim thay ";
////    }
////    else
////        cout << " vi tri cuoi cung" <<x<< " o vi tri " << vt << endl;
////    
////    int ab=findFirstPlace(a, n, x);
////    if (vt==-1){
////        cout << " khong tim thay ";
////        
////    }
////    else
////        cout << " vi tri dau tien" <<x<< " o vi tri " << ab << endl;
//
//    return 0;
//}
//
