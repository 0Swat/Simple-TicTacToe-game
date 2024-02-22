#include <iostream>
#include "input.h"

using namespace std;

int Input::ReadInt()
{
    int input;
    cin >> input;
    return input;
}

string Input::ReadString()
{
    string string_out;
    cin >> string_out;
    return string_out;
}
