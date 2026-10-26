#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>
using namespace std;

struct Student {
    int id;
    string name;
    float marks;
};

Student s[100];
int countStudent = 0;

void addStudent() {
    cout << "Enter name:" << endl;
    cin.ignore();
    getline(cin, s[countStudent].name);

    cout << "Enter id:" << endl;
    cin >> s[countStudent].id;

    cout << "Enter marks:" << endl;
    cin >> s[countStudent].marks;

    countStudent++;

    cout << "Student added successfully\n";
}

void displayStudents() {
    if (countStudent == 0) {
        cout << "No students found\n";
        return;
    }

    for (int i = 0; i < countStudent; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "ID: " << s[i].id << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }
}

void searchStudent() {
    int id;

    cout << "Enter id to search:" << endl;
    cin >> id;

    for (int i = 0; i < countStudent; i++) {
        if (s[i].id == id) {
            cout << "Student found" << endl;
            cout << "Name: " << s[i].name << endl;
            cout << "Marks: " << s[i].marks << endl;
            return;
        }
    }

    cout << "Student not found\n";
}
void deleteStudent() {
    int id;

    cout << "Enter id to delete:" << endl;
    cin >> id;

    for (int i = 0; i < countStudent; i++) {
        if (s[i].id == id) {
            for (int j = i; j < countStudent - 1; j++) {
                s[j] = s[j + 1];
            }
            countStudent--;
            cout << "Student deleted successfully\n";
            return;
        }
    }

    cout << "Student not found\n";
}
void updateStudent() {
    int id;

    cout << "Enter id to update:" << endl;
    cin >> id;

    for (int i = 0; i < countStudent; i++) {
        if (s[i].id == id) {
            cout << "Enter new name:" << endl;
            cin >> s[i].name;

            cout << "Enter new marks:" << endl;
            cin >> s[i].marks;

            cout << "Student updated successfully\n";
            return;
        }
    }

    cout << "Student not found\n";
}
void sortStudentsByMarks() {
    for (int i = 0; i < countStudent - 1; i++) {
        for (int j = 0; j < countStudent - i - 1; j++) {
            if (s[j].marks < s[j + 1].marks) {
                swap(s[j], s[j + 1]);
            }
        }
    }
}
void saveToFile() {
    ofstream outFile("students.txt");
    if (!outFile) {
        cout << "Error opening file for writing\n";
        return;
    }

    for (int i = 0; i < countStudent; i++) {
        outFile << s[i].id << " " << s[i].name << " " << s[i].marks << endl;
    }

    outFile.close();
    cout << "Students saved to file successfully\n";
}
void login() {
    string username, password;

    cout << "Enter username:" << endl;
    cin >> username;

    cout << "Enter password:" << endl;
    cin >> password;

    if (username == "admin" && password == "password") {
        cout << "Login successful\n";
    } else {
        cout << "Invalid username or password\n";
        exit(0);
    }
}
void percentagecalculation() {
    if (countStudent == 0) {
        cout << "No students found\n";
        return;
    }

    for (int i = 0; i < countStudent; i++) {
        float percentage = s[i].marks; // Assuming marks are out of 100
        
        cout << "Student: " << s[i].name << ", Percentage: " << percentage << "%\n";
    }
}
int main() {
    int choice;

    do {
        cout << "\nStudent Management System\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Update Student\n";
        cout << "6. Sort Students by Marks\n";
        cout << "7. Save to File\n";
        cout << "8. Login\n";
        cout << "9. Calculate Percentage\n";
        cout << "10. Exit\n";

        cout << "Enter your choice:" << endl;
        cin >> choice;

        switch (choice) {

        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            deleteStudent();
            break;

        case 5:
            updateStudent();
            break;

        case 6:
            sortStudentsByMarks();
            break;

        case 7:
            saveToFile();
            break;

        case 8:
            login();
            break;

        case 9:
            percentagecalculation();
            break;

        case 10:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 10);

    return 0;
}