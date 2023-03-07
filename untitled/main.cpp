#include <iostream>
using namespace std;
#include<string>

// lab1 question 1
int main() {

    string  name ;
    cout<< "What is your name ";
    cin >> name;
    cout<< "Hello " + name<<endl;
    cout<< "What is your Student id  ";
    int studentId;
    cin >>studentId;
    cout << "Your ID is"<< studentId;
    cout<<"\n";
//lab1 question 2
cout<< "Please enter variable 1:";
int var1 ;
cin>> var1;
cout<< "Please enter variable 2:";
int var2 ;
cin>> var2;
int sum = var1 + var2;
int diff = var1 - var2 ;
int prod = var2* var1;
cout<< "Sum is   "<< sum<<endl;
cout<< "Diff is  "<< diff<<endl;
cout << "Prod is "<< prod<<endl;*/
    // lab 1 question 3
    cout<< "Please enter name:";
    string studentName;
    cin>> studentName;
    cout<< "Please enter lab grade";
    int labGrade ;
    cin>> labGrade;
    cout<<"Please enter midterm grade ";
    int midtermGrade ;
    cin>>midtermGrade;
    cout<< "Please enter final grade";
    int finalGrade;
    cin>>finalGrade;
    float finalScore = midtermGrade*0.35 + finalGrade* 0.40 + labGrade* 0.25;
    cout<<"Name:"<<studentName<<endl;
    cout<<"Lab:"<<labGrade<<endl;
    cout<<"Midterm:"<<midtermGrade<<endl;
    cout<<"Last Score."<<finalScore<<endl;
//lab1 question 4
    cout<<"*\n**\n***\n**\n*"<<endl;






    return 0;

}
