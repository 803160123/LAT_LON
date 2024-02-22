// MASTERBLASTER RUNS BARTERTOWN!
//CPARK SDEV 240 C++ PROF. GARY SAVARD 20200426 FINAL PROJECT ANTENNA DOWNTILT CALCULATIONS
//MAIN() CPP ALL FUNCTIONALITY ASIDE FROM SWITCH STATEMENT AND ERROR HANDLING ARE EXTERNAL TO MAIN()
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <iomanip>
#include "displayMenu.h"
#include "Tower.h"
#include "antFunction.h"

using namespace std;

int getChoice(int, int);
void selection_function_1();
void selection_function_2();
void selection_function_3();
void selection_function_4();
void selection_function_5();

int main()
{
    char question;
    time_t current_time;
    current_time = time(NULL);
    char* tm = ctime(&current_time);
    // cout << "TODAY IS: " << tm << endl;
    cout << tm << endl;
    
    // cout << "PROGRAM TO CALCULATE ANTENNA DOWNTILT BY CPARK. \n" << endl;
    do {
        
        displayMenu();
        
        int choice = 0;
        cout << "\nPLEASE SELECT AN OPTION FROM THE MENU: \n" << endl;
        
        cout << "SELECTION: ";
        // cin.ignore(numeric_limits<streamsize>::max(), '\n');
        choice = getChoice(0, 5);
        switch (choice)
        {
        case 1: 
            selection_function_1();
            break; 

        case 2:
            selection_function_2();
            break;

        case 3:
            selection_function_3();
            break;

        case 4:
            selection_function_4();
            break;

        case 5: 
            selection_function_5();
            break;

       case 0:
           cout << "GOOD BYE, STAY SAFE OUT THERE!" << endl;
           return 0;

        default:
            cout << "NOT A MENU SELECTION! EXITING PROGRAM"; //2nd Error handling
            return 0;
        }

        cout << "DO YOU WANT RUN ANOTHER CALCULATION? (Y/N)";
        cin >> question;
        
        // cout << string(40, '\n'); 
        //DO I REALLY WANT TO CLEAR THE SCREEN???? MAYBE BETTER TO BE ABLE TO SCROLL BACK UP AND SEE I HAVE DONE?
    } while (question == 'y' || question == 'Y');
    

    return 0;
}

