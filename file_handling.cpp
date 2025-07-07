#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int age;
    char sex;
    float height;
    float weight;

    void inputStudentInfo() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter student age: ";
        cin >> age;
        cout << "Enter student sex (M/F): ";
        cin >> sex;
        cout << "Enter student height (in meters): ";
        cin >> height;
        cout << "Enter student weight (in kilograms): ";
        cin >> weight;
        cin.ignore();
    }

    void displayStudentInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Sex: " << sex << endl;
        cout << "Height: " << height << " meters" << endl;
        cout << "Weight: " << weight << " kg" << endl;
    }
};

void writeToFile(const string& filename, const Student& student) {
    ofstream outfile(filename, ios::binary | ios::app);
    if (outfile) {
        outfile.write(reinterpret_cast<const char*>(&student), sizeof(Student));
        outfile.close();
    } else {
        cerr << "Error opening file for writing." << endl;
    }
}

void readFromFile(const string& filename) {
    ifstream infile(filename, ios::binary);
    if (infile) {
        Student student;
        while (infile.read(reinterpret_cast<char*>(&student), sizeof(Student))) {
            student.displayStudentInfo();
            cout << "---------------------------" << endl;
        }
        infile.close();
    } else {
        cerr << "Error opening file for reading." << endl;
    }
}

int main() {
    string filename = "filedata.dat";
    Student student;

    student.inputStudentInfo();
    writeToFile(filename, student);

    cout << "\nDisplaying student information from the file:\n";
    readFromFile(filename);

    return 0;
}
