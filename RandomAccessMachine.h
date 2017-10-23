#ifndef AUDEX02_RANDOMACCESSMACHINE_H
#define AUDEX02_RANDOMACCESSMACHINE_H


class RandomAccessMachine {
public:
    void load(char* path);
    void exec();

private:
    int accumulator;
    int programCounter;
    int operations[1024][2] = {INT32_MIN};
    int data[1024] = {INT32_MIN};

    void lda(int address);
    void sta(int address);
    void inp(int address);
    void mul(int address);
    void ldk(int constant);
    void sub(int address);
    void jne(int address);
    void add(int address);
};


#endif //AUDEX02_RANDOMACCESSMACHINE_H
