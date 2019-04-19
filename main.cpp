#include <iostream>
#include <string>
using namespace std;


void say_hi(string name){
    string message = "Hi, " + name;
    cout << message << endl;
}


int main(){
    say_hi("Joe");
    return 0;
}