#include<iostream>
using namespace std;
void sum(int m,int n,int a[1000][1000]){
    int tong =0;
for (int i= 0; i<m; i++){
    for (int j=0; j<n;++i){
        tong = tong + a[i][j];
    }
 }
 cout <<tong;
}
void delrow(int m, int n, int a[1000][1000],int i ){
    for (int k = i; k < m - 1; k++) {
        for (int j = 0; j < n; j++) {
            a[k][j] = a[k + 1][j];
        }
    }
}
int main(){
    int a[1000][1000];
    int x,y;
    cin >>x;
    cin >>y;
 for (int i= 0; i<x; i++){
    for (int j=0; j<y;++j){
        cin>>a[i][j];
    }
 }
   sum(x,y,a );
   cout <<"nhập hàng cần xóa ";
   int i;cin >>i;
   delrow(x,y,a,i);
   for (int i=0; i<x; i++){
    for (int j=0; j<y-1;++j){
        cout<<a[i][j];
    }
   }
}
// độ phức tạp thuật toán 0(N^2);
// độ phức tạp bộ nhớ 0(1)