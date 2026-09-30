#include<iostream>
using namespace std;
int giaithua(int n){
    if(n==0||n==1) {
    return 1;
    }
      else {
        return n*giaithua(n-1);
      }
    
}
int main(){
    int n;
    cin >>n;
   cout <<  giaithua(n);

}
// độ phức tạp thuận toán : o(n)
// độ phức tạp bộ nhớ 0(n)