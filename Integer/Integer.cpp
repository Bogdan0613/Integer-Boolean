#include<iostream>
using namespace std;
void integer1();
void integer7();
void integer15();
void integer30();
void integer12();
void integer22();
int main() {
	integer1();
	cout << endl;
	integer7();
	cout << endl;
	integer12();
	cout << endl;
	integer15();
	cout << endl;
	integer22();
	cout << endl;
	integer30();

}
void integer1() {
	int L;
	cout << "Enter L- the number of cantimeters:";
	cin >> L;
	cout << "The number of full meters in L cantimeters is  " << L / 100;
}
void integer7() {
	int number;
	int num1;
	int num2;
	cout << "Enter the two-digit number:";
	cin >> number;
	cout << "Your number is:" << number<<endl;
	num1 = number / 10;
	num2 = number % 10;
	cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
	cout << num1 << "*" << num2 << "=" << num1 * num2;
}
void integer15() {
	int number;
	int num1;
	int num2;
	int num3;
	cout << "Enter the three-digit number:";
	cin >> number;
	cout << "Your number is " << number << endl;
	num1 = number / 100;
	num2 = (number / 10) % 10;
	num3 = number % 10;
	cout << "Your new number is " << num2 << num1 << num3;
}
void integer12() {
	int number;
	int num1;
	int num2;
	int num3;
	cout << "Enter the three-digit number:";
	cin >> number;
	num3 = number % 10;
	num2 = (number / 10) % 10;
	num1 = number / 100;
	cout << "Your number is " << number<<endl;
	cout << "Your new number is " << num3 << num2 << num1;
}

void integer30() {
	int year;
	cout << "Enter the year of the new era:";
	cin >> year;
	cout << "The century of this year is:" << year / 100 + ((year % 100) / (year % 100));
	//при першому діленні дізнаємось перші два числа від року. Ділення остач допомагає дізнатись чи додавати до попереднього числа 1 щоб отримати століття
}
void integer22() {
	int sec;
	cout << "Enter the nuber of seconds:";
	cin >> sec;
	cout << "seconds passed after the beginning of the last hour:" << sec % 3600;
}
