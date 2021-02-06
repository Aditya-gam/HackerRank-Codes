#include<bits/stdc++.h>

using namespace std;

class Person {
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student : public Person {
	private:
		vector<int> testScores;  
	public:
        string firstName,lastName;
        int id;
        Student(string frnme, string lsnme, int i, vector<int> scor) : Person(frnme, lsnme, i) {
            this->firstName = frnme;
            this->lastName = lsnme;
            this->id = i;
            this->testScores = scor;
        }
        char calculate() {
            int avg = 0;
            for(int i = 0; i < testScores.size(); i++) {
                avg += testScores[i];
            }
            avg = avg / testScores.size();
            return(avg > 89 ? 'O' : avg > 79 ? 'E' : avg > 69 ? 'A' : avg > 54 ? 'P' : avg > 39 ? 'D' : 'T');
        }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}