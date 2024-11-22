#include <iostream>
using namespace std;

// khai bao
struct Node {
    int info;
    Node* left;
    Node* right;
};
//khoi tao
Node*root;
void init (){ // khoi tao danh sach rong
    root = NULL;
}

// them
void add ( Node * &p, int x){
    // tao 1 node moi neu cay rong thi add truc tiep vao
    if (p==NULL){// neu danh sach rong

        p= new Node; // nut p moi
        p->info=x; // gan gia tri x
        p->left= NULL; // tro den nhanh trai
        p->right = NULL;} // tro den nhanh phai
    // bat dau tim nhanh de add vao
    if ( p->info == x) return;
    else if ( p-> info > x){
        return add( p->left, x); // them vao nhanh trai
    }
    else
        return add ( p->right , x); // them vao nhanh phai
}
Node * search ( Node*p , int x){
    // dau tien la check node rong
    if ( p== NULL) return NULL;
    if ( p-> info ==x) return p; // neu gia tri x nut dau tien thi tra ve p
    if ( p->info > x){
        return search ( p->left, x);
    }
    else
        return search ( p->right, x);
}
// duyet theo lnr
void duyet_LNR( Node*p){
    if ( p!=NULL){
        duyet_LNR(p->left);
        cout << p->info << " ";
        duyet_LNR(p->right);
    }
}
void duyetLRN( Node*p){
    if ( p!=NULL){
        duyetLRN(p->left);
        duyetLRN(p->right);
        cout << p->info << " ";
            }
}

void duyetNLR( Node*p){
    if ( p!=NULL){
        cout << p->info << " ";
        duyetNLR(p->left);
        duyetNLR(p->right);
    }
}

// xoa nut
void delete_node(Node*& root, int x) {
    if (root != NULL) {
        Node* p = root;
        Node* pa = NULL;

        // Tim nut can xoa
        while (p != NULL && p->info != x) {
            pa = p;
            if (p->info > x) {
                p = p->left;
            } else {
                p = p->right;
            }
        }

        if (p != NULL) {
            // Nếu nút cần xóa có 2 cây con
            if (p->left != NULL && p->right != NULL) {
                Node* r = p->right;
                Node* pr = p;

                while (r->left != NULL) {
                    pr = r;
                    r = r->left;
                }

                p->info = r->info; // Sao chép giá trị nút thay thế
                p = r;
                pa = pr;
            }

            // Xử lý nút có tối đa 1 con
            Node* t = NULL; // Khởi tạo t
            if (p->left != NULL) {
                t = p->left;
            } else if (p->right != NULL) {
                t = p->right;
            }

            if (pa == NULL) {
                root = t; // Cập nhật root nếu nút cần xóa là gốc
            } else if (pa->info > p->info) {
                pa->left = t; // Gắn con bên trái
            } else {
                pa->right = t; // Gắn con bên phải
            }

            delete p;
        }
    }
}
int main(){
//    Node*root;
    init();
    add(root,15);
    add(root,20);
    add(root,6);
    add(root,28);
    add(root,1);
    cout <<" duyet theo lnr"<< endl;
    duyet_LNR(root);
    cout << endl;
    cout <<" duyet theo lrn"<< endl;
    duyetLRN(root);
    cout << endl;
    cout <<" duyet theo nlr"<< endl;
    duyetNLR(root);
    cout << endl;
    delete_node(root,15);
    duyet_LNR(root);


}

