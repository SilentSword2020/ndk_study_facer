#ifndef MY_APPLICATION_FACER_H
#define MY_APPLICATION_FACER_H

#include <iostream>
#include <string>

using namespace std;

class Facer {
public:
    Facer(const string &top = "#", const string &bottom = "#", const string &brow = "~",
          const string &eyes = ".");

    ~Facer();

public:
    string top;
    string bottom;
    string brow;
    string eyes;
public:
    void printFace();

    string getFace();
};

#endif //MY_APPLICATION_FACER_H
