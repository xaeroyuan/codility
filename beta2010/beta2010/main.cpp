//
//  main.cpp
//  beta2010
//
//  Created by xaeroyuan on 5/8/14.
//
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int solution(const vector<int> &A) {
    // write your code in C++98
    int ans = 0;
    vector<int> lBound, hBound;
    int n = (int)A.size();
    for(int i = 0; i < n; i++)
    {
        lBound.push_back((i < A[i] ? 0 : i - A[i]));
        hBound.push_back((i + A[i]) < 0 ? INT32_MAX : (i + A[i]));
    }
    sort(lBound.begin(), lBound.end());
    sort(hBound.begin(), hBound.end());
    
    for(int i = 0, j = 0; i < (n - 1); i++)
    {
        while((j < n) && lBound[j] <= hBound[i])
            j++;
        ans += (j - i - 1);
        if(ans > 10000000)
            return -1;
    }
    return ans;
}

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

