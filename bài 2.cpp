#include <iostream>
#include <math.h>
using namespace std;

int giaithua(int n){
    if(n==1){
        return 1;
    }else
        return n * giaithua (n-1);
}

float tong(int x,int n){
    if(n==0){
        return 0;
    }
    return pow(x,n)/giaithua(n) + tong(x,n-1);
}

int main(){
    int n ,x;
    cout <<"x = ";
    cin >> x ;
    cout <<"n = ";
    cin >> n ;
    cout << "S = "<<tong(x,n);
    return 0;
}