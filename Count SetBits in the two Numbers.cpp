#include<iostream>

using namespace std;

int Count_SetBits(int a, int b) {

    

    int count1 = 0, count2 = 0;

    while(a != 0 || b != 0) {

        if(a & 1 == 1)

            count1++;

        if(b & 1 == 1)

            count2++;

        a >>= 1;

        b >>= 1;

    }

    

    /*

    while(b != 0) {

        if(b & 1 == 1)

            count_bit++;

        b >>= 1;

    }

    */

    

    return count1 + count2;

}

int main() {

    int a, b;

    cout<< "Enter a: ";

    cin >> a;

    cout<<"Enter b: ";

    cin >> b;

    cout<< "The number of Set Bit is " << Count_SetBits(a,b);

    return 0;

}

    
