#include <iostream>
using namespace std;
int main() {
  // LEETCODE 1 : Reverse Integer 

 /* class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        
        while(x!=0){
            int digit = x % 10;
            if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
                return 0;
            }
               ans = (ans*10)+digit;
               x = x/10;
        }
        return ans;
    }
}; */

/* LEETCODE 2 : COMPLEMENT OF BASE 10 INTEGER 
                      OR
                NUMBER COMPLEMENT  */

/*class Solution {
public:
    int bitwiseComplement(int n) {
        
        int m = n;
        int mask = 0;
        
        if(n==0){
            return 1;
        }
        
        while(m!=0){
            
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        
        int ans = (~n) & mask;
        return ans;
        
    }
}; */


// LEETCODE 3 : POWER OF 2 

       // BRUTE FORCE APPROACH 

/*class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        for(int i = 0; i<=30 ; i++){
            
            int ans = pow(2,i);
            
            if(ans == n){
                return true;
            }
        }
        return false;
        
    }
};  */
             // EFFICIENT APPROACH 

/*class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        int ans = 1;
        
        for(int i = 0; i<=30 ; i++){
            
            if(ans == n){
                return true;
            }
            
            if ( ans < INT_MAX /2){
            ans = ans * 2;
            }
            
            
        }
        return false;
        
    }
}; */            
       

} 