#include<stdio.h>
#include<math.h>

using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        int num = x;
        if (x < 0)
        {
            return false;
        }
        
        unsigned long next = x % 10;
        x /= 10;
        int temp = 0;
        
        while (x != 0)
        {
            temp = x % 10;
            next = next * 10 + temp;
            x /= 10;
        }
        
        return num == next;
    }
};