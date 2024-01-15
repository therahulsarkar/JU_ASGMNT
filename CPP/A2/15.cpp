#include <iostream>
#include <string>

class Student {
protected:
    std::string name;
    int rollNumber;

public:
    Student(const std::string& n, int roll) : name(n), rollNumber(roll) {}

    // Pure virtual function making the class abstract
    virtual void display() const = 0;
};

class Engineering : public Student {
private:
    std::string branch;

public:
    Engineering(const std::string& n, int roll, const std::string& b) : Student(n, roll), branch(b) {}

    void display() const override {
        std::cout << "Engineering Student\n";
        std::cout << "Name: " << name << "\tRoll Number: " << rollNumber << "\tBranch: " << branch << std::endl;
    }
};

class Medicine : public Student {
private:
    std::string specialization;

public:
    Medicine(const std::string& n, int roll, const std::string& s) : Student(n, roll), specialization(s) {}

    void display() const override {
        std::cout << "Medicine Student\n";
        std::cout << "Name: " << name << "\tRoll Number: " << rollNumber << "\tSpecialization: " << specialization << std::endl;
    }
};

class Science : public Student {
private:
    std::string field;

public:
    Science(const std::string& n, int roll, const std::string& f) : Student(n, roll), field(f) {}

    void display() const override {
        std::cout << "Science Student\n";
        std::cout << "Name: " << name << "\tRoll Number: " << rollNumber << "\tField: " << field << std::endl;
    }
};

int main() {
    int numStudents;
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    // Array of pointers to the base class Student
    Student* students[numStudents];

    // Creating objects of derived classes with user input
    for (int i = 0; i < numStudents; ++i) {
        std::string name, specializationOrBranchOrField;
        int roll;

        std::cout << "\nEnter details for student " << i + 1 << ":\n";
        std::cout << "Enter name: ";
        std::cin >> name;

        std::cout << "Enter roll number: ";
        std::cin >> roll;

        if (i == 0) {
            std::cout << "Enter branch for Engineering student: ";
            std::cin >> specializationOrBranchOrField;
            students[i] = new Engineering(name, roll, specializationOrBranchOrField);
        } else if (i == 1) {
            std::cout << "Enter specialization for Medicine student: ";
            std::cin >> specializationOrBranchOrField;
            students[i] = new Medicine(name, roll, specializationOrBranchOrField);
        } else {
            std::cout << "Enter field for Science student: ";
            std::cin >> specializationOrBranchOrField;
            students[i] = new Science(name, roll, specializationOrBranchOrField);
        }
    }

    // Processing and accessing objects using the array of pointers
    for (int i = 0; i < numStudents; ++i) {
        students[i]->display();
        std::cout << std::endl;
    }

    // Cleanup: Deleting dynamically allocated objects
    for (int i = 0; i < numStudents; ++i) {
        delete students[i];
    }

    return 0;
}
