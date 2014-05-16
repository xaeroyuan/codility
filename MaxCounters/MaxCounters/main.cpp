//
//  main.cpp
//  MaxCounters
//
//  Created by xaeroyuan on 5/8/14.
//
//

#include <iostream>
#include<vector>
using namespace std;
vector<int> solution(int N, vector<int> &A) {
    // write your code in C++98
    int max = 0, lastmax = 0;
    vector<int> *counters = new vector<int>(N, 0);
    int n = (int)A.size();
    for(int i = 0; i < n; i++)
    {
        int X = A[i];
        if(X < (N + 1))
        {
            int temp = (*counters)[X - 1];
            if(temp < lastmax)
                (*counters)[X - 1] = lastmax + 1;
            else
                (*counters)[X - 1] = ++temp;
            if((*counters)[X - 1] > max)
                max = (*counters)[X - 1];
        }
        else
        {
            lastmax = max;
        }
    }
    for(int i = 0; i < N; i++)
    {
        if((*counters)[i] < lastmax)
            (*counters)[i] = lastmax;
    }
    return *counters;
}
const int N = 5;
int main(int argc, const char * argv[])
{
    
    // insert code here...
    cout << "Max Counters!\n";
    
    vector<int> input, result;
    input.push_back(3);
    input.push_back(4);
    input.push_back(4);
    input.push_back(6);
    input.push_back(1);
    input.push_back(4);
    input.push_back(4);
    result = solution(N, input);
    cout << "The result is {";
    for(int i = 0; i < N; i++)
    {
        cout << result[i];
        if(i < (N - 1))
            cout << ", ";
    }
    cout << "}" << endl;
    return 0;
}

