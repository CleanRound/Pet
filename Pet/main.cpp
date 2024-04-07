#include <iostream>
#include <string>
using namespace std;

class Pet {
protected:
    string name;
public:
    Pet(const string& name) : name(name) {}

    virtual void printDetails() const {
        cout << "Name: " << name << endl;
    }
};

class Dog : public Pet {
private:
    string breed;
public:
    Dog(const string& name, const string& breed) : Pet(name), breed(breed) {}

    void printDetails() const override {
        Pet::printDetails();
        cout << "Breed: " << breed << endl;
    }
};

class Cat : public Pet {
private:
    string color;
public:
    Cat(const string& name, const string& color) : Pet(name), color(color) {}

    void printDetails() const override {
        Pet::printDetails();
        cout << "Color: " << color << endl;
    }
};

class Parrot : public Pet {
private:
    string species;
public:
    Parrot(const string& name, const string& species) : Pet(name), species(species) {}

    void printDetails() const override {
        Pet::printDetails();
        cout << "Species: " << species << endl;
    }
};

int main() {
    Dog myDog("Buddy", "Labrador");
    Cat myCat("Whiskers", "Tabby");
    Parrot myParrot("Polly", "African Grey");

    cout << "Details of my dog:" << endl;
    myDog.printDetails();
    cout << endl;

    cout << "Details of my cat:" << endl;
    myCat.printDetails();
    cout << endl;

    cout << "Details of my parrot:" << endl;
    myParrot.printDetails();
    cout << endl;

    return 0;
}
