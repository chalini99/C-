// Check if a number is palindrome or not
class Solution{
public:
      bool palindrome(int n){
        n=abs(n);
        int original=n;
        int rev=0;
        while(n>0){
            int num = n%10;
            rev=rev*10+num;
            n=n/10;
        }
        return original==rev;
      }

};

// Reverse digits of number
class Solution{
public:
        int reverse(int n){
            n=abs();
            int rev=0;
            while(n>0){
                int num = n%10;
                rev = rev*10+num;
                n=n/10;

            }
            return rev;

        }
};



