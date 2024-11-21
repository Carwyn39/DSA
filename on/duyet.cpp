//#include<iostream>
//#include<fstream>
//using namespace std;
//
//#define MAX 20
//int A[MAX][MAX]; //Mang hai chieu
//int n; //So dinh cua do thi
//
//void init_18_My()
//{
//    n = 0;
//}
////DSLK sư dung cho stack va queue
//struct Node_18_My
//{
//    int info_18_My;
//    Node_18_My* link;
//};
//Node_18_My* sp;
//Node_18_My* front, * rear;
//
//// QUEUE
//void InitQueue_18_My()
//{
//    front = NULL;
//    rear = NULL;
//}
//int Empty_18_My()
//{
//    if (front == NULL)
//        return 1;
//    return 0;
//}
//
//void Push_18_My(int x)
//{
//    Node_18_My* p = new Node_18_My;
//    p->info_18_My = x;
//    p->link = NULL;
//    if (rear == NULL)
//        front = p;
//    else
//        rear->link = p;
//    rear = p;
//}
//
//int Pop_18_My(int& x)
//{
//    if (front != NULL)
//    {
//        Node_18_My* p = front;
//        front = p->link;
//        x = p->info_18_My;
//        if (front == NULL)
//        {
//            rear = NULL;
//        }
//        delete p;
//        return 1;
//    }
//    return 0;
//}
//
////Duyet BFS(QUEUE)
//int C[100]; //Luu tru dinh chua xet, 1 la chua xet, 0 la da xet
//int bfs[100]; //Luu danh sach phan tu da duyet
//int nbfs = 0; //Chi so luu dinh da xet
//void InitC()
//{
//    for (int i = 0; i < n; i++)
//        C[i] = 1;
//}
//void BFS(int v) {
//    int w, p;
//    Push_18_My(v);
//    C[v] = 0;
//    while (front != NULL) {
//        Pop_18_My(p);
//        bfs[nbfs] = p;
//        nbfs++;
//        for (w = 0; w < n; w++) {
//            if (C[w] && A[p][w] == 1) {
//                Push_18_My(w);
//                C[w] = 0;
//            }
//        }
//    }
//}
//
//
//void nhapMaTran(int& n)
//{
//    ifstream inputFile("D:/18_My_B5/text.txt");
//
//    if (!inputFile)
//    {
//        cout << "Khong the mo file" << endl;
//        return;
//    }
//    inputFile >> n;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            inputFile >> A[i][j];
//        }
//    }
//    inputFile.close();
//}
//void xuatMaTran_18_My(int n)
//{
//    cout << "Ma tran ke cua do thi la:" << endl;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cout << A[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main()
//{
//    int  start;
//    nhapMaTran(n);
//    xuatMaTran_18_My(n);
//    cout << "Nhap dinh bat dau de duyet:";
//    cin >> start;
//    InitQueue_18_My();
//    InitC();
//    BFS(start);
//    for (int i = 0; i < nbfs; i++)
//    {
//        cout << bfs[i] << " ";
//    }
//    cout << endl;
//    return 0;
//}
