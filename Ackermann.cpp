#include <stack>

#include "Ackermann.h"

using namespace std;

int Ackermann::ackermannRec(int n, int m) {
    if (n == 0) return m + 1;
    if (m == 0 && n > 0) return ackermannRec(n - 1, 1);

    return ackermannRec(n - 1, ackermannRec(n, m - 1));
}

int Ackermann::ackermann(int n, int m) {
    stack<int> stack;
    stack.push(m);

    while (!stack.empty()) {
        m = stack.top();
        stack.pop();

        if (m == 0 || n == 0) {
            n += m + 1;
        } else {
            stack.push(--m);
            stack.push(++m);
            n--;
        }
    }

    return n;
}
