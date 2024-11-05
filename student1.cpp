#include <iostream>
#include <string>

using namespace std;

struct studentType{
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

void read (studentType student[],int size){
    for (int i=0; i<size ; i++){
        cout << "Masukkan Nama depan , nama belakang , dan nilai dari murid ke-" << i+1;
        cin >>student[i].studentFName >> student[i].studentLName >> student[i].testScore;
    }  
};

void grade (studentType student [], int size){
    for (int i=0; i<size; i++){
        if (student[i].testScore >=85){
            student[i].grade='A';
        }else if (student[i].testScore>=75){
            student[i].grade='B';
        }else if (student[i].testScore>=65){
            student[i].grade='C';
        }else if (student[i].testScore>0){
            student[i].grade='D';
        }else if (student[i].testScore==0){
            student[i].grade='E';
        }
    }
};

void printdata(studentType student[],int size){
    for (int i=0; i<size; i++){
        cout<< student[i].studentLName << ", " <<student[i].studentFName <<"Test Score :"<< student[i].testScore << "("<< student[i].grade<< ")"<< endl;
    }
};

int nilaitertinggi(studentType student[], int size) {
    int max = 0; 
    for (int i = 1; i < size; i++) {  
        if (student[i].testScore > student[max].testScore) {
            max = i;  
        }
    }
    return max;  
}

void printtertinggi (studentType student[],int max){
   cout <<"Murid dengan nilai tertinggi :"<<student[max].studentLName << ", "<< student[max].studentFName<< endl;
};

int main (){
    int size=20;
    studentType student[size];
    read(student,size);
    grade (student,size);
    printdata(student,size);
    int max=nilaitertinggi(student, size);
    printtertinggi(student,max);
}
