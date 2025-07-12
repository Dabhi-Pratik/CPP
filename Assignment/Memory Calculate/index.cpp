    #include <iostream>
#include <vector>
#include <string>
using namespace std;

// Class Template
template <typename T>
class MemoryCalculate {
private:
    T id;
    string name;

public:
    // Constructor
    MemoryCalculate(T id, string name) {
        this->id = id;
        this->name = name;
    }

    // Display method
    void display() const {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    // Getter for ID (for search/delete)
    T getId() const {
        return id;
    }
};

int main() {
    vector<MemoryCalculate<int>> students;
    int choice;

    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Remove a Student by ID\n";
        cout << "4. Search for a Student by ID\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int id;
            string name;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin.ignore(); // To clear newline from buffer
            getline(cin, name);
            students.push_back(MemoryCalculate<int>(id, name));
            cout << "Student added successfully!\n";
            break;
        }

        case 2: {
            cout << "\nList of Students:\n";
            for (const auto &student : students) {
                student.display();
            }
            break;
        }

        case 3: {
            int id;
            bool found = false;
            cout << "Enter ID to remove: ";
            cin >> id;
            for (auto it = students.begin(); it != students.end(); ++it) {
                if (it->getId() == id) {
                    students.erase(it);
                    cout << "Student removed successfully!\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Student with ID " << id << " not found.\n";
            }
            break;
        }

        case 4: {
            int id;
            bool found = false;
            cout << "Enter ID to search: ";
            cin >> id;
            for (const auto &student : students) {
                if (student.getId() == id) {
                    cout << "Student Found:\n";
                    student.display();
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Student with ID " << id << " not found.\n";
            }
            break;
        }

        case 5:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
