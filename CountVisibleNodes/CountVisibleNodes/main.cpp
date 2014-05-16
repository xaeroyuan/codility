//
//  main.cpp
//  CountVisibleNodes
//
//  Created by xaeroyuan on 5/9/14.
//
//

#include <iostream>

#include <queue>
#include <algorithm>
using namespace std;
typedef struct tree
{
    int x;
    tree* l;
    tree* r;
}tree;



int solution(tree* T) {
    // write your code in C++98
    int count = 0;
    queue<tree*> points;
    queue<int> maxs;
    tree* pointer = NULL;
    int max;
    points.push(T);
    maxs.push(T->x);
    while(!points.empty())
    {
        pointer = points.front();
        points.pop();
        max = maxs.front();
        maxs.pop();
        if(pointer->l != NULL)
            points.push(pointer->l);
        if(pointer->r != NULL)
            points.push(pointer->r);
        if(pointer->x >= max)
            count++;
        maxs.push(pointer->x > max ? pointer->x : max);
    }
    return count;
}


int main(int argc, const char * argv[])
{
    
    // insert code here...
    std::cout << "Count visible node!\n";
    tree T;
    T.x = 5;
    
    T.l = new tree();
    T.l->x = 3;
    T.l->l = new tree();
    T.l->r = new tree();
    T.l->l->x = 20;
    T.l->r->x = 21;
    
    T.r = new tree();
    T.r->x = 10;
    T.r->l = new tree();
    T.r->r = NULL;
    T.r->x = 10;
    T.r->l = new tree();
    T.r->l->x = 1;
    
    
    int result = 0;
    result = solution(&T);
    
    cout<< "the result is "<< result << endl;
    
    return 0;
}


