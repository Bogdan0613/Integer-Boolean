#include<iostream>
using namespace std;
void boolean1();
void boolean5();
void boolean12();
void boolean20();
void boolean30();
void boolean33();
int main() {
    boolean1();
    cout << endl;
    boolean5();
    cout << endl;
    boolean12();
    cout << endl;
    boolean20();
    cout << endl;
    boolean30();
    cout << endl;
    boolean33();

}
void boolean1() {
    int num;
    cout << "Enter the number:";
    cin >> num;
    if (num > 0) {

        cout << "Number>0" << "  True";
    }
    else {
        cout << "False";
    }
}
void boolean5() {
    int A;
    int B;
    cout << "enter A:";
    cin >> A;
    cout << "Enter B:";
    cin >> B;
    if (A >= 0 || B < -2) {
        cout << "A >= 0 || B < -2" << "    True";
    }
    else {
        cout << "False";
    }
}
void boolean12() {
    int A;
    int B;
    int C;
    cout << "Enter A:";
    cin >> A;
    cout << "Enter B:";
    cin >> B;
    cout << "Enter C:";
    cin >> C;
    if (A > 0 && B > 0 && C > 0) {
        cout << "A > 0 && B > 0 && C > 0" << "        True";

    }
    else {
        cout << "False";
    }
}
void boolean20() {
    int number;
    int num1;
    int num2;
    int num3;
    cout << "Enter the three-digit number:";
    cin >> number;
    num1 = number / 100;
    num2 = (number / 10) % 10;
    num3 = number % 10;
    if (num1 != num2 && num2 != num3 && num3 != num1) {
        cout << "Your number consists of all different numbers" << "        True";

    }
    else {
        cout << "False";
    }
}
void boolean30() {
    int a;
    int b;
    int c;
    cout << "Enter the sides of the triangle:";
    cin >> a;
    cin >> b;
    cin >> c;
    if (a == b && b == c && c == a) {
        cout << "The triangle has equal sides     True!";
    }
    else {
        cout << "The sides are different      False";
    }
}
void boolean33() {
    int a;
    int b;
    int c;
    cout << "Enter the sides of the triangle:";
    cin >> a;
    cin >> b;
    cin >> c;
    if (a + b > c && b + c > a && a + c > b) {
        cout << "The triangle exists" << "      True";
    }
    else {
        cout << "The triangle with such sides doesn't exist" << "       False";
    }
}