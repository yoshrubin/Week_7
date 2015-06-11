#include <iostream>
#include <string>
#include <vector>

using namespace std;
//base class
class Student{
protected:
    int id;
    string firstName;
    string lastName;
    int numCourses;
public:
    Student();//ctor
    virtual ~Student();//dtor
    virtual bool milga() = 0;
    virtual void print() {
        cout<<"student";
    }
    //gets
    //int getNC(){return numCourses;}

    //sets
    void setID(int usrID){id = usrID;}
    void setFN(string usrFN){firstName = usrFN;}
    void setLN(string usrLN){lastName = usrLN;}
    void setNC(int usrNC){numCourses = usrNC;}
};

//BA CLASS
class BA: public Student{
protected:
    vector<int> grades;
public:
    BA();
    ~BA();
    bool milga();
    void print();
    void setGrades(int[]);
};


//MA child of BA
class MA : public BA{
private:
    bool research;//if student participates in research
public:
    MA();
    ~MA();
    bool milga();
    void print();
    //void setRes(bool usrRes){research = usrRes;}
};

//PHD class
class PHD : public Student{
private:
    int researcHours;//hours of research per week
public:
    PHD();
    ~PHD();
    bool milga();
    void print();
    void setResHours(int);
    int getResHours();
};
