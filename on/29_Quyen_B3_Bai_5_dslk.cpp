#include <iostream>
#include <string>
#define MAX 100
using namespace std;

struct Stack {
    int a[MAX];  // Mang chua cac phan tu trong stack
    int top;     // Chi so cua phan tu top trong stack
};

// Khoi tao stack rong
void init_29_quyen(Stack &s) {
    s.top = -1;  // Chua co phan tu nao
}

// Them phan tu vao stack
void push_29_quyen(Stack &s, int x) {
    if (s.top < MAX - 1) {  // Kiem tra stack day
        s.a[++s.top] = x;  // Tang top len va gan x vao a[top]
    } else {
        cout << "Stack day, khong the them phan tu!" << endl;
    }
}

// Lay phan tu o top ra khoi stack
int pop_29_quyen(Stack &s) {
    if (s.top >= 0) {  // Kiem tra stack rong
        return s.a[s.top--];  // Giam top va tra ve phan tu top
    } else { // nguoc lai
        cout << "Stack rong!" << endl; // rong
        return -1; // thoat
    }
}

// Kiem tra stack co rong khong
bool isEmpty_29_quyen(Stack s) {
    return s.top < 0;  // Chi can kiem tra top < 0
}

// Kiem tra stack co day hay chua
bool isFull_29_quyen(Stack s) {
    return s.top == MAX - 1; // tra ve top bang max-1
}

// Ham xuat cac phan tu trong stack
void output_29_quyen(Stack s) {
    cout << "Cac phan tu trong Stack: ";
    for (int i = s.top; i >= 0; i--) {  // Duyet nguoc de hien thi stack
        cout << s.a[i] << "\t"; // in ra cac ptu trong stack cach nhau 1 tab
    }
    cout << endl; // xuong dong moi
}

// Ham hien thi menu va xu ly lua chon
void menu_29_quyen(Stack &s) { // ham menu
    int choice;
    do { // su dung do while de hien thi menu cho nguoi dung it nhat 1 lan dau neu nhap sai
        // in ra cac lua chon
        cout << "============= Menu ==============" << endl;
        cout << "1. Chi Hien thi ptu dau trong Stack" << endl;
        cout << "2. Xoa ptu trong Stack" << endl;
        cout << "3. Hien Thi cac ptu trong Stack" << endl;
        cout << "0. Ket thuc" << endl;
        cout << "============= End ==============" << endl;
        cout << "Nhap lua chon ban muon: ";
        cin >> choice; // nhap lua chon

        switch (choice) { // dung switch case
            case 1: // th neu chon 1
                if (!isEmpty_29_quyen(s)){ // neu stack ko rong
                    cout << "Phan tu dau tien trong Stack: " << s.a[s.top] << endl; // in ra ptu dau tien
                } else {
                    cout << "Stack rong!" << endl; // rong thi in ra tb stack rong
                }
                break; // dung lai
            case 2: // th chon 2
                if (!isEmpty_29_quyen(s)) { // neu stack khong rong in ra ptu bi xoa va tb xoa thanh cong
                    cout << "Phan tu bi xoa: " << pop_29_quyen(s) << endl;
                    cout << "Xoa thanh cong!" << endl;
                } else {
                    cout << "Stack rong!" << endl;
                }
                break; // dung lai
            case 3: // th chon 3 thi in ra lai danh sach cac ptu co trong stack
                output_29_quyen(s);
                break;
            case 0: // neu chon 0 thi ket thuc chuong trinh
                cout << "Ket thuc chuong trinh." << endl;
                break;
            default: // chon so khac 1 2 3 0 thi vui long nhap lai
                cout << "Lua chon khong hop le. Vui long nhap lai." << endl;
        }
    } while (choice != 0); // thuc hien den khi nguoi dung chon 0 de thoat chuong trinh
}

// Ham main
int main() {
    Stack s;
    init_29_quyen(s);  // Khoi tao stack rong
    push_29_quyen(s, 5); // them 5
    push_29_quyen(s, 7); // them 7
    push_29_quyen(s, 1); // them 1
    push_29_quyen(s, 3); // them 3
    push_29_quyen(s, 9); // them 9
    push_29_quyen(s, 12);// them 12
    
    output_29_quyen(s); // xuat ra cac ptu

    menu_29_quyen(s); // goi menu

    return 0;
}
