/*

2. WAP with a mother class and an inherited daugther class.Both of them should have a method void display ()that prints a message 
(different for mother and daugther). In the main define a daughter and call the display() method on it.


output :-

I am the mother class!
I am the daughter class!

*/#include <iostream>
using namespace std;

class mother{
public:
    void getdi() {
        cout << "I am the mother home !" << endl;
    }
};

class daughter : public mother {
public:
    void getdi1() {
        cout << "I am the daughter bike!" << endl;
    }
};

int main() {
    daughter d1;
    d1.getdi();
    d1.getdi1();
    return 0;
}
