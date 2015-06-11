include "Student.h"

//MAIN
int main(){
    vector<Student*> stud;
    // abe avraham
    stud.push_back(new BA);
    stud.at(0)->setID(123);
    stud.at(0)->setFN("abe");
    stud.at(0)->setLN("avraham");
    stud.at(0)->setNC(3);
    (BA)stud.at(0)->setGrades((int arr[90,100,90]));

    return 0;
}
