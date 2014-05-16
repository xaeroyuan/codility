//
//  main.cpp
//  TapeEquilibrium
//
//  Created by xaeroyuan on 5/7/14.
//
//

#include <iostream>
#include <vector>

int solution(std::vector<int> &A)
{
    int n = (int)(A.size());
    if(n == 2)
        return abs(A[0] - A[1]);;
    int lsum = A[0];
    int rsum = 0, ans;
    for(int i = 1; i < n; i++)
        rsum += A[i];
    ans = abs(lsum - rsum);
    for(int i = 1; i < n; i++)
    {
        int localMin = abs(lsum - rsum);
        if(localMin < ans)
            ans = localMin;
        lsum += A[i];
        rsum -= A[i];
    }
    return ans;
}

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Tape Equilibrium!" << std::endl;
    std::vector<int> input;
    input.push_back(3);
    input.push_back(1);
    input.push_back(2);
    input.push_back(4);
    input.push_back(3);
    int result = solution(input);
    std::cout << "The result is " << result << std::endl;
    return 0;
}

