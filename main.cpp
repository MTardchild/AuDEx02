#include <iostream>
#include "RandomAccessMachine.h"

int main() {
    RandomAccessMachine randomAccessMachine;
    randomAccessMachine.load(const_cast<char *>("quadraticAssembly"));
    randomAccessMachine.exec();

    return 0;
}