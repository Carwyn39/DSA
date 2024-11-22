//#include <iostream>
//using namespace std;
//
//struct Node{
//    int info;
//    Node* next;
//};
//
//void init(Node*&head)
//{
//    head =NULL;
//}
//Node*createNode ( int x){
//    Node*p = new Node;
//    p-> info = x;
//    p-> next= NULL;
//    return p;
//}
//// them dau
//void addhead ( Node*&head, int x){
//    Node*p = createNode(x);
//    p->next= head;
//    head =p;
//}
//void addtail( Node*head, int x){
//    Node*p = createNode ( x);
//    p->next = NULL;
//    if ( head==NULL){
//        p->next= head;
//    }
//    else{
//        Node*q= head;
//        while ( q->next != NULL){
//            q=q->next;
//        }
//        q->next=p;
//    }
//}
//void output( Node*&head){
//    Node*p= head;
//    while ( p != NULL){
//        cout << p->info << "\t";
//        p=p->next;
//    }
//    cout << endl;
//
//    }
//void deletehead( Node*&head){
//    if ( head == NULL){
//        cout << " khong the xoa duoc" << endl;
//        return;
//    }
//
//    Node*p=head;
//    head=head->next;
//    delete p;
//}
//void addafter ( Node* &head, int pos, int x){
//    Node*p =createNode(x);
//    // tim node co gia tri la pos
//
//    Node * q = head;
//    while ( q!=NULL && q->info != pos){
//        q=q->next;
//    }
//    // q la cai node o trc cai node chua gia tri can them, phai di check xem cai vi tri bo vao co ton tai hay la ko
//    // thi bay gio la q dang la pos
//    if ( q != NULL){
//        p->next = q->next; // tuc la dia chi p->next duoc gan la pos tro vao ke tiep
//        q->next =p;
//    }
//
//}
////void deletetail( Node*&head){
//    if (head!=NULL){
//        Node * p= head;
//        Node * q= NULL;
//
//        while ( p->next !=NULL){
//            q=p;
//            p=p->next;}
//            if ( q==NULL){ // neu danh sach co 1 ptu
//                deletehead(head);
//            }
//            else
//                q->next=NULL;
//        delete(p);
//        }
//    }
////void deletetail( Node*&head){
////    if( head ==NULL){
////        cout << " khong the xoa duoc "<< endl;
////        return ;
////    }
////    Node*q,*p;
////    p=head; q=NULL;
////    while ( p->next !=NULL){
////        q=p;
////        p=p->next;
////    }
////    if ( p!=head)
////
////
////}
//
//int main (){
//    Node*head=NULL;
//    addhead(head, 15);
//    addhead(head, 10);
//    addhead(head, 20);
//    addhead(head, 25);
//    addtail(head, 30);
//
//    output(head);
//    addafter(head, 15, 3);
//    output(head);
//    deletetail(head);
//    output(head);
//    return 0;
//}
//
//
//
