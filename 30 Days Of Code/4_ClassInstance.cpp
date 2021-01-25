#include <iostream>

using namespace std;

class Person {
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
};

Person::Person(int initialAge) {
    // Add some more code to run some checks on initialAge
    if (initialAge < 0) {
        this->age = 0;
        cout<<"Age is not valid, setting age to 0.\n";
    }
    else {
        this->age = initialAge;
    }
}

void Person::amIOld() {
    if(age < 13) {
        cout<<"You are young.\n";
    }
    else if(age >= 13 && age < 18) {
        cout << "You are a teenager.\n";
    }
    else if(age >= 18) {
        cout << "You are old.\n";
    }
}

void Person::yearPasses() {
    // Increment the age of the person in here
    this->age += 1;
}

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}