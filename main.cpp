#include <iostream>
#include "RandomAccessMachine.h"
#include "Ackermann.h"

using namespace std;

int main() {
    RandomAccessMachine randomAccessMachine;
    randomAccessMachine.load(const_cast<char *>("quadraticAssembly"));
    randomAccessMachine.exec();

    Ackermann ackermann;
    cout << ackermann.ackermannRec(3, 3) << endl;
    cout << ackermann.ackermann(3, 3) << endl;

    return 0;
}