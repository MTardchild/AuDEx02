#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

#include "RandomAccessMachine.h"

void RandomAccessMachine::load(char *path) {
    int i = 0;
    int address;
    short operation;
    string line;
    ifstream program;
    program.open(path);

    while (program >> operation >> address) {
        operations[i][0] = operation;
        operations[i][1] = address;
        ++i;
    }
}

void RandomAccessMachine::exec() {
    bool isRunning = true;

    while(isRunning) {
        switch (operations[programCounter][0]) {
            case 1:
                add(operations[programCounter][1]);
                break;
            case 2:
                sub(operations[programCounter][1]);
                break;
            case 3:
                mul(operations[programCounter][1]);
                break;
            case 5:
                lda(operations[programCounter][1]);
                break;
            case 6:
                ldk(operations[programCounter][1]);
                break;
            case 7:
                sta(operations[programCounter][1]);
                break;
            case 8:
                inp(operations[programCounter][1]);
                break;
            case 13:
                jne(operations[programCounter][1]);
                break;
            default:
                isRunning = false;
                break;
        }

        ++programCounter;
    }
}

void RandomAccessMachine::jne(int address) {
    if (accumulator != 0) {
        programCounter = address;
    }
}

void RandomAccessMachine::sub(int address) {
    accumulator -= data[address];
}

void RandomAccessMachine::ldk(int constant) {
    accumulator = constant;
}

void RandomAccessMachine::mul(int address) {
    accumulator *= data[address];
}

void RandomAccessMachine::inp(int address) {
    cin >> data[address];
}

void RandomAccessMachine::sta(int address) {
    data[address] = accumulator;
}

void RandomAccessMachine::lda(int address) {
    accumulator = data[address];
}

void RandomAccessMachine::add(int address) {
    accumulator += data[address];
}


