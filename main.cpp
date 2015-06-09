#include "Student.h"

int main(){
BA stud;
cout << "enter id, first/last names, num courses, grades\n";
cin >> stud.id >> stud.firstName >> stud.lastName >> stud.numCourses >> stud.grades;
stud.print();
return 0;
}
