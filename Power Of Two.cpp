/*
// Love Babbar Bhaiya Optimised    
// Solution (Not Fully, has a scope of 
// more optimization)
*/
class Solution {
public : 
    bool isPowerOfTwo(int n) {
        int ans = 1;
        if(n == 1)
            return true;
        for(int i=0; i<=30; i++) {
            if(ans < INT_MAX/2)
            ans = ans * 2;
            cout<<ans;
            if(ans == n)
                return true;
        }
        return false;
    }
};


/*
// Love Babbar Bhaiya Solution Not 
// Optimised.

class Solution {
public : 
    bool isPowerOfTwo(int n) {
        int ans = 1;
        if(n == 1)
            return true;
        for(int i=0; i<=30; i++) {
            ans = pow(2,i);
            if(ans == n)
                return true;
        }
        return false;
    }
};
*/

/*
// My Solution on first time
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count = 0;
        if(n <= 0)
            return false;
        else if (n == 1)
            return true;
        while(n != 0) {
            if(n % 2 == 1) {
                return false;
            }
            if(n == 2)
                n -= 2;
            else
                n /= 2;
        }
        return count == 0? true: false;
    }
};

//Check all the edge/corner cases
*/
