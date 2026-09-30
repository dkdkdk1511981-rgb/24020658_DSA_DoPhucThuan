#include<iostream>
using namespace std;
int main(){
    float n;
    cin>>n;
    float a[10000];
    float sum=0;
    for (int i=0 ;i<n;++i){
        cin>>a[i];
        sum= sum +a[i];
    }
     sum = sum/n;
     for (int i=0; i<n;++i){
        if(a[i]>= sum){
            cout<<a[i]<<" ";
        }
     }
}
// độ phức tạp thuật toán 0(n)
// độ phức tạp bộ nhớ 0(1)