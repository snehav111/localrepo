#include <iostream>
using namespace std;

int main(){

    int age;

    cout<<"ENTER AGE : "<<endl;
    cin>>age;

    if(age>=18){
        cout<<"CAN VOTE \n";
    }if(age>=35){
        cout<<"CAN CONTEST ELECTIONS ";
    }

    else{
        cout<<"CANNOT VOTE ";
    }

    return 0 ;
}