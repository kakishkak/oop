#include <iostream>
#include <string>

using namespace std;

class Human {
protected:
    string name;
    string surname;
    string patronymic;
    int age;

public:
    Human() {
        name = "Chelovek";
        surname = "Chelovekov";
        patronymic = "Chelovekovich";
        cout << "Human worked: " << endl;
    }

    void IsHumanEat() {
        cout << name << " can eat" << endl;
    }

    void IsHumanSleep() {
        cout << name << " can sleep" << endl;
    }

    void IsHumanWalk() {
        cout << name << " can walk" << endl;
    }
};


class Student : protected Human {
private:
    string groupName;
public:

    Student() {
        groupName = "P69";
    }

    Student(string name, string surname, string patronymic, int age, string groupNames) {
        this->name = name;
        this->surname = surname;
        this->patronymic = patronymic;
        this->groupName = groupName;
        this->age = age;
    }

    void IsAttendingLessons() {
        cout << name << " attends lessons" << endl;
    }
    void PrintStudentInfo() {
        cout << "Student worked" << endl;
        cout << "Group name: " << groupName << endl;
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
        cout << "Patronimic: " << patronymic << endl;
        cout << "Age: " << age << endl;

        IsAttendingLessons();
        IsHumanEat();
        IsHumanSleep();
        IsHumanWalk();
    }
};


class Worker : protected Human {
private:
    string workPalce;

public:

    Worker() {
        workPalce = "Home";
    }

    Worker(const char* name, const char* surname, const char* patronymic, int age, const char* workPalce) {
        this->name = name;
        this->surname = surname;
        this->patronymic = patronymic;
        this->workPalce = workPalce;
        this->age = age;
    }

    void IsAttendingWork() {
        cout << name << " attends work" << endl;
    }
    void PrintWorkerInfo() {
        cout << "Student worked" << endl;
        cout << "Group name: " << workPalce << endl;
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
        cout << "Patronimic: " << patronymic << endl;
        cout << "Age: " << age << endl;

        IsAttendingWork();
        IsHumanEat();
        IsHumanSleep();
        IsHumanWalk();
    }
};

int main() {
    Student studentObj = Student("Yakov", "Yak", "Yarim", 5, "loliki");
    studentObj.PrintStudentInfo();
    cout << endl;
    Worker workerObj = Worker("Lizova", "Liza", "Lizun", 13, "INDIA");
    workerObj.PrintWorkerInfo();
}