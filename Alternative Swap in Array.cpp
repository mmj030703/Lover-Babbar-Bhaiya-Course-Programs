/*
// Love Babbar Bhaiya's Code
#include<iostream> 

 using namespace std; 

  

 void printArray(int arr[], int n) { 

  

     for(int i = 0; i<n; i++ ) { 

         cout<< arr[i] <<" "; 

     }cout<<endl; 

  

 } 

  

 void swapAlternate(int arr[], int size) { 

  

     for(int i = 0; i<size; i+=2 ) { 

         if(i+1 < size) { 

             swap(arr[i], arr[i+1]); 

         } 

     } 

  

 } 

  

 int main() { 

  

     int even[8] = {5,2,9,4,7,6,1,0}; 

     int odd[5] = {11, 33, 9, 76, 43}; 

  

     swapAlternate(even, 8); 

     printArray(even, 8); 

  

     cout << endl; 

     swapAlternate(odd, 5); 

     printArray(odd, 5); 

  

  

  

     return 0; 

 }
 */

/*
// My Code
#include<iostream>

using namespace std;

void inputArray(int nums[],int size) {

    cout<<"Enter Array Elements: " << endl;

    for(int i = 0; i<= size-1; i++) {

        cin >> nums[i];

    }

} 

void arrayAlt_Reverse(int nums[], int size) {

    int start = 0, end = 1;

    for(int i = 0; i < (size/2); i++) {

        swap(nums[start],nums[end]);

        start += 2;

        end += 2;

    }

}

void printArray(int nums[],int size) {

    cout<<"Enter Array Elements: " << endl;

    for(int i = 0; i<= size-1; i++) {

        cout<< nums[i] << " ";

    }

} 

int main() {

    int nums[1000];

    inputArray(nums,6);

    cout<< "Alternate Reverse of an Array: ";

    arrayAlt_Reverse(nums,6);

    printArray(nums,6);

    return 0;

}

    
*/
