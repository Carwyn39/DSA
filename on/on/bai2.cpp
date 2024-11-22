//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//#define MAX 100
//
//int size_chan=0;
//int size_le=0;
//int chan[MAX];
//int le[MAX];
//void random(int a[], int n){
//    srand( time ( NULL));
//    for ( int i = 0; i< n; i++)
//        a[i]= rand () % ( 100-1+1)+1; //1-> 100
//    
//}
//void output( const int a[], const int n ){
//    for ( int i = 0; i < n ; i++){
//        cout << a[i]<< " ";
//    }
//    cout << endl;
//}
////
//void sort( int a[], int &n){
//    int size_chan=0; // de ghi lai so chan
//    int size_le=0; // de ghi lai so le
//
//    for ( int i =0; i< n; i++){
//        if (a[i]%2==0)
//            chan[size_chan++]= a[i];
//        else
//            le[size_le++]= a[i];
//    }
//// sap xep so chan
//    for ( int i = 0; i< size_chan; i++){
//        for (int j=0; j <= size_chan-2; j ++){
//            if (chan[j+1] < chan[j]){
//                int temp = chan[j];
//                chan[j]=chan[j+1];
//                chan[j+1]= temp;
//            }
//            
//        }
//    }
//// sap xep so le
//    for ( int i = 0; i< size_le; i++){
//        for (int j=0; j <= size_le-2; j ++){
//            if (le[j+1] > le[j]){
//                int temp = le[j];
//                le[j]=le[j+1];
//                le[j+1]= temp;
//            }
//            
//        }
//    }
//    cout << " mang sau khi sap xep"<< endl;
//    for ( int i =0 ; i < size_chan; i++){
//        cout << chan[i]<< " ";}
//    for ( int i=0; i< size_le; i++){
//        cout << le[i] << " ";
//    }
//
//}
//int main (){
//    int a[MAX];
//    int n;
//    cin >> n;
//    random(a, n);
//    output (a,n);
//    sort(a,n);
//    return 0;
//}
//
//
//
//
//
//
//
