#include "File.h"
#include <iostream>

// Constructor
File::File(const string& name, const string& content, Date& date)
    : name(name), content(content), date(date) {}

// Compare file dates
bool File::lessThan(File& otherFile) {
    return date.lessThan(otherFile.date);
}

// Print file metadata
void File::print() {
    cout << "File Name: " << name << "\n";
    cout << "Date Added: ";
    date.print();
    cout << endl;
}

// Print file metadata and contents
void File::printContents(){
    print();
    cout << "Content: " << content << "\n";
}
