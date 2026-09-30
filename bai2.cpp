#include<iostream>
using namespace std;
 void xapxep( int n, int a[]){
  for (int i =0; i<n;++i){
    for (int j=i+1; j<n;++j){
        if(a[i]>a[j]){
            int temp= a[i];
            a[i]=a[j];
            a[j]= temp;
        }
    }
  }
 }
 int main(){
    int n;
    cin >>n;
    int a[100000];
    for (int i=0; i<n; ++i){
        cin >>a[i];
    }
    xapxep(n,a);
    for (int i= 0; i<n;++i){
        cout<< a[i]<<" ";
    }
 }
 // độ phức tạp thuật toán : O(n^2)
// độ phức tạp bộ nhớ 0(1)