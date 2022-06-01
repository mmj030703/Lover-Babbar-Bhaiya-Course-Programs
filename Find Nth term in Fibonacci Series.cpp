#include<iostream>
using namespace std;

int calc_Fibo(int n) {
    int a = 0, b = 1, fib = 1;
    for(int i = 0; i <= n; i++) {
        if(i == 0 || i == 1)
            continue;
        fib = a + b;
        a = b;
        b = fib;
    } 
    return n == 0 ? 0 : fib;  
}

int main() {

    int n;
    cout<< "Enter n: ";
    cin >> n;--

    cout<< "Term No " << n << " is " <<calc_Fibo(n); 

    return 0;
}
