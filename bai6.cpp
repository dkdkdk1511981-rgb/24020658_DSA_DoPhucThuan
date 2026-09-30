#include<iostream>
using namespace std;
void del(int n, int a[], int k){
    for (int i= k ; i<n-1; i++){
        a[i]=a[i+1];
    }
}
void ins(int n, int a[], int m , int y ){
    for (int i = n; i > m; i--) {
        a[i] =a[i-1];
    }
    a[m] = y;
}
int main(){
    int n;
    cin >>n;
    int a[1000];
    for (int i=0; i<n;++i){
        cin>>a[i];
    }
// xóa vị trí k
   cout<<" nhap vi tri can xoa";
   int k; cin >>k;
   del(n,a,k);
//them y vao vi trí m 
   for (int i= 0; i<n;++i){
cout<<a[i];
}
int y,m;
cin >>y>>m;
ins(n,a,m,y);
 for(int i= 0; i<n;++i){
    cout<<a[i];
}
}
// độ phức tạp thuật toán 0(n)
// độ phức tạp bộ nhớ 0(1)