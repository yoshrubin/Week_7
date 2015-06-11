include "Student.h"

//MAIN
int main(){
    vector<Student*> stud;
    //GRADES
    vector<int> g1(3), g2(10), g3(7);
    g1[0] = g1[2] = g2[2] = g2[4] = g2[6] = g2[8] = g3[0] = g3[2] = g3[4] = g3[6] = 90;
    g1[1] = g2[0] = g2[1] = g2[3] = g2[5] = g2[7] = g2[9] = g3[1] = g3[3] = g3[5] = 100;
    //BA
    // abe avraham
    stud.push_back(new BA);
    stud.at(0)->setID(123);
    stud.at(0)->setFN("abe");
    stud.at(0)->setLN("avraham");
    stud.at(0)->setNC(3);
    ((BA*)stud.at(0))->setGrades(g1);
    //yitzhak ￼￼￼avrahamson
    stud.push_back(new BA);
    stud.at(1)->setID(234);
    stud.at(1)->setFN("yitzhak");
    stud.at(1)->setLN("avrahamson");
    stud.at(1)->setNC(10);
    ((BA*)stud.at(1))->setGrades(g2);
    //MA
    //yaacov jacobson
    stud.push_back(new MA);
    stud.at(2)->setID(345);
    stud.at(2)->setFN("yaacov");
    stud.at(2)->setLN("jacobson");
    stud.at(2)->setNC(7);
    ((MA*)stud.at(2))->setGrades(g3);
    ((MA*)stud.at(2))->setRes(0);
    //sara emanu
    stud.push_back(new MA);
    stud.at(3)->setID(456);
    stud.at(3)->setFN("sara");
    stud.at(3)->setLN("emanu");
    stud.at(3)->setNC(7);
    ((MA*)stud.at(3))->setRes(1);
    //PHD
    //rivka imanu
    stud.push_back(new PHD);
    stud.at(4)->setID(567);
    stud.at(4)->setFN("rivka");
    stud.at(4)->setLN("imanu");
    stud.at(4)->setNC(1);
    ((PHD*)stud.at(4))->setResHours(30);
    //rachel jacobs
    stud.push_back(new PHD);
    stud.at(5)->setID(678);
    stud.at(5)->setFN("rachel");
    stud.at(5)->setLN("jacobs");
    stud.at(5)->setNC(2);
    ((PHD*)stud.at(5))->setResHours(20);
    //leah jacobs
    stud.push_back(new PHD);
    stud.at(6)->setID(789);
    stud.at(6)->setFN("leah");
    stud.at(6)->setLN("jacobs");
    stud.at(6)->setNC(2);
    ((PHD*)stud.at(6))->setResHours(30);
    //PRINT DESERVING MILGA
    for(int i = 0; i < stud.size(); i++ ){
        if(stud.at(i)->milga())
            stud.at(i)->print();
    }
    return 0;
}
