/*
3) WAP with a mother class animal. Inside it define a name and an age variables,
 and set_value() function. Then create two bases variables Zebra and Dolphin which 
 write a message telling the age, the name and giving some extra information (e.g. place of origin).


output:-
I am a zebra named paanoo        .
I am 020 years old.
I come from uk.
I am a dolphin named joll.
I am 010 years old.
I come from the canada.

*/
#include <iostream>
#include<string.h>
using namespace std;

class Animal {
public:
    char name[100];
    int age;

public:
    void set_value(char name[100],int age) {
        name = name;
        age = age;
    }
};

class Zebra : public Animal {
public:
    void write_message() {
        cout << "I am a zebra named paanoo" << name << "." << endl;
        cout << "I am " << age << "20 years old." << endl;
        cout << "I come from uk." << endl;
    }
};

class Dolphin : public Animal {
public:
    void write_message() {
        cout << "I am a dolphin named jolly" << name << "." << endl;
        cout << "I am " << age << "10 years old." << endl;
        cout << "I come from the canada." << endl;
    }
};

int main() {
    Zebra z;
    Dolphin d;

    z.set_value("leeappers",5);
    d.set_value("rounder", 10);

    z.write_message();
    d.write_message();

    return 0;
}
