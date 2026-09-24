//
// Created by Akil Shaik on 9/17/26.
//

#include "data.h"

#include <iostream>
#include <ostream>

class Data {
public:
    int numID;
    string name;

    Data(int numID, string name) {
    this->numID = numID;
    this->name = name;
}
    void print() {
        cout<<numID<<" "<<endl;
    }

};
