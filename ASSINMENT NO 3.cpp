//QUESTION NO 1
#include<iostream>
using namespace std;

class student {
public:
    char name[30];
    int roll_no;
    int batch_no;

    // Default constructor
    student() {
        for (int i = 0; i < 30; i++) {
            name[i] = '\0';
        }
        roll_no = 0;
        batch_no = 0;
    }

    // Parameterized constructor
    student(const char n[30], int r, int b) {
        int temp = 0;
        while (n[temp] != '\0' && temp < 29) {
            name[temp] = n[temp];
            temp++;
        }
        name[temp] = '\0'; // Null terminate
        roll_no = r;
        batch_no = b;
    }

    // Copy constructor
    student(const student& s) {
        int temp = 0;
        while (s.name[temp] != '\0' && temp < 29) {
            name[temp] = s.name[temp];
            temp++;
        }
        name[temp] = '\0'; // Null terminate
        roll_no = s.roll_no;
        batch_no = s.batch_no;
    }

    // Display student info
    void display_student_info() {
        cout << "Student name: " << name << endl;
        cout << "Student roll no: " << roll_no << endl;
        cout << "Student batch no: " << batch_no << endl;
    }
};

class faculty {
public:
    char designation[30];

    // Default constructor
    faculty() {
        for (int i = 0; i < 30; i++) {
            designation[i] = '\0';
        }
    }

    // Parameterized constructor
    faculty(const char d[30]) {
        int temp = 0;
        while (d[temp] != '\0' && temp < 29) {
            designation[temp] = d[temp];
            temp++;
        }
        designation[temp] = '\0'; // Null terminate
    }

    // Copy constructor
    faculty(const faculty& other) {
        int temp = 0;
        while (other.designation[temp] != '\0' && temp < 29) {
            designation[temp] = other.designation[temp];
            temp++;
        }
        designation[temp] = '\0'; // Null terminate
    }

    // Display faculty info
    void display_faculty() {
        cout << "Faculty member designation: " << designation << endl;
    }
};

class teacher_assistant : public student, public faculty {
public:
    // Default constructor
    teacher_assistant() : student(), faculty() {}

    // Parameterized constructor
    teacher_assistant(const char student_name[30], int student_roll_no, int student_batch_no, const char faculty_designation[30])
        : student(student_name, student_roll_no, student_batch_no), faculty(faculty_designation) {}

    // Display teacher assistant info
    void display_teacher_assistant_info() {
        cout << "Teacher Assistant Information:" << endl;
        display_student_info(); // Call student method
        display_faculty();      // Call faculty method
    }
};

int main() {
    // Creating teacher assistant object with parameterized constructor
    teacher_assistant t1("Hira", 2594, 23, "Manager");

    // Displaying teacher assistant info
    t1.display_teacher_assistant_info();

    system("pause");
    return 0;
}

//QUESTION NO 2
#include<iostream>
using namespace std;
class info {
    static info* single_instance;
    string processor;
    string default_language;
    string  operating_system;
    int  ram_size;
    int  storage_capacity;
    //default
    info() {
        processor = "unknown";
        default_language = "unknown";
        operating_system = "unknown";
        ram_size = 0;
        storage_capacity = 0;
    }
public:
    static info* getInstance() {
        if (single_instance == nullptr) {
            single_instance = new info();
        }
        return single_instance;
    }
    void setInfo(string p, string l, string os, int r, int s) {
        processor = p;
        default_language = l;
        operating_system = os;
        ram_size = r;
        storage_capacity = s;
    }
    void display() {
        cout << "system processor info is" << " " << processor << endl;
        cout << "system storage_capacity is" << storage_capacity << endl;
        cout << "system ram_size is" << ram_size << endl;
        cout << "installed operating system is" << operating_system << endl;
        cout << "the default language of the system is" << default_language << endl;
    }
};
info* info::single_instance = nullptr;
int main() {
    info* information_of_system = info::getInstance();
    information_of_system->setInfo("Intel Core i7", "English", "Windows 10", 16, 512);
    information_of_system->display();
    system("pause");
    return 0;
}
//QUESTION NO 3
#include<iostream>
using namespace std;

class student {
public:
    char name[30];
    int roll_no;
    int batch_no;

    // Default constructor
    student() {
        for (int i = 0; i < 30; i++) {
            name[i] = '\0';
        }
        roll_no = 0;
        batch_no = 0;
    }

    // Parameterized constructor
    student(const char n[30], int r, int b) {
        int temp = 0;
        while (n[temp] != '\0' && temp < 29) {
            name[temp] = n[temp];
            temp++;
        }
        name[temp] = '\0'; // Null terminate
        roll_no = r;
        batch_no = b;
    }

    // Copy constructor
    student(const student& s) {
        int temp = 0;
        while (s.name[temp] != '\0' && temp < 29) {
            name[temp] = s.name[temp];
            temp++;
        }
        name[temp] = '\0'; // Null terminate
        roll_no = s.roll_no;
        batch_no = s.batch_no;
    }

    // Display student info
    void display_student_info() {
        cout << "Student name: " << name << endl;
        cout << "Student roll no: " << roll_no << endl;
        cout << "Student batch no: " << batch_no << endl;
    }
};

class faculty {
public:
    char designation[30];

    // Default constructor
    faculty() {
        for (int i = 0; i < 30; i++) {
            designation[i] = '\0';
        }
    }

    // Parameterized constructor
    faculty(const char d[30]) {
        int temp = 0;
        while (d[temp] != '\0' && temp < 29) {
            designation[temp] = d[temp];
            temp++;
        }
        designation[temp] = '\0'; // Null terminate
    }

    // Copy constructor
    faculty(const faculty& other) {
        int temp = 0;
        while (other.designation[temp] != '\0' && temp < 29) {
            designation[temp] = other.designation[temp];
            temp++;
        }
        designation[temp] = '\0'; // Null terminate
    }

    // Display faculty info
    void display_faculty() {
        cout << "Faculty member designation: " << designation << endl;
    }
};

class teacher_assistant : public student, public faculty {
public:
    // Default constructor
    teacher_assistant() : student(), faculty() {}

    // Parameterized constructor
    teacher_assistant(const char student_name[30], int student_roll_no, int student_batch_no, const char faculty_designation[30])
        : student(student_name, student_roll_no, student_batch_no), faculty(faculty_designation) {}

    // Display teacher assistant info
    void display_teacher_assistant_info() {
        cout << "Teacher Assistant Information:" << endl;
        display_student_info(); // Call student method
        display_faculty();      // Call faculty method
    }
};

int main() {
    // Creating teacher assistant object with parameterized constructor
    teacher_assistant t1("Hira", 2594, 23, "Manager");

    // Displaying teacher assistant info
    t1.display_teacher_assistant_info();

    system("pause");
    return 0;
}
