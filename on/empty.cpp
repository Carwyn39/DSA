//#include <iostream>
//#include <string>
//using namespace std;
//
//#define MAX 20 // Khai bao so luong phan tu toi da cho stack
//
//struct Stack { // Cau truc stack
//    int a[MAX]; // Mang chua cac phan tu
//    int top; // Chi so phan tu tren cung stack
//};
//
//// Khoi tao stack
//void init_29_quyen(Stack &s) {
//    s.top = -1; // Gan top  -1 y la stack rong
//}
//
//// Them ptu vao stack
//void push_29_quyen(Stack &s, int x) {
//    s.top++; // Tang chi so top len
//    s.a[s.top] = x; // Gan x vao a[top]
//    // s.a[++s.top] // Thay 2 dong tren bang 1 dong
//}
//
//// Lay ptu ra khoi stack
//int pop_29_quyen(Stack &s) {
//    // x = s.a[s.top];
//    // s.top--;
//    return s.a[s.top--]; // Tra ve phan tu tren cung va giam top
//}
//
//// Ktra stack co rong khong
//bool isEmpty_29_quyen(Stack s) {
//    // if (s.top < 0)
//    //      return true;
//    // return false;
//    return s.top < 0; // Chi can viet 1 dong nay thay cho 3 dong kia
//}
//
//// Ktra stack co day khong
//bool isFull_29_quyen(Stack s) {
//    return s.top == MAX; //  xem stack da day chua
//}
//
//// Xuat cac phan tu trong stack
//void output_29_quyen(Stack s) {
//    for (int i = 0; i <= s.top; i++)
//        cout << s.a[i] << "\t"; // in tung phan tu trong stack
//    cout << endl; // xuat dong moi
//}
//
//int main() {
//    Stack s; // Khai bao stack
//    init_29_quyen(s); // Khoi tao stack rong
//    push_29_quyen(s, 5); // them 5
//    push_29_quyen(s, 15); // them 15
//    push_29_quyen(s, 25); // Them 25
//    output_29_quyen(s); // 5 15 25
//    cout << " lay 1 ptu trong stack: " << endl; // Thong bao lay phan tu
//    cout << pop_29_quyen(s) << endl; // lay 25
//
//    return 0; // Ket thuc
//}

//#include <iostream>
//using namespace std;
//#define MAX 100
//
////khoi bao 1 struct stack
//struct Stack{
//    int a[MAX]; // mang chua phan tu
//    int top; // chi so ptu tren cung
//
//};
//// khoi tao stack rong
//void init( Stack & s){
//    s.top = -1; // chua co ptu nao
//}
//void push ( Stack&s, int x){
//    s.top++; // tang chi so top len
//    s.a[s.top]=x; // gan x vao vi tri a[0]
//}
//int pop ( Stack&s){
//
//    return s.a[s.top--]; // tra ve vi tri tren cung va giam stack xuong
//}
//
//bool isEmpty(Stack s){
//    if ( s.top<0){
//        return true;}
//    return false;
//    }
//
//bool isFull(Stack s){
//    return s.top == MAX;
//}
//void output( Stack s){
//    for ( int i= 0; i<=s.top; i++){
//        cout << s.a[i]<< " ";
//        }
//    cout << endl;
//
//}
//int main(){
//    Stack s; // khai bao danh sach rong
//    init(s); // khoi tao danh sach
//    push(s,10);
//    push (s,20);
//    push(s,30);
//    output(s);
//    pop(s);
//    cout<<"da xoa ";
//    output(s);
//    isEmpty(s);
//  return 0;
//}
#include<iostream>
using namespace std;

