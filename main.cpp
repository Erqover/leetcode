#include <iostream>
#include "leetcode.hpp"
#include <string>
#include <vector>

using namespace std;

int main()
{
    Solution run;
    vector<int> n = {1, 2, 3, 4, 5};
    vector<int> m = {2, 5, 6};
    vector<char> j = {'a','a','b','b','c','c','c'};

    cout << run.compress(j);

    return 0;
}
