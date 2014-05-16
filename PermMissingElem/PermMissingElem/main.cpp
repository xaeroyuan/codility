//
//  main.cpp
//  PermMissingElem
//
//  Created by xaeroyuan on 5/8/14.
//
//

#include <iostream>
#include <vector>
using namespace std;
const int N = 100000;
const int missingNumber = 1;

int solution1(vector<int> &A)
{
    int ans = 0;
    int n = (int)A.size();

    int sum = 0;
    int gauss = 0;
    int offset = (N + 2) >> 1;
    gauss = (N & 1) * offset;
    for(int i = 0; i < n; i++)
        sum += (A[i] - offset);
    ans = gauss - sum + offset;
    
    return ans;
}

int solution2(vector<int> &A)
{
    int ans = 0;
    int n = (int)A.size();

    for(int i = 0; i < n; i++)
    {
        ans ^= ((i + 1) ^ A[i]);
    }
    ans ^= (n + 1);
    return ans;
}


int main(int argc, const char * argv[])
{
    int result = 0;
    vector<int> input;
    // insert code here...
    cout << "Perm Missing Element!\n";
    for(int i = 0, n = 1; i < N; i++, n++)
    {
        if(n == missingNumber)
            n += 1;
        input.push_back(n);
    }
    result = solution1(input);
    cout << "The result of solution1 is " << result << endl;
    result = solution2(input);
    cout << "The result of solution2 is " << result << endl;
    return 0;
}

