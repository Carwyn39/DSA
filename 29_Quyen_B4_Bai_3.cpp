//#include <iostream>
//using namespace std;
//
//// 1: Khai bao cau truc cay nhi phan tim kiem
//struct Node_29_Quyen {
//    int info;       // gia tri cua nut
//    Node_29_Quyen *left;     //  tro toi nhanh trai
//    Node_29_Quyen *right;    //  tro toi nhanh phai
//};
//
//Node_29_Quyen *root;         //  tro goc cua cay
//
//// :  Khoi tao cay rong
//void init_29_Quyen() {
//    root = NULL;    // Gan root la NULL de cay ban dau la rong
//}
//
//// 3: Them phan tu vao cay de quy
//void Add_29_Quyen(Node_29_Quyen *&p, int x) {
//    if (p == NULL) {        // neu cay rong
//        p = new Node_29_Quyen; // p bang node moi
//        p->info = x;        // gan gia tri x cho nut moi
//        p->left = NULL;     // khoi tao nhanh trai la NULL
//        p->right = NULL;    // khoi tao nhanh phai la NULL
//    } else { // nguoc lai
//        if (x < p->info) {  // neu x nho hon gia tri nut hien tai
//            Add_29_Quyen(p->left, x); // them x vao nhanh trai
//        } else if (x > p->info) { // neu x lon hon gia tri nut hien tai
//            Add_29_Quyen(p->right, x); // them x vao nhanh phai
//        }
//    }
//}
//
//// 4: Tim mot phan tu trong cay
//Node_29_Quyen* Search_29_Quyen(Node_29_Quyen *p, int x) {
//    if (p == NULL) return NULL;      // neu cay rong, tra ve NULL
//    if (p->info == x) return p;      // neu tim thay x, tra ve x
//    if (x < p->info)                 // neu x nho
//        return Search_29_Quyen(p->left, x);   // tim ben trai
//    else                             // neu x lon hon
//        return Search_29_Quyen(p->right, x);  // tim ben phai
//}
//
//// 5:  Xoa mot nut trong cay de quy
//Node_29_Quyen* Delete_29_Quyen(Node_29_Quyen *&p, int x) {
//    if (p == NULL) return NULL;             // neu cay rong, tra ve null
//    if (x < p->info)                        // neu x nho hon gia tri nut hien tai
//        p->left = Delete_29_Quyen(p->left, x); // xoa x ben nhanh trai
//    else if (x > p->info)                   // neu x lon hon gia tri nut hien tai
//        p->right = Delete_29_Quyen(p->right, x); // xoa x ben nhanh phai
//    else { // Neu tim thay nut can xoa
//        if (p->left == NULL) {             // nut nhanh trai bang rong
//            Node_29_Quyen *temp = p->right; // giu lai nhanh phai
//            delete p;                      // xoa nut p
//            return temp;                   // tra ve nhanh phai
//        } else if (p->right == NULL) {     // tra ve nut la nhanh trai
//            Node_29_Quyen *temp = p->left;  // tro ve nhanh trai
//            delete p;                      // Xoa nut p
//            return temp;                   // Tra ve nhanh trai
//        }
//
//        // Neu nut co hai nhanh con
//        Node_29_Quyen *temp = p->right;
//        while (temp->left != NULL)         // Tim nut nho nhat o nhanh phai
//            temp = temp->left;
//
//        p->info = temp->info;              // Thay the gia tri nut can xoa bang gia tri nut nho nhat
//        p->right = Delete_29_Quyen(p->right, temp->info); // Xoa nut nho nhat o nhanh phai
//    }
//    return p;
//}
//
//// 6:  Duyet cay theo thu tu NLR
//void DuyetNLR_29_Quyen(Node_29_Quyen *p) {
//    if (p != NULL) {           // Neu cay khong rong
//        cout << p->info << "\t"; // In gia tri nut hien tai
//        DuyetNLR_29_Quyen(p->left); // Duyet nhanh trai
//        DuyetNLR_29_Quyen(p->right); // Duyet nhanh phai
//    }
//}
//
//// 7. Duyet cay theo thu tu LNR
//void DuyetLNR_29_Quyen(Node_29_Quyen *p) {
//    if (p != NULL) {// neu cay  khac rong
//        DuyetLNR_29_Quyen(p->left); // Duyet  trai
//        cout << p->info << "\t"; // In gia tri nut hien tai
//        DuyetLNR_29_Quyen(p->right);  // Duyet  phai
//    }
//}
//
//// 8: Duyet cay theo thu tu LRN (post-order)
//void DuyetLRN_29_Quyen(Node_29_Quyen *p) {
//    if (p != NULL) {            // Neu cay khong rong
//        DuyetLRN_29_Quyen(p->left);      // duyet nhanh trai
//        DuyetLRN_29_Quyen(p->right);     // duyet nhanh phai
//        cout << p->info << "\t"; // in
//    }
//}
//
//int main() {
//    init_29_Quyen();  // Khoi tao cay rong
//
//    Add_29_Quyen(root, 14); // 14
//    
//    Add_29_Quyen(root, 7); // 7
//    
//    Add_29_Quyen(root, 8);// 8
//    
//    Add_29_Quyen(root, 39);// 39
//
//    Add_29_Quyen(root, 29);// 29
//
//    Add_29_Quyen(root, 16);// 16
//
//    Add_29_Quyen(root, 12);// 12
//
//    
//
//    // In cay theo thu tu NLR
//    cout << "Duyet cay theo thu tu NLR:\n";
//    DuyetNLR_29_Quyen(root); //14    7    8    12    39    29    16
//
//    // In cay theo thu tu LNR
//    cout << "\nDuyet cay theo thu tu LNR:\n";
//    DuyetLNR_29_Quyen(root); //7    8    12    14    16    29    39
//
//    // In cay theo thu tu LRN
//    cout << "\nDuyet cay theo thu tu LRN:\n";
//    DuyetLRN_29_Quyen(root); //12    8    7    16    29    39    14
//
//    int x;
//    cout << "\nNhap so muon tim: ";
//    cin >> x;
//    Node_29_Quyen* found = Search_29_Quyen(root, x);
//    if (found != NULL)
//        cout << "Tim thay phan tu " << x << " trong cay NPTK.\n";
//    else
//        cout << "Khong tim thay phan tu " << x << " trong cay NPTK.\n";
//
//    // Xoa phan tu khoi cay
//    Delete_29_Quyen(root, 29);
//    cout << "\nCay sau khi xoa 29: \n";
//    DuyetLNR_29_Quyen(root);  // 7    8    12    14    16    39
//
//    return

