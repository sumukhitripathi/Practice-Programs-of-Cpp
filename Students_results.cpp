#include <iostream>
using namespace std;

class Student {
    protected:
    int roll_no;
    string name;

    public:
    void setStudentDetails(int r, string n) {
        roll_no = r;
        name = n;
    }
    void displayinfo() {
        cout << "Student Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};

class Exam : public Student {
    protected:
    float marks[6];  

    public:
    void inputMarks() {
        cout << "\nEnter marks for " << name << ":\n";
        for (int i = 0; i < 6; i++) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks() {
        cout << "Marks for " << name << ":\n";
        for (int i = 0; i < 6; i++) {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }
    }
};

class Result : public Exam {
    private:
    float total_marks;

    public:
    void calculateTotal() {
        total_marks = 0;
        for (int i = 0; i < 6; i++) {
            total_marks += marks[i];
        }
    }

    void displayResult() {
        displayinfo();
        displayMarks();
        calculateTotal();
        cout << "Total Marks: " << total_marks << endl;
    }
};

int main() {
    Result student_result;
    int roll_no;
    string name;
    cout << "Enter student roll number: ";
    cin >> roll_no;
    cout << "Enter student name: ";
    cin>>name;
    student_result.setStudentDetails(roll_no, name);
    student_result.inputMarks();
    student_result.displayResult();
    return 0;
}