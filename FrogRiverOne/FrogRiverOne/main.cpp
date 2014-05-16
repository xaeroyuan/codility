//
//  main.cpp
//  FrogRiverOne
//
//  Created by xaeroyuan on 5/8/14.
//
//

#include <iostream>
#include <vector>
using namespace std;

int solution(int X, vector<int> &A) {
    // write your code in C++98
    int steps = X;
    bool *bits = new bool[X + 1];
    memset(bits, false, X + 1);
    int n = (int)A.size();
    for(int i = 0; i < n; i++)
    {
        if(!bits[A[i]])
        {
            bits[A[i]] = true;
            steps--;
        }
        if(steps == 0)
            return i;
    }
    
    return -1;
}

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Frog River One!\n";
    vector<int> input;
    input.push_back(1);
    input.push_back(3);
    input.push_back(1);
    input.push_back(4);
    input.push_back(2);
    input.push_back(3);
    input.push_back(5);
    input.push_back(4);
    int result = 0;
    result = solution(5, input);
    cout<< "The result is " << result << endl;
    return 0;
}

