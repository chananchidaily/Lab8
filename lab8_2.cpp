#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    string movie;
    string free_time;
    string korkwam ;
    int id;
    int x;
    
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> id;
    cin.ignore();
    x = id/10000000;
    x -= 12;
    cout << "Fahsai: I think you may be GEAR " << x << ". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << name << ": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin,free_time);
    cout << "Fahsai: " << free_time << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";
    cout << name << ": ";
    getline(cin,korkwam);
    cout << "Fahsai: 555+ see you " << free_time << ". Bye Bye \\(^ ^)/";
    return 0;

} 