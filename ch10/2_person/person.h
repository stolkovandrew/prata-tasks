#ifndef PERSON_H_
#define PERSON_H_

#include <string>
class Person {
    private:
    static const int LIMIT = 25;
    std::string lname; // Person’s last name
    char fname[LIMIT]; // Person’s first name
    public:
    Person(); // #1
    Person(const std::string & ln, const char * fn = "Heyyou"); // #2
    // the following methods display lname and fname
    void Show() const; // firstname lastname format
    void FormalShow() const; // lastname, firstname format
};
#endif
