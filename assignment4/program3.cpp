#include <iostream>
using namespace std;

class Teacher {
protected:
    string name, department, college_name, email_id, qualification, expertise;
    double salary;
public:
    Teacher(string n, string d, string c, string e, string q, string ex, double s)
        : name(n), department(d), college_name(c), email_id(e), qualification(q), expertise(ex), salary(s) {}
    virtual void display_details() {
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "College name: " << college_name << endl;
        cout << "Email id: " << email_id << endl;
        cout << "Qualification: " << qualification << endl;
        cout << "Expertise: " << expertise << endl;
        cout << "Salary: " << salary << endl;
    }
};

class MathTeacher : public Teacher {
public:
    MathTeacher(string n, string d, string c, string e, string q, string ex, double s)
        : Teacher(n, d, c, e, q, ex, s) {}
};

class EnglishTeacher : public Teacher {
public:
    EnglishTeacher(string n, string d, string c, string e, string q, string ex, double s)
        : Teacher(n, d, c, e, q, ex, s) {}
};

class ScienceTeacher : public Teacher {
public:
    ScienceTeacher(string n, string d, string c, string e, string q, string ex, double s)
        : Teacher(n, d, c, e, q, ex, s) {}
};

int main() {
    MathTeacher math_teacher("Alice", "Mathematics", "ABC College", "alice@abc.edu", "PhD", "Algebra", 50000);
    EnglishTeacher english_teacher("Bob", "English", "XYZ College", "bob@xyz.edu", "MA", "Literature", 45000);
    ScienceTeacher science_teacher("Charlie", "Science", "LMN College", "charlie@lmn.edu", "MSc", "Physics", 47000);

    math_teacher.display_details();
    cout << endl;
    english_teacher.display_details();
    cout << endl;
    science_teacher.display_details();
    return 0;
}
