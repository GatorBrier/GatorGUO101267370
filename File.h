#ifndef FILE_H
#define FILE_H

#include <string>
#include "Date.h"

using namespace std;

class File {
private:
    string name;
    string content;
    Date date;

public:
    // Constructor
    File(const string& name, const string& content, Date& date);

    
    bool lessThan(File& otherFile);

    
    void print();

    
    void printContents();

    
    string getName() const { return name; }
};

#endif
