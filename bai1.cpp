
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int a[10000];
    int tong =0;
for (int i=0; i<n;++i){
    cin>>a[i];
    tong = tong + a[i];
}
cout <<tong ;
}
// độ phức tạp thuật toán O(n)
// độ phức tạp bộ nhớ 0(1)