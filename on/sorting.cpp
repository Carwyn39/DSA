//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#define MAX 100
//using namespace std;
//
//void random_input(int a[], int n){
//    srand(time(NULL));
//    for ( int i =0; i<n; i++){
//        a[i]= rand()%( 100-1+1)+1;
//    }
//}
//void output ( int a[], int n){
//    for ( int i=0; i<n ; i++){
//        cout << a[i] << " ";
//    }
//    cout << endl;
//}
//// selection Sort
//void selection_Sort(int a[],int n){
//    for ( int k = 0; k< n-1; k++){
//        int min_pos= k;
//        for ( int i=k+1; i<n; i++){
//            if ( a[i] <  a[min_pos]){
//                int temp=a[i];
//                a[i]=a[min_pos];
//                a[min_pos]=temp;}
//        }
//    }
//}
//
//void insertion_Sort( int a[], int n){
//    for ( int i = 1; i< n; i++){
//        int pos =i-1;
//        int x= a[i];
//        while ( pos >= 0 && a[pos] > x){
//            a[pos+1]= a[pos];
//            pos --;
//        }
//        a[pos+1]=x;
//    }
//}
//void bubble_sort ( int a[], int n){
//    for ( int i =0; i<n-1; i++){
//        for ( int j=n-1; j>i ; j--){
//            if ( a[j] < a[j-1]){
//                int temp= a[j];
//                a[j]= a[j-1];
//                a[j-1]=temp;
//            }
//        }
//    }
//}
//// interchange Sort
//void interchange_Sort ( int a[], int n){ // doi cho truc tiep
//    for ( int i = 0; i< n-1; i++){
//        for ( int j = i+1; j<n; j++){
//            if ( a[i]> a[j]){
//                int temp = a[i];
//                a[i]=a[j];
//                a[j]=temp;
//            }
//        }
//    }
//
//}
////menu
//
////int main (){
//    //    int a[MAX];
//    //    int n;
//    //    cout << " nhap so ptu cua mang : " ;
//    //    cin >> n;
//    //    random_input(a, n);
//    //    output(a,n);
//    //    cout <<" sec"<< endl;
//    //    selection_Sort(a, n);
//    //    output(a,n);
//    //    cout << " bubble"<< endl;
//    //    bubble_sort(a, n);
//    //    output(a,n);
//    //    cout << " insertionSort"<< endl;
//    //    insertion_Sort(a, n);
//    //    output(a,n);
//    //    cout << " interchange" << endl;
//    //    interchange_Sort(a, n);
//    //    output( a,n);
//    //
//    //}
//void nhap(int a[], int n){
//    if ( n<0){
//        return;
//    }
//    for ( int i =0; i< n; i++){
//        cout << " nhap phan tu thu [" << i +1 << "] = ";
//        cin >> a[i];
//    }
//}
//int main(){
//    int choice;
//    int a[MAX];
//    int n ;
//    do{
//        cout << " 1. tao mang random" << endl;
//        cout << " 2. nhap mang"<< endl;
//        cout << " 3. Xuat mang"<< endl;
//        cout << " 4. se" << endl;
//        cout << " 5. inter" << endl;
//        cout << " 6. bubble" << endl;
//        cout << " 7. inser" << endl;
//        cout << " 8. thoat" << endl;
//        cout << " chon ";
//        cin >> choice;
//        if ( choice < 0|| choice > 8){
//            cout << " nhap so ko hop le" << endl;
//            continue;
//
//        }
//        switch (choice) {
//
//            case 1:{
//                cout << " nhap so ptu trong mang: ";
//                cin >> n;
//                random_input(a, n);
//                break;
//            }
//
//            case 2:{
//                cout << " nhap so ptu trong mang: ";
//                cin >> n;
//                nhap(a, n);
//                break;}
//
//            case 3: {
//                if ( n<=0){
//                    cout << " mang trong hay tao or nhao trc"<< endl;
//                }
//                cout << "Mảng hiện tại: ";
//                output(a, n);
//                break;
//            }
//            case 4: {
//                if ( n<=0){
//                    cout << " mang trong hay tao or nhao trc"<< endl;
//                    break;}
//                    selection_Sort(a, n);
//                    cout << " mang sau khi sx";
//                    output(a,n);
//                    break;
//                }
//
//            case 5: {
//                if ( n<=0){
//                    cout << " mang trong hay tao or nhao trc"<< endl;
//                    break;}
//                    bubble_sort(a, n);
//                    cout << " mang sau khi sx";
//                    output(a,n);
//                    break;
//
//            }
//
//            case 6: {
//                if ( n<=0){
//                    cout << " mang trong hay tao or nhao trc"<< endl;
//                    break;}
//                    insertion_Sort(a, n);
//                    cout << " mang sau khi sx";
//                    output(a,n);
//                    break;
//
//            }
//            case 7: {
//                if ( n<=0){
//                    cout << " mang trong hay tao or nhao trc"<< endl;
//                    break;}
//                    interchange_Sort(a, n);
//                    cout << " mang sau khi sx";
//                    output(a,n);
//                    break;
//
//            }
//            case 8:
//                cout << " thoat chuong trinh" << endl;
//                break;
//        }
//    }
//    while (choice != 8);
//            return 0;
//    }
//
