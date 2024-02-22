#ifndef INPUT_H
#define INPUT_H
#include <string>

using namespace std;

class Input
{
private:
    Input(const Input& i); // zabezpieczenie konstrutkora (konstr. kopiujacym)
    Input& operator=(const Input& i); // zabezpieczenie operatora przypisania =

protected:
    Input(){}
    ~Input(){}

    virtual int ReadInt();
    virtual string ReadString();
};

#endif // INPUT_H
