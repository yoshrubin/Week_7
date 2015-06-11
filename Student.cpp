#include "Student.h"

//BASE CTOR
Student::Student(){
    id = 0;
    firstName = "";
    lastName = "";
    numCourses = 0;
}
//BASE DTOR
Student::~Student(){}


//BA CTOR
BA::BA(){
    id = 0;
    firstName = "";
    lastName = "";
    numCourses = 0;
    for (int i = 0; i < grades.size(); i++)
        grades.at(i) = 0;
}
//BA DTOR
BA::~BA(){
    grades.clear();
}
//BA deserving scholarship?
bool BA::milga(){
        int gradeSum;
        for (int i = 0; i < grades.size(); i++){
            gradeSum += grades.at(i);
        }
        if (((gradeSum/numCourses)>= 95) && (numCourses >= 10))
            return true;
        return false;
}
//BA setGrades
void BA::setGrades(vector<int> grade){
    for (int i = 0; i < numCourses; i++){
        grades.push_back(grade[i]);
    }
}
//BA print (uses grades and no research)
void BA::print(){
        cout << "ID: " << id << endl
        << "first name : " << firstName << endl
        << "last name: " << lastName << endl
        << "num courses: " << numCourses << endl
        << "grades: ";
    for(int i = 0; i < grades.size(); i++ ){
        cout << grades.at(i)<< " " ;

    }
    cout << endl;
}

//MA CTOR
MA::MA(){}
//MA DTOR
MA::~MA(){}
//MA desserving scholarship?
bool MA::milga(){
    int gradeSum;
    for (int i = 0; i < grades.size(); i++){
        gradeSum += grades.at(i);
    }
    if (((gradeSum/numCourses)>= 90) && (numCourses >= 7) && (research))
        return true;
    return false;
}
void MA::setRes(int a){
    research = a;
}
//MA print (research yes or no and grades)
void MA::print(){
    cout << "ID: " << id << endl
    << "first name : " << firstName << endl
    << "last name: " << lastName << endl
    << "num courses: " << numCourses << endl
    << "grades: ";
    for(int i = 0; i < grades.size(); i++ ){
        cout << grades.at(i)<< " " ;

    }
    cout << endl;
    if (research)
        cout << "research: yes\n";
    else
        cout << "research: no\n";
}

//PHD CTOR
PHD::PHD(){
    researcHours = 0;
}
//PHD DTOR
PHD::~PHD(){}

void PHD::setResHours(int usrResHour){
    researcHours = usrResHour;
}
//PHD deserving of scholarship?
bool PHD::milga(){
    if ((numCourses >= 2) && (researcHours >= 25))
        return true;
    return false;
}
//PHD print (research hours)
void PHD::print(){
    cout << "ID: "<< id << endl
    << "first name : " << firstName << endl
    << "last name: " << lastName << endl
    << "num courses: " << numCourses << endl
    << "hours: " << researcHours << endl;
}
