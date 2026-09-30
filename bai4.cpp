#include<iostream>
using namespace std;
void rutgonohanso(int a ,int b){
    int x=a;
    int y=b;
    while(y!=0){
    int z= x % y;
     x=y;
     y=z;

    }
    a=a/x;
    b=b/x;
    cout<< a<<"/"<<b;
}
int main(){
    int a ,b;
    cin >>a>>b;
    rutgonohanso(a,b);
}
// độ phức tạp thuật toán 0(1)
// độ phức tạp bộ nhớ 0(1)