#include<iostream>
using namespace std;

class student{
    private:
    string gf;



    public:
    int id;
    int age;
    string name;
    int nos;

//ctor:: Default ctor::assign garbage value
student(){
    cout<<"student ctor called"<<endl;
}

// parametrised ctor
student(int _id,int _age,string _name,int _nos){
       cout<<"student ctor called"<<endl;
       id=_id;
       age=_age;
       name=_name;
       nos=_nos;
}

// copy ctor
student(const student & srcobj){

        cout<<"student copy ctor called"<<endl;
    this->name=srcobj.name;
    this->id=srcobj.id;
    this->age=srcobj.age;
    this->nos=srcobj.nos;
}



    void study(){
   cout<<"studying"<<endl;
    }
    void gaming(){
   cout<<"gaming"<<endl;
    }
    void sleeping(){
        cout<<"sleeping"<<endl;
    }
    private:
    void chatting(){
        cout<<"chatting with gf"<<endl;
    }

};
int main(){

//     cout<<sizeof(student)<<endl;

//     student s1;
//     s1.name="devendra";
//     s1.age=17;
//     s1.id=11;
//     s1.nos=9;

// student s2(1,12,"kunal",5);

// cout<<s2.age<<endl;
// cout<<s2.name<<endl;

    // student s2;

    //  s2.name="kunal";
    // s2.age=11;
    // s2.id=31;
    // s2.nos=2;


// copy ctor...*********
     student s1(1,12,"kunal",5);
    student s2=s1;
    
    cout<<s1.name<<endl;
    cout<<s2.name<<endl;

return 0;

}