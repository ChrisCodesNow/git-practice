#include <iostream>
#include <string>
using namespace std;


void say_hi(string name){
    string message = "Hi, " + name;
    cout << message << endl;
}

void app_name(string name){
    string title = "<h1>Welcome to " + name + "</h1>";
    cout << title << endl;
}


int main(){
    app_name("zoombie olympics!");
    return 0;
}