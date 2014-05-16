//
//  main.cpp
//  Distinct
//
//  Created by xaeroyuan on 5/8/14.
//
//

#include <iostream>
#include <vector>
using namespace std;

int solution(const vector<int> &A) {
    // write your code in C++98
    int ans = 0;
    int n = (int)A.size();
    bool *bits = new bool[2 * 1000000 + 1];
    memset(bits, false, n + 1);
    for(int i = 0; i < n; i++)
    {
        int temp = A[i];
        if(temp >= 0)
        {
            if(!bits[temp])
            {
                bits[temp] = true;
                ans++;
            }
        }
        else
        {
            
            if(!bits[1000000 + abs(temp)])
            {
                bits[1000000 + abs(temp)] = true;
                ans++;
            }
        }
    }
    return ans;
}

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Distinct!\n";
    vector<int> input;
    input.push_back(-1000000);
    input.push_back(1);
    input.push_back(-999999);
    input.push_back(2);
    input.push_back(3);
    input.push_back(1);
    int result = 0;
    result = solution(input);
    cout << "The result is " << result << endl;
    return 0;
}

