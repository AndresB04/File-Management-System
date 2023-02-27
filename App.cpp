#include "incLIBSc++.h"

using namespace std;

pair<string, string> signup() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    return {username, password};
}

int main() {
    string username, password;
	int answer;
    while (true) {
        cout << "Would you like to Log in or Sign-Up?" << endl;
        cout << "1. Login" << endl;
        cout << "2. Sign-Up" << endl;		
        cin >> answer;
        if(answer == 1){
            cout << "Login" << endl;
            auto user_info = signup();
            string stored_username = user_info.first;
            string stored_password = user_info.second; 
            if(username == stored_username && password == stored_password) {
                cout << "Login successful" << endl;
				cout << "Welcome " << username << endl;
				cout << "what will you like to do?" << endl;
				cout << "1. Create" << endl;
				cout << "2. Open" << endl;
				cout << "3. Exit" << endl;
				cin >> answer;
				if (answer == 1){
					cout << "Created Page" << endl;
				}
				if (answer == 2) {
					cout << "Open" << endl;
				}
				if (answer == 3) {
					cout << "Exiting..." << endl;
					return 0;
				}
                break;
            } else {
                cout << "Invalid username or password!" << endl;
                continue;
            }
        }
        if(answer == 2){
            cout << "Sign-Up" << endl;
			auto user_info = signup();
			username = user_info.first;
			password = user_info.second;
			continue;
        }
    }
    return 0;
}