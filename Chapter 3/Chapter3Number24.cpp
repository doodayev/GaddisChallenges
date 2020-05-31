/*Nobody lives happily ever after with a pet.
Pets die you absolute moron. Nobody's cat or dog lives to the age of 80.
Very few birds and reptiles live as long as humans.
A thousand curses upon the retard who wrote that question.
If you have a professor who doesn't let you change the subject matter like I did,
break his computer, punch him in the face, and drop the class
*/ 

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	int age;
	string city;
	string college;
	string profession;
	string spouse;
	string spouseProfession;
	int choice;
	
	cout << " Are you a man or woman? \n";
	cout << " 1) Man \n";
	cout << " 2) Woman \n";
	cin >> choice;
	
	if(choice==1)
	{
		cout << "Enter your name mister. ";
		getline(cin, name);
		cout << "Enter the name of a city. ";
		getline(cin, city);
		cout << "How old are you? ";
		cin >> age;
		cout << "Enter the name of a college. ";
		getline(cin, college);
		cout << "Enter the name of a profession. ";
		getline(cin, profession);
		cout << "Enter the name of a girl. ";
		getline(cin, spouse);
		cout << "Enter the name of another profession. ";
		getline(cin, spouseProfession);
		cout << "\n\n\nThere once was a person named " << name << " who lived in " << city << ".\n";
		cout << "At the age of " << age << " " << name << " went to college at " << college << ".\n";
		cout << name << " graduated and went to work as a " << profession << ".\n";
		cout << "Then, " << name << " found a nice young girl named " << spouse << " who worked as a " << spouseProfession << ".\n";
		cout << "They got to know each other, spent some time together, and then less than a year later, \nthey married each other and lived faithfully and happily ever after!" << endl;
	}
	if(choice==2)
	{
		cout << "Enter your name miss. ";
		getline(cin, name);
		cout << "Enter the name of a city. ";
		getline(cin, city);
		cout << "How old are you? ";
		cin >> age;
		cout << "Enter the name of a college. ";
		getline(cin, college);
		cout << "Enter the name of a profession. ";
		getline(cin, profession);
		cout << "Enter the name of a man. ";
		getline(cin, spouse);
		cout << "Enter the name of another profession. ";
		getline(cin, spouseProfession);
		cout << "\n\n\nThere once was a person named " << name << " who lived in " << city << ".\n";
		cout << "At the age of " << age << " " << name << " went to college at " << college << ".\n";
		cout << name << " graduated and went to work as a " << profession << ".\n";
		cout << "Then, " << name << " found a nice young man named " << spouse << " who worked as a " << spouseProfession << ".\n";
		cout << "They got to know each other, spent some time together, and then less than a year later, \nthey married each other and lived faithfully and happily ever after!" << endl;
	}
	return 0;
}
