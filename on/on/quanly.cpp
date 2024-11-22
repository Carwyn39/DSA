//#include <iostream>
//using namespace std;
//#define MAX 100
//struct List{
//    int a[MAX];
//    int n;
//    
//};
//void input( List &l){
//    cout << " n=";
//    cin >> l.n;
//    for ( int i =0 ; i< l.n; i++){
//        cout << " nhap phan tu thu [" << i+1 << "]=";
//        cin >> l.a[i];
//    }
//}
//void output( const List l){
//    for ( int i = 0; i< l.n; i++){
//        cout << l.a[i] << " ";
//    }
//}
//int tim(List l, int x){
//    int vt=-1;
//    for ( int i =0 ; i< l.n ; i++){
//        if ( l.a[i]== x){
//            vt=i;
//            break;
//        }
//
//    }
//    return vt;
//}
//bool them( List &l, int pos, int x){
//    if ( pos< 0 || pos> l.n)
//        return false;
//    l.n++;
//    for (int i=l.n;i>=pos+1; i--){
//        l.a[i]= l.a[i-1];
//    }
//    l.a[pos]=x;
//    return true;
//}
//bool xoa( List &l, int pos){
//    if ( pos < 0 || pos >=l.n){
//        return false;
//    }
//    for ( int i= pos; i<l.n ; i++){
//        l.a[i]=l.a[i+1];
//    }
//    l.n--;
//    return true;
//}
//// ktra danh sach tang dan
// 
//int main (){
//    List l;
//    input(l);
//    output(l);
//    int x; cin >> x;
//    int vt = tim(l, x);
//    if (vt ==-1)
//        cout << " ko tim thay";
//    else
//        cout <<  " tim thay o "<< vt<< endl;
//    int pos;
//    cout << " nhap vi yti can them  " << endl; cin >> pos;
////    cout << " nhap x" << endl; cin >>x;
//
//
////            cout << "Danh sach sau khi them: ";
////            output(l);
////        } else {
////            cout << "xoa khong thanh cong!" << endl;
////        }
////
////        return 0;//    if ( xoa(l,pos)== true ){
////        output(l);
////    }
////    else
////        cout << " xoa ko thanh cong";
//
//}
//
