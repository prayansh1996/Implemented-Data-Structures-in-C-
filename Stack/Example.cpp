#define from(x,y,i) for(int i=x; i<y; i++)
#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    stack<int> S;
    from(0,6,i) {
        S.push(i);
    }
    from(0,6,i) {
        cout<<S.gettop()<<"->";
        S.pop();
    } cout<<"NULL\n\n";
    S.gettop();
    return 0;
}
