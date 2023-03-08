#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <type_traits>
#include <vector>
#include <cstring>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double mid = 0;
        vector<int> n3 = {};
        for (int i : nums1)
            n3.push_back(i);
        for (int i : nums2)
            n3.push_back(i);
        sort(n3.begin(), n3.end());

        if (n3.size() % 2 == 0)
        {
            int s1 = n3.size() / 2, s2 = s1 - 1;
            mid = s1 + s2;
            mid /= 2;
        }
        else
        {
            int s = n3.size() - 1;
            mid = n3[s];
        }

        return mid;
    }

    string longestCommonPrefix(vector<string>& strs) {
        string prefix;



        return prefix;
    }

    char pref (string str, int n)
    {
        char x = ' ';
        int i = 0;

        for (char z : str)
        {
            if (i == n)
                return z;
            i++;
        }

        return x;
    }

    string gcdOfStrings(string str1, string str2)
    {
        for (char i : str1)
        {
            cout << i;
        }
        return str1;
    }

    int fib(int n) {

        int t1 = 0, t2 = 0;
        int t = 0;

        for (int i=0;i < n+1;i++)
        {
            if (n == 1) return 1;
            if (i == 1)
            {
                t1++;
                continue;
            }

            t = t1 + t2;
            t2 = t1;
            t1 = t;
        }

        return t;
    }

    int tribonacci(int n)
    {
        int t1 = 0, t2 = 0, t3 = 0;
        int t = 0;

        for (int i=0;i < n+1;i++)
        {
            if (n == 1) return 1;
            if (i == 1)
            {
                t1++;
                continue;
            }

            t = t1 + t2 + t3;
            t3 = t2;
            t2 = t1;
            t1 = t;
        }

        return t;
    }

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        vector<int> merg = {};
        for (int i = 0;i < m;i++)
        {
            merg.push_back(nums1[i]);
        }
        for (int i = 0;i < n;i++)
        {
            merg.push_back(nums2[i]);
        }
        sort(merg.begin(), merg.end());
        nums1 = merg;
    }

    string addBinary(string a, string b)
    {
        string s;
        unsigned int sum = 0;
        int p = 1;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        vector<char> la(a.begin(), a.end());
        vector<char> lb(b.begin(), b.end());

        for (char i : la)
        {
            if (i == '1')
            {
                sum += p;
            }
            if (p != 1)
            {
                p *= 2;
            }
            else
            {
                p = 2;
            }
        }
        p = 1;
        for (char i : lb)
        {
            if (i == '1')
            {
                sum += p;
            }
            if (p != 1)
            {
                p *= 2;
            }
            else
            {
                p = 2;
            }
        }
        if (sum <= 0) return "0";
        while (sum > 0)
        {
            if (sum % 2 != 0)
            {
                s += "1";
            }
            else
            {
                s += "0";
            }
            sum /= 2;
        }

        reverse(s.begin(), s.end());
        return s;
    }

    int removeElement(vector<int>& nums, int val)
    {
        int k = 0;

        for (int i=0;i < nums.size();i++)
        {
            if (nums[i] != val)
            {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }

    int lengthOfLastWord(string s)
    {
        int len = 0;
        bool lc = false;
        reverse(s.begin(), s.end());

        for (char i : s)
        {
            if (i != ' ' && !lc)
            {
                len++;
                lc = true;
            }
            else if (i != ' ' && lc)
            {
                len++;
            }
            else
            {
                if (lc)
                {
                    return len;
                }
                continue;
            }
        }

        return len;
    }

    int compress(vector<char>& chars) {
        string compress = "";
        int r = 0;
        char s = ' ';
        for (int i=1; i<chars.size()+1; i++) {
            if (chars[i-1] == chars[i]) {
                s = chars[i];
                r++;
            }
            else {
                compress += s;
                if (r > 0) {
                    compress += to_string(r);
                }
                r = 0;
            }
        }
        return compress.size();
    }

    int findKthPositive(vector<int>& arr, int k) {
        int r = arr.size() + k;
        // if (arr.size() == 1 && k < arr[0])
        //     return k;
        for (int i=arr.size()-1;i>-1;i--) {
            if (arr[i]>=r) {
                r--;
            }
        }
return r;
    }
};
