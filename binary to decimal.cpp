#include<iostream>
#include<math.h>
using namespace std;

int main() {
  int n, ans = 0, i = 0;
  cin >> n;
  while(n != 0) {
      int bit = n % 10;
      if(bit == 1)
          ans = ans + pow(2,i);
      n /= 10;
      i++;
  } 
  cout<<ans;
}
