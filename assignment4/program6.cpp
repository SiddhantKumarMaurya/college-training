#include <iostream>
#include <string>
using namespace std;

class PERSON {
protected:
    string name;
    string college_name;
public:
    void setPersonDetails(string n, string cn) {
        name = n;
        college_name = cn;
    }
    void showPersonDetails() {
        cout << "Name: " << name << "\nCollege Name: " << college_name << endl;
    }
};

class STUDENT : public PERSON {
private:
    int student_id;
    float marks[5];
    float percentage;
    string result;
public:
    void setStudentDetails(int id, float m[]) {
        student_id = id;
        float total = 0;
        for(int i = 0; i < 5; i++) {
            marks[i] = m[i];
            total += marks[i];
        }
        percentage = total / 5;
        if(percentage >= 75) result = "Dist";
        else if(percentage >= 60) result = "First";
        else if(percentage >= 50) result = "Second";
        else result = "Pass";
    }
    void showResult() {
        cout << "Student ID: " << student_id << "\nPercentage: " << percentage << "\nResult: " << result << endl;
    }
};

class EMPLOYEE : public PERSON {
private:
    int emp_id;
    string qualification;
    float basic_salary;
public:
    void setEmployeeDetails(int id, string q, float bs) {
        emp_id = id;
        qualification = q;
        basic_salary = bs;
    }
    void calculateNetSalary() {
        float da = 0.189 * basic_salary;
        float hra = 0.10 * basic_salary;
        float ta = 500;
        float income_tax = (basic_salary > 50000) ? 0.05 * basic_salary : 0;
        float net_salary = basic_salary + da + hra + ta - income_tax;
        cout << "Employee ID: " << emp_id << "\nQualification: " << qualification << "\nNet Salary: " << net_salary << endl;
    }
};

int main() {
    STUDENT s;
    float marks[5] = {85, 90, 78, 92, 88};
    s.setPersonDetails("John", "XYZ College");
    s.setStudentDetails(1, marks);
    s.showPersonDetails();
    s.showResult();

    EMPLOYEE e;
    e.setPersonDetails("Doe", "ABC College");
    e.setEmployeeDetails(1001, "MBA", 55000);
    e.showPersonDetails();
    e.calculateNetSalary();

    return 0;
}
