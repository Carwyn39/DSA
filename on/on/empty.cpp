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
//
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
///*#include<iostream>
//using namespace std;
//struct Node{
//    int info; // gia tri
//    Node*next;
//};
//Node*sp; // dinh cua stack, sp duoc coi nhu head
//void init(){
//    sp=NULL; // dinh stack rong
//}
//int isEmpty(){
//    if ( sp==NULL){
//        return 1;
//    }
//    return 0;
//};
//void push(int x){
//    Node*p= new Node;
//    p->info=x;
//    p->next=sp; // vi sp la dinh
//    sp=p; // cap nhat lai dinh moi
//
//};
//int pop(int &x){ // giong nhu xoa dau
//    if ( sp!=NULL){ // neu dinh khac rong
//        Node*p= sp; // cho nut p la dinh stack
//        x=p->info;// gan gia tri vung info cho x
//        sp=sp->next; // doi dinh stack qua nut ke tiep
//        delete(p); // lay ra roi xoa di
//        return 1; // xoa thanh cong
//    }
//    return 0; //  tra ve vi stack rong thi ko co gi de xoa
//};
//void process_Stack(){
//    cout << " cac ptu trong stack la:\n"<< endl;
//    Node*p=sp;
//    while ( p!=NULL){
//        cout << p->info << " ";
//        p=p->next;
//    }
//}
//int main(){
//    int chon, x;
//    do{
//        cout << " Menu cai dat stack bang danh sach lien ket" << endl;
//        cout << " 1. Khoi tao stack\n";
//        cout << " 2. them phan tu vao stack\n";
//        cout << " 3. lay ptu ra khoi stack\n";
//        cout << " 4. xuat lai phan tu trong stack\n";
//        cout << " 5. ktra stack rong\n";
//        cout << " 6. thoat\n";
//        cout <<" chon ";
//        cin >> chon;
//        switch (chon) {
//            case 1:
//                cout << " khoi tao stack thanh cong\n";
//                init();
//                break;
//            case 2:
//                cout << " them\n";
//                cin >> x;
//                push(x);
//                cout << " them vao stack thanh cong";
//                break;
//            case 3:
//                cout << " lay 1 ptu \n";
//                pop(x);
//                cout << " xoa khoi stack thanh cong";
//                break;
//            case 4:
//                cout << " danh sach hien tai cua stack la\n";
//                process_Stack();
//                break;
//            case 5:
//                if ( isEmpty()){
//                    cout << " stack rong" << endl;
//                }
//                else {
//                    cout << " ktr stack 0 rong ";}
//                break;
//            case 6:
//                cout << " thoat chuong trinh\n";
//                break;
//
//            default:
//                break;
//        }
//    }
//    while (chon != 6);
//{
//        return 0;}
//}*/
//
// QUEUE
//
//#include <iostream>
//using namespace std;
//struct Node {
//    int info;
//    Node*next;
//};
//Node*front,*rear; // khai bao toan cuc nut dau va cuoi
//void init(){
//    front=rear=NULL; // khoi tao queue rong
//};
//
//void push( int x){ // them cuoi
//    Node*p = new Node;  // tao nut moi
//    p->info = x;
//    p->next = NULL;
//    if (rear == NULL) {
//        front = rear = p; // Update both front and rear
//    } else {
//        rear->next = p;
//        rear = p;
//    }
//}
//int pop(int &x) { // xoa dau
//    if (front != NULL) {
//        Node *p = front;
//        x = p->info;
//        front = front->next;
//        if (front == NULL) {
//            rear = NULL;
//        }
//        delete p;
//        return 1;
//    }
//    return 0;
//}
//void deleteall(){
//    if ( front != NULL){
//        Node*p = front;
//        front = front -> next;
//        delete p;
//    }
//}
//int isEmpty(){
//    if ( front == NULL){
//        return 1;
//    }
//    return 0;
//}
//void process_queue() {
//    if (front == NULL) {
//        cout << "Queue is empty." << endl;
//        return;
//    }
//    Node *p = front;
//    while (p != NULL) {
//        cout << p->info << " ";
//        p = p->next;
//    }
//    cout << endl;
//}
//int main() {
//    int chon, x;
//    do {
//        cout << "1. Khoi tao queue\n";
//        cout << "2. Them phan tu vao queue\n";
//        cout << "3. Lay phan tu ra khoi queue\n";
//        cout << "4. Kiem tra queue rong\n";
//        cout << "5. Xuat queue\n";
//        cout << "6. Thoat\n";
//        cout << "7. Xoa tat ca\n";
//        cout << "Chon: ";
//        cin >> chon;
//
//        switch (chon) {
//            case 1:
//                init();
//                cout << "Khoi tao queue thanh cong.\n";
//                break;
//            case 2:
//                cout << "Nhap phan tu: ";
//                cin >> x;
//                push(x);
//                cout << "Them thanh cong.\n";
//                break;
//            case 3:
//                if (pop(x)) {
//                    cout << "Phan tu lay ra: " << x << endl;
//                } else {
//                    cout << "Queue rong, khong the lay phan tu.\n";
//                }
//                break;
//            case 4:
//                if (isEmpty()) {
//                    cout << "Queue rong.\n";
//                } else {
//                    cout << "Queue khong rong.\n";
//                }
//                break;
//            case 5:
//                cout << "Queue hien tai: ";
//                process_queue();
//                break;
//            case 6:
//                cout << "Thoat chuong trinh.\n";
//                deleteall();
//                break;
//            case 7:
//                deleteall();
//                cout << "Xoa tat ca phan tu thanh cong.\n";
//                break;
//            default:
//                cout << "Lua chon khong hop le.\n";
//        }
//    } while (chon != 6);
//
//    return 0;
//}
//
//
