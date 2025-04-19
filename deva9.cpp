#include<iostream>
#include<vector>
#include<string>

using namespace std;

struct student{
    string name;
    int age;
    char grade;
    string gender;
};



int main(){

    int N;
    cin>>N;

    vector<student>students(N);

    // input students

    for(int i=0;i<N;i++){
        cin>>students[i].name>>students[i].age>>students[i].grade>>students[i].gender;
    }

    // task 1: print student name those have older than 20
    for(const auto& student :students){

        if(student.age >=20){
            cout<<student.name<<" ";
        }
    }
    cout<<endl;



    // task 2 : avegage ASCII value of grade for female students
    int sum=0;
    int count=0;
    
    for(const auto& student :students){

        if(student.gender =="Female"){
         sum +=static_cast<int>(student.grade);
         count++;
        }
    }

    if(count >0)
        cout<<(sum/count)<<endl;
        else
        cout<<"0"<<endl;
    
return 0;
}





