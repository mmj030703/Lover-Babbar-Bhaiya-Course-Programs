Here an Array is given as (2m + 1) in which m is twice and 1 in ones in 
the given array

We have to find that 1 numeber which is unique.

Eg: 
nums[] = {3,1,4,3,4,1,6};
In nums number 3,4,1 is twice and 
6 is ones so the output will be 6 as it is unique.


/*
// Mine Solution with edge cases.
#include<iostream>

using namespace std;

void inputArray(int nums[],int size) {

    cout<<"Enter Array Elements: " << endl;

    for(int i = 0; i<= size-1; i++) {

        cin >> nums[i];

    }

}

void uniqueElement(int nums[], int size) {

    int count_unique = 0;

    int unique;

    for(int i = 0; i <= size-1; i++) {

        int count = 0;

        for(int j = 0; j <= size-1; j++) {

            if(nums[i] == nums[j])

                ++count;

        }

        if(count == 1){

            ++count_unique;

            unique = nums[i];

        }

    }

    if(count_unique == 1)

        //return unique;

        cout<< "Unique Element: " << unique;

    else 

        cout<< "No Unique Element found.";

}

int main() {

    int nums[7];

    inputArray(nums,7);

    uniqueElement(nums,7);

    //cout<< "Unique Element: " << unique;

    return 0;

}
*/


//Love Babbar Bhaiya Solution using XOR Logic
int findUnique(int *arr, int size) 

 { 

            int ans = 0; 

      

     for(int i = 0; i<size; i++) { 

         ans = ans^arr[i]; 

     } 

     return ans; 

 }
 
