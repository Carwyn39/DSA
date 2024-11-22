//#include <iostream>
//#include <string>
//using namespace std;
//
//struct HV{
//    int maHV;
//    string tenHV;
//    int namsinhHv;
//
//};
//struct Node {
//    HV hv;
//    Node*next;
//};
//
//Node*createNode (HV x ){
//    Node * p = new Node;
//    p->hv=x;
//    p->next=NULL;
//    return p;
//}
//void init( Node*&head){
//    head = NULL;
//}
//void addHead( Node*&head,HV x){
//    Node*p= createNode(x);
//    p->next =head;
//    head= p;
//}
//void xuatds ( HV h){
//
//    cout <<" ma hv" << h.maHV << endl;
//    cout <<" ten hv" << h.tenHV << endl;
//    cout <<" nam sinh hv" << h.namsinhHv << endl;
//    cout << "==================" << endl;
//}
//void duyet (Node*head){
//    Node*p=head;
//    while ( p!=NULL){
//        xuatds(p->hv);
//        p=p->next;
//
//    }
//}
//// nhap 1 hv tu ban phim
//void nhapHV( HV& h){
//    cout <<"nhap  ma hoc vien : ";
//    cin >> h.maHV;
//    cout <<"nhap ten hoc vien: " ;
//    cin.ignore();// xoa khoang trang con du
//    getline( cin,h.tenHV);
//    cout << " nhap nam sinh: ";
//    cin>> h.namsinhHv;
//}
//void nhapNlan(Node*& head) {
//    char tieptuc = 'y'; // Biến kiểm tra tiếp tục
//    while (tieptuc == 'y' || tieptuc == 'Y') { // Lặp cho đến khi người dùng nhập khác 'y' hoặc 'Y'
//        HV h;
//
//        cout << "Nhap ma hoc vien: ";
//        cin >> h.maHV;
//
//        cin.ignore(); // Xóa ký tự xuống dòng dư thừa sau khi nhập số
//        cout << "Nhap ten hoc vien: ";
//        getline(cin, h.tenHV); // Nhập tên học viên (có khoảng trắng)
//
//        cout << "Nhap nam sinh hoc vien: ";
//        cin >> h.namsinhHv;
//
//        addHead(head, h); // Thêm học viên vào đầu danh sách
//
//        cout << "Ban co muon nhap tiep? (y/n): ";
//        cin >> tieptuc; // Nhập 'y' để tiếp tục hoặc 'n' để dừng
//    }
//}
//int main (){
//        Node* head; // Danh sách liên kết
//        init(head); // Khởi tạo danh sách liên kết rỗng
//
//        cout << "Nhap danh sach hoc vien: " << endl;
//        nhapNlan(head); // Nhập thông tin học viên
//
//        cout << "\nDanh sach hoc vien vua nhap: " << endl;
//        duyet(head); // Duyệt và xuất danh sách học viên
//
//        return 0;
//    }
////Viết thủ tục tìm một phần tử trong danh sách. Nếu tìm thấy, hãy xóa phần tử này
//
//
//
//
//
//
//
//
//
////    Node*head; # nhap 1 lan tu ban phim
////    init(head);
////    HV h1,h2;
////    nhapHV(h1);
////    nhapHV(h2);
////    addHead(head, h1);
////    addHead(head, h2);
////    duyet(head);
//
////Bài 2: Sử dụng DSLK quản lý thông tin của nhân viên trong công ty như
////sau:
////Mỗi NV có thông tin: Họ tên, mức lương , chức vụ, quê quán.
////- Đọc danh sách nhân viên từ tập tin và thêm vào danh sách liên kết
////- Tìm kiếm nhân viên dựa trên tên và lương
////- Sắp xếp danh sách nhân viên theo tên và lương
////- Gom nhóm nhân viên theo quê quán và ghi ra tập tin
////#include <iostream>
////#include <fstream>
////#include <string>
////#include <algorithm>
////using namespace std;
////
////struct NhanVien {
////    string hoTen;
////    double luong;
////    string chucVu;
////    string queQuan;
////};
////
////struct Node {
////    NhanVien nv;
////    Node* next;
////};
////
////// Khởi tạo danh sách rỗng
////void init(Node*& head) {
////    head = nullptr;
////}
////
////// Tạo một nút mới
////Node* createNode(NhanVien x) {
////    Node* p = new Node;
////    p->nv = x;
////    p->next = nullptr;
////    return p;
////}
////
////// Thêm vào cuối danh sách
////void addTail(Node*& head, NhanVien x) {
////    Node* p = createNode(x);
////    if (head == nullptr) {
////        head = p;
////    } else {
////        Node* temp = head;
////        while (temp->next != nullptr) {
////            temp = temp->next;
////        }
////        temp->next = p;
////    }
////}
////
////// Đọc danh sách nhân viên từ tập tin
////void docFile(Node*& head, const string& fileName) {
////    ifstream file(fileName);
////    if (!file) {
////        cout << "Khong the mo file!\n";
////        return;
////    }
////
////    while (!file.eof()) {
////        NhanVien nv;
////        getline(file, nv.hoTen);
////        if (nv.hoTen.empty()) break;
////        file >> nv.luong;
////        file.ignore();
////        getline(file, nv.chucVu);
////        getline(file, nv.queQuan);
////        file.ignore();
////        addTail(head, nv);
////    }
////    file.close();
////}
////
////// Xuất danh sách nhân viên
////void xuatDanhSach(Node* head) {
////    Node* temp = head;
////    while (temp != nullptr) {
////        cout << "Ho ten: " << temp->nv.hoTen << endl;
////        cout << "Luong: " << temp->nv.luong << endl;
////        cout << "Chuc vu: " << temp->nv.chucVu << endl;
////        cout << "Que quan: " << temp->nv.queQuan << endl;
////        cout << "=========================\n";
////        temp = temp->next;
////    }
////}
////
////// Tìm kiếm nhân viên theo tên hoặc lương
////void timKiem(Node* head, const string& ten, double luong) {
////    Node* temp = head;
////    bool found = false;
////    while (temp != nullptr) {
////        if (temp->nv.hoTen == ten || temp->nv.luong == luong) {
////            found = true;
////            cout << "Nhan vien tim thay:\n";
////            cout << "Ho ten: " << temp->nv.hoTen << endl;
////            cout << "Luong: " << temp->nv.luong << endl;
////            cout << "Chuc vu: " << temp->nv.chucVu << endl;
////            cout << "Que quan: " << temp->nv.queQuan << endl;
////            cout << "=========================\n";
////        }
////        temp = temp->next;
////    }
////    if (!found) {
////        cout << "Khong tim thay nhan vien nao phu hop.\n";
////    }
////}
////
////// Sắp xếp danh sách theo tên và lương
////void sapXep(Node*& head) {
////    for (Node* i = head; i != nullptr; i = i->next) {
////        for (Node* j = i->next; j != nullptr; j = j->next) {
////            if (i->nv.hoTen > j->nv.hoTen ||
////               (i->nv.hoTen == j->nv.hoTen && i->nv.luong > j->nv.luong)) {
////                swap(i->nv, j->nv);
////            }
////        }
////    }
////}
////
////// Gom nhóm theo quê quán và ghi ra tập tin
////void ghiNhomQueQuan(Node* head, const string& fileName) {
////    ofstream file(fileName);
////    if (!file) {
////        cout << "Khong the mo file de ghi!\n";
////        return;
////    }
////
////    Node* temp = head;
////    while (temp != nullptr) {
////        file << temp->nv.queQuan << ":" << endl;
////        Node* inner = head;
////        while (inner != nullptr) {
////            if (inner->nv.queQuan == temp->nv.queQuan) {
////                file << " - " << inner->nv.hoTen << ", "
////                     << "Luong: " << inner->nv.luong << ", "
////                     << "Chuc vu: " << inner->nv.chucVu << endl;
////            }
////            inner = inner->next;
////        }
////        temp = temp->next;
////    }
////    file.close();
////}
//
//
//
//
//
//
