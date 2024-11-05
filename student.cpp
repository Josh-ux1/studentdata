#include <iostream>
#include <string>

using namespace std;

struct studentType{
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

int main (){
    studentType student[3];
    student[0].studentFName="Bella";
    student[0].studentLName="Cinthia";
    student[0].testScore=79;
    student[0].grade='B';

    student[1].studentFName="Christ";
    student[1].studentLName="Hams";
    student[1].testScore=90;
    student[1].grade='A';

    student[2].studentFName="Bob";
    student[2].studentLName="lem";
    student[2].testScore=20;
    student[2].grade='D';

    cout << student[1].studentFName<< student[1].studentLName << student[1].testScore << student[1].grade;

}