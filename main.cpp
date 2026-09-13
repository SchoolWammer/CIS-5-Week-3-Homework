#include <iostream>
#include <string>

// Homework 3 — Joshua Van Brunt
// CIS 5 Week 03 · Types & variables

int main() {
	const int CURRENT_YEAR = 2026;

	std::string name = "0";
	std::cout << "name: ";
	std::cin >> name;

	double age = 0;
	std::cout << "age: ";
	std::cin >> age;
	//originally int, changed to double because age can be increased

	double height_m = 0;
	std::cout << "height_m: ";
	std::cin >> height_m;


	char initial = 0;
	std::cout << "initial: ";
	std::cin >> initial;

	bool student = true;

	int credits = 0;
	std::cout << "credits: ";
	std::cin >> credits;

	double gpa = 0.0;
	std::cout << "gpa: ";
	std::cin >> gpa;

	// credits = int because they are a smaller number
	//gpa = double because it is a bigger number

	std::cout << "=== About me ===\n";
	std::cout << "name: " << name << "\n";
	std::cout << "age: " << age << "\n";
	std::cout << "height_m: " << height_m << "\n";
	std::cout << "initial: " << initial << "\n";
	std::cout << "student: " << student << "\n";
	

	std::cout << "credits: " << credits << "\n";
	std::cout << "gpa: " << gpa << "\n";
	std::cout << "current year: " << CURRENT_YEAR << "\n";
	std::cout << "===Summary===" << "\n";
	std::cout << "My name is " << name << " and I am " << age << " years old. I am " << height_m << " meters tall, and my initial is " << initial << ". I am a student: " << student << ". I have completed " << credits << " credits and my GPA is " << gpa << ".\n";

	// TODO: change one value from a first choice. Comment the old value,
	// the new value, and why the console followed.

	// int age = "twenty";   // would not compile — is not a number
	// CURRENT_YEAR = 2028;    // would not compile — no constant and/or prompt

	return 0;
}