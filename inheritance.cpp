#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Bird{
public:
    int weight,age;
    int nol;
    string color;


    void eat(){
        cout<<"Bird is eating"<<endl;
    }
    void fly(){
        cout<<"Bird is flying"<<endl;
    }
};


class sparrow:public Bird{

    public:
    sparrow(int age,int weight,string color,int nol){
        this-> weight= weight;
        this->age=age;
        this->color=color;
        this->nol=nol;

    };

void grassing(){
    cout<<"sparrow is grassing"<<endl;
}
};
class pigeon:public Bird{

void guttering(){
    cout<<"pigeon is guttering"<<endl;
}
};

int main(){
sparrow s(1,1,"green",4);
cout<<s.color<<endl;
s.eat();
s.grassing();

    return  0;
}