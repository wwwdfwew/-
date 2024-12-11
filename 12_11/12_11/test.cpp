#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s1 += s[i];
            else if (s[i] >= 'a' && s[i] <= 'z')
                s1 += (s[i] - 32);
            else if (s[i] >= '0' && s[i] <= '9')
                s1 += s[i];
        }
        int left = 0;
        int right = s1.size()-1;
        while (left < right)
        {
            if (s1[left] != s1[right]) return false;
            left++, right--;
        }
        return true;
    }
};

int main()
{
    Solution s;
    string s1{ "A man, a plan, a canal: Panama" };
    s.isPalindrome(s1);
    return 0;
}