//Josh WElls
//P676W568
//Homework 1
//4Feb24

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

    //function that tells the user the contents of the current working directory
int listDirectoryCon() {
    system("dir");
    return 0;
};

    //function that tells user the current working directory
int printWorkingDir() {
    system("cd");
    return 0;
};

    //function that creates a new directory
int createNewDirectory() {
    system("mkdir New_Directory");
    return 0;
};

    //function that displays a message to user
int displayMessage() {
    system("echo This is suprisingly simple.");
    return 0;
};

    //function to concate and read text from file
int concatenateAndDisplay() {       
    system("type README.TXT");
    return 0;
};


void menu() {
    int choice;
        //printing menu options
    cout << "\nPlease make a selection.";
        cout << "\n1. List directory contents\n";
        cout << "2. Print working directory\n";
        cout << "3. Create a new directory\n";
        cout << "4. Display a message\n";
        cout << "5. Concatenate and display content of a file\n";
        cout << "6. Exit\n";
        cin >> choice;


        //checking if user wishes to exit
        if (choice == 6) {
            exit(1);
        }
        else {
            switch (choice) {
            case 1:
                cout << "Listing directory contents!!\n";
                listDirectoryCon();
                return menu();
                break;
            case 2:
                cout << "Printing working directory!!\n";
                printWorkingDir();
                return menu();
                break;
            case 3:
                cout << "Creating a new directory!!\n";
                createNewDirectory();
                return menu();
                break;
            case 4:
                cout << "Displaying a message!!\n";
                displayMessage();
                return menu();
                break;
            case 5:
                cout << "Concatenate and display content of a file!!\n";
                concatenateAndDisplay();
                return menu();
                break;
            default:
                cout << "Please select 1-6.\n";
                return menu();
            }
        }

}

int main()
{
    //calling menu funtion
    menu();
}
