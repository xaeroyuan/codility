//
//  main.cpp
//  FrogJmp
//
//  Created by xaeroyuan on 5/8/14.
//
//

#include <iostream>
using namespace std;

int solution(int X, int Y, int D)
{
    int ans = 0;
    int dis = Y - X;
    int tail = dis % D;
    if(tail == 0)
        return dis / D;
    else
        return dis / D + 1;
    return ans;
}

int main(int argc, const char * argv[])
{
    int result = 0;
    // insert code here...
    cout << "Frog Jump!\n";
    result = solution(1, 1000000000, 1000000000);
    cout << "The result is " << result << endl;
    return 0;
}

