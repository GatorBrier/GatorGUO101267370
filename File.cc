#include "File.h"
#include <iostream>


File::File(const string& name, const string& content, Date& date)
    : name(name), content(content), date(date) {}


bool File::lessThan(File& otherFile) {
    return date.lessThan(otherFile.date);
}


void File::print() {
    cout << "File Name: " << name << "\n";
    cout << "Date Added: ";
    date.print();
    cout << endl;
}


void File::printContents(){
    print();
    cout << "Content: " << content << "\n";
}
