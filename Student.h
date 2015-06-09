#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student{
protected:

    Student();//ctor
    virtual ~Student();//dtor

    int id;
    string firstName;
    string lastName;
    int numCourses;

    virtual bool milga() = 0;
    virtual void print() = 0;
};

class BA: public Student{
private:
    vector<int> grades;
public:
    bool milga();
    void print();
};

class MA : public BA{
private:
    bool research;//if student participates in research
public:
    bool milga();
    void print();
};

class PHD : public Student{
private:
    int researcHours;//hours of research per week
public:
    bool milga();
    void print();
};
