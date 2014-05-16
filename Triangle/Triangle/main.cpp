//
//  main.cpp
//  Triangle
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
    int n = (int)A.size();
    if(n < 3)
        return 0;
    vector<int> temp = A;
    sort(temp.begin(), temp.end());
    for(int i = 0; i < (n - 2); i++)
    {
        if((temp[i] >= 0) && (temp[i] > (temp[i + 2] - temp[i + 1])))
            return 1;
    }
    return 0;
}

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Triangle!\n";
    vector<int> input;
    input.push_back(10);
    input.push_back(2);
    input.push_back(5);
    input.push_back(1);
    input.push_back(8);
    input.push_back(20);
    int result = 0;
    result = solution(input);
    cout << "The result is " << result << endl;
    return 0;
}

