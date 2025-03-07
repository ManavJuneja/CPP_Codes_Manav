#include <iostream>
using namespace std;

class Youtuber {
protected:
    int income;  // Youtuber's income
public:
    Youtuber(int yIncome) { income = yIncome; }
    int getYoutuberIncome() { return income; }
};

class Teacher {
protected:
    int income;  // Teacher's income
public:
    Teacher(int tIncome) { income = tIncome; }
    int getTeacherIncome() { return income; }
};

class Person : public Youtuber, public Teacher {
public:
    int totalIncome;

    // Constructor takes two income values: One for Youtuber, One for Teacher
    Person(int yIncome, int tIncome) : Youtuber(yIncome), Teacher(tIncome) {
        totalIncome = yIncome + tIncome;  // Calculate total income
    }

    void showIncome() {
        cout << "Youtuber Income: " << getYoutuberIncome() << endl;
        cout << "Teacher Income: " << getTeacherIncome() << endl;
        cout << "Total Income: " << totalIncome << endl;
    }
};

int main() {
    int yIncome, tIncome;
    cout << "Enter Youtuber Income: ";
    cin >> yIncome;
    cout << "Enter Teacher Income: ";
    cin >> tIncome;

    Person p(yIncome, tIncome);
    p.showIncome();

    return 0;
}
