#include<iostream>
using namespace std;

int main() {
    int amount, amt;
    cout<<"Enter Amount: ";
    cin>>amount;
    if(amount > 0)
        amt = 1;
    else
        amt = 0;
    switch(amt) {
        case 0: cout<<"For every denomination the number of notes are 0.";
        
        case 1:{
            int count = 0;
            if(amount>99) {
            count = amount / 100;
            cout<<"Notes of 100: "<<count<<endl;
            amount = amount - (count * 100);
            }
            else 
            cout<<"Notes of 100: 0"<<endl;
            if(amount>49) {
            count = amount / 50;
            cout<<"Notes of 50: "<<count<<endl;
            amount = amount - (count * 50);
            }
            if(amount>19) {
            count = amount / 20;
            cout<<"Notes of 20: "<<count<<endl;
            amount = amount - (count * 20);
            }
            if(amount>9) {
            count = amount / 10;
            cout<<"Notes of 10: "<<count<<endl;
            amount = amount - (count * 10);
            }
            if(amount>0) {
            count = amount / 1;
            cout<<"Notes of 1: "<<count<<endl;
            }
            break;
        }
        default: cout<<"Invalid Input.";    
            
    }
    return 0;
}
    
