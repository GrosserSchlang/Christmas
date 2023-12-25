#include <iostream>
#include <string>
#include <vector>
using namespace std;

std::string input(std::string prompt) {
    std::cout << prompt;
    std::cout.flush();
    std::string response;
    std::getline(std::cin, response);
    return response;
}

int main() {
    vector<string> Tasks = {};
    if (Tasks.empty()){
        cout << "Nothing to do yet!";
        cout << "\n" << "----------------------" << "\n" << endl;
    } else {
        cout << "Current list: " << endl;
        for (int i = 0; i < Tasks.size(); i++)
                cout << i + 1 << " " << Tasks[i] << endl;
        cout << "\n" << "----------------------" << "\n" << endl;
    }
    while (true) {
        string opp;


        // Keep prompting for operation until a valid one is entered
        while (true) {
//            for (int i = 0; i < Tasks.size(); i++)
//                cout << i + 1 << " " << Tasks[i] << endl;
//            cout << endl;
            opp = input("What's next Dennese?\n"
                        "(type 'X' for options)"
            );

            if (opp == "add" || opp == "remove" || opp == "help" || opp == "list" || opp == "x" || opp == "X") {
                break; // Valid operation, exit the loop
            }
            if (opp.empty()) {
                cout << "\nI can't do nothing :(\n----------------------\n" << endl;
            } else {
                cout << "\n" << opp << " doesn't make sense. Try using English.\n----------------------\n" << endl;
            }
        }

        if (opp == "add") {
            string task = input("Enter new task: ");
            Tasks.push_back(task);

            cout << "\n" << "----------------------" << "\n" << endl;
            for (int i = 0; i < Tasks.size(); i++)
                cout << i + 1 << " " << Tasks[i] << endl;
            cout << "\n" << "----------------------" << "\n" << endl;
        } else if (opp == "list"){
            cout << "\n" << "----------------------" << "\n" << endl;
            for (int i = 0; i < Tasks.size(); i++)
                cout << i + 1 << " " << Tasks[i] << endl;
            cout << "\n" << "----------------------" << "\n" << endl;
        } else if (opp == "remove"){
            string rtask = input("Task to remove: ");
            bool found = false;

            // Check if the task exists in the vector
            for (auto it = Tasks.begin(); it != Tasks.end(); ++it) {
                if (*it == rtask) {
                    found = true;
                    Tasks.erase(it); // Remove the task if found
                    cout << "\n";
                    cout << "Task '" << rtask << "' removed successfully." << endl;
                    cout << "\n" << "----------------------" << "\n" << endl;
                    break;
                }
            }

            if (!found) {
                cout << "Task '" << rtask << "' doesn't exist." << endl;
            }

        } else if (opp == "x" || opp == "X"){
            cout << "\n"
                    "You can either:\n"
                    "Add a task (type 'add')\n"
                    "Remove a task (type 'remove')\n"
                    "Hear a good quote, or joke, not quite sure (type 'help')\n"
                    "\n";
        }
    }

    return 0;
}
