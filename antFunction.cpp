//CPARK SDEV 240 20200426 PROF. SAVARD FINAL PROJECT ALL MY FUNCTIONS FOR MAIN IN A SEPERATE FILE THAT ARE CALLED FROM MAIN()
//THIS IS THE MAJORITY OF THE FUNCTIOPNALITY OF THE PROGRAM
#include <iostream>
#include <iomanip>
#include "Tower.h"
#include "Earth.h"


// WRITE A FUNCTION FOR THIS INPUT ERROR HANDLING
// if (!(std::cin >> tower1.a_height)) { 
   //  std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
    // std::cin.clear();
    // std::cin.ignore(10000, '\n');
// }

int getChoice(int min, int max)
{
    int input;
    // Get and validate the input
    std::cin >> input;
    while (input < min || input > max)
    {
        std::cout << "INVALID INPUT! PLEASE ENTER A MENU SELECTION BETWEEN 0 AND 5: ";
        std::cin >> input;
    }
    return input;
}



void selection_function_1() {
    char unit = 'M';

    std::cout << "\nYOU HAVE SELECTED: MAIN BEAM DOWNTILT CALCULATION" <<
        "\n\nPLEASE SELECT METRIC: 'M' OR STANDARD: 'S' UNIT OF MEASUREMENT:";

    std::cin >> unit;

    while (unit != 'M' && unit != 'S') {
        std::cout << "\nPLEASE CHOOSE A VALID UNIT OF MEASUREMENT SELECTION:";
        std::cin >> unit;
    };

    if (unit == 'M') {

        Tower tower1;
        std::cout << "\nPLEASE ENTER ANTENNA RADIATION HEIGHT IN METERS(example 96): ";
        if (!(std::cin >> tower1.a_height)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        std::cout << "\nPLEASE ENTER RECEIVER HEIGHT IN METERS(example 2): ";
        if (!(std::cin >> tower1.r_height)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        std::cout << "\nPLEASE ENTER DISTANCE IN KILOMETERS(example 2.5): ";
        if (!(std::cin >> tower1.distance)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        std::cout << "\n\nTHE ANTENNA DOWNTILT AT [" << tower1.distance << "] KILOMETERS IS [" << tower1.stand_ant_downtilt() << "] DEGREES\n" << std::endl;
    }

    if (unit == 'S') {
        Tower tower1;
        std::cout << "\nPLEASE ENTER ANTENNA RADIATION HEIGHT IN FEET(example 96): ";
        if (!(std::cin >> tower1.a_height)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        std::cout << "\nPLEASE ENTER RECEIVER HEIGHT IN FEET(example 6): ";
        if (!(std::cin >> tower1.r_height)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        std::cout << "\nPLEASE ENTER DISTANCE IN MILES(example 2.5): ";
        if (!(std::cin >> tower1.distance)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        std::cout << "\n\nTHE ANTENNA DOWNTILT AT [" << tower1.distance << "] MILES IS [" << tower1.stand_ant_downtilt() << "] DEGREES\n" << std::endl;

    }

}; // END OF FUNCTION_1


void selection_function_2() {

    char unit = 'M';

    std::cout << "\nYOU HAVE SELECTED: UPPER AND LOWER 3dB CALCULATION" <<
        "\n\nPLEASE SELECT METRIC: 'M' OR STANDARD: 'S' UNIT OF MEASUREMENT:";

    std::cin >> unit;

    while (unit != 'M' && unit != 'S') {
        std::cout << "\nPLEASE CHOOSE A VALID UNIT OF MEASUREMENT SELECTION:";
        std::cin >> unit;
    };

    if (unit == 'M') {

        Tower tower2;
        std::cout << "\nPLEASE ENTER ANTENNA RADIATION HEIGHT IN METERS(example 96): ";
        if (!(std::cin >> tower2.a_height)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        std::cout << "\nPLEASE ENTER RECEIVER HEIGHT IN METERS(example 2): ";
        if (!(std::cin >> tower2.r_height)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        std::cout << "\nPLEASE ENTER THE MAXIMUM VERTICLE BEAM WIDTH OF THE ANTENNA IN DEGREES(example 8): ";
        if (!(std::cin >> tower2.ant_vertBeam)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        std::cout << "\nPLEASE ENTER THE THE ANGLE OF THE ANTENNA DOWNTILT TO BE CALCULATED IN DEGREES(example 4): ";
        if (!(std::cin >> tower2.input_angle)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        std::cout << "\n\nTHE UPPER 3dB POINT OF THE ANTENNA PATTERN @ " << tower2.input_angle << "  DEGREES IS [" << tower2.upperLobe() << "] KILOMETERS" << std::endl;
        std::cout << "THE LOWER 3dB POINT OF THE ANTENNA PATTERN @ " << tower2.input_angle << "  DEGREES IS [" << tower2.lowerLobe() << "] KILOMETERS\n" << std::endl;

    }

    if (unit == 'S') {

        Tower tower2;
        std::cout << "\nPLEASE ENTER ANTENNA RADIATION HEIGHT IN FEET(example 96): ";
        if (!(std::cin >> tower2.a_height)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        std::cout << "\nPLEASE ENTER RECEIVER HEIGHT IN FEET(example 6): ";
        if (!(std::cin >> tower2.r_height)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        std::cout << "\nPLEASE ENTER THE MAXIMUM VERTICLE BEAM WIDTH OF THE ANTENNA IN DEGREES(example 8): ";
        if (!(std::cin >> tower2.ant_vertBeam)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        std::cout << "\nPLEASE ENTER THE THE ANGLE OF THE ANTENNA DOWNTILT TO BE CALCULATED IN DEGREES(example 4): ";
        if (!(std::cin >> tower2.input_angle)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        std::cout << "\n\nTHE UPPER 3dB POINT OF THE ANTENNA PATTERN @ " << tower2.input_angle << "  DEGREES IS [" << tower2.stand_upperLobe() << "] MILES" << std::endl;
        std::cout << "THE LOWER 3dB POINT OF THE ANTENNA PATTERN @ " << tower2.input_angle << "  DEGREES IS [" << tower2.stand_lowerLobe() << "] MILES\n" << std::endl;
    }

}; // END OF FUNCTION_2



void selection_function_3() {

    char unit = 'M';

    std::cout << "\nYOU HAVE SELECTED: LAT/LON DISTANCE CALCULATION" <<
        "\n\nPLEASE SELECT METRIC: 'M' OR STANDARD: 'S' UNIT OF MEASUREMENT:";

    std::cin >> unit;

    while (unit != 'M' && unit != 'S') {
        std::cout << "\nPLEASE CHOOSE A VALID UNIT OF MEASUREMENT SELECTION:";
        std::cin >> unit;
    };

    if (unit == 'M') {

        Earth Earth1;

        std::cout << "\nEXAMPLE INPUTS ARE (43.117919 -73.733397 43.089527 -73.790638)" << std::endl;

        std::cout << "\nPLEASE ENTER THE LATITUDE OF THE 1st LOCATION TO BE CALCULATED: ";
        if (!(std::cin >> Earth1.lat1)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        std::cout << "\nPLEASE ENTER THE LONGITUDE OF THE 1st LOCATION TO BE CALCULATED: ";
        if (!(std::cin >> Earth1.lon1)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        std::cout << "\nPLEASE ENTER THE LATITUDE OF THE 2nd LOCATION TO BE CALCULATED: ";
        if (!(std::cin >> Earth1.lat2)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        std::cout << "\nPLEASE ENTER THE LONGITUDE OF THE 2nd LOCATION TO BE CALCULATED: ";
        if (!(std::cin >> Earth1.lon2)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }


        std::cout << "\n\nTHE DISTANCE BETWEEN THE 1st AND 2nd LOCATION IS [" << Earth1.distanceLatLon() << "] KILOMETERS\n" << std::endl;
    }

    if (unit == 'S') {

        Earth Earth1;

        std::cout << "\nEXAMPLE INPUTS ARE (43.117919 -73.733397 43.089527 -73.790638)" << std::endl;

        std::cout << "\nPLEASE ENTER THE LATITUDE OF THE 1st LOCATION TO BE CALCULATED: ";
        if (!(std::cin >> Earth1.lat1)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        std::cout << "\nPLEASE ENTER THE LONGITUDE OF THE 1st LOCATION TO BE CALCULATED: ";
        if (!(std::cin >> Earth1.lon1)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        std::cout << "\nPLEASE ENTER THE LATITUDE OF THE 2nd LOCATION TO BE CALCULATED: ";
        if (!(std::cin >> Earth1.lat2)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        std::cout << "\nPLEASE ENTER THE LONGITUDE OF THE 2nd LOCATION TO BE CALCULATED: ";
        if (!(std::cin >> Earth1.lon2)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }


        std::cout << "\n\nTHE DISTANCE BETWEEN THE 1st AND 2nd LOCATION IS [" << Earth1.stand_distanceLatLon() << "] MILES\n" << std::endl;
    }

};// END OF FUNCTION_3

void selection_function_4() {

    char unit = 'M';

    std::cout << "\nYOU HAVE SELECTED: HORIZON DISTANCE FROM RADIATION CENTER CALCULATION" <<
        "\n\nPLEASE SELECT METRIC: 'M' OR STANDARD: 'S' UNIT OF MEASUREMENT:";

    std::cin >> unit;

    while (unit != 'M' && unit != 'S') {
        std::cout << "\nPLEASE CHOOSE A VALID UNIT OF MEASUREMENT SELECTION:";
        std::cin >> unit;
    };

    if (unit == 'M') {

        Tower tower3;
        std::cout << "\nPLEASE ENTER ANTENNA RADIATION HEIGHT IN METERS(example 96): ";
        if (!(std::cin >> tower3.a_height)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        std::cout << "\nPLEASE ENTER GROUND ELEVATION IN METERS(example 10): ";
        if (!(std::cin >> tower3.t_elevation)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        std::cout << "\n\nTHE DISTANCE BETWEEN THE RADIATION CENTER AND THE HORIZON IS [" << tower3.horizon() << "] KILOMETERS\n" << std::endl;

    }

    if (unit == 'S') {

        Tower tower3;
        std::cout << "\nPLEASE ENTER ANTENNA RADIATION HEIGHT IN FEET(example 96): ";
        if (!(std::cin >> tower3.a_height)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        std::cout << "\nPLEASE ENTER GROUND ELEVATION IN FEET(example 6): ";
        if (!(std::cin >> tower3.t_elevation)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        std::cout << "\n\nTHE DISTANCE BETWEEN THE RADIATION CENTER AND THE HORIZON IS [" << tower3.stand_horizon() << "] MILES\n" << std::endl;

    }

};


void selection_function_5() {

    char unit = 'M';

    int baseTilt = 0;


    std::cout << "\nYOU HAVE SELECTED: ALL ANTENNA DOWNTILT DISTANCES" <<
        "\n\nPLEASE SELECT METRIC: 'M' OR STANDARD: 'S' UNIT OF MEASUREMENT:";

    std::cin >> unit;

    while (unit != 'M' && unit != 'S') {
        std::cout << "\nPLEASE CHOOSE A VALID UNIT OF MEASUREMENT SELECTION:";
        std::cin >> unit;
    };

    if (unit == 'M') {

        Tower tower4;
        std::cout << "\nPLEASE ENTER ANTENNA RADIATION HEIGHT IN METERS(example 96): ";
        if (!(std::cin >> tower4.a_height)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        std::cout << "\nPLEASE ENTER THE MAXIMUM VERTICLE BEAM WIDTH OF THE ANTENNA IN DEGREES(example 8): ";
        if (!(std::cin >> tower4.ant_vertBeam)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        // std::cout << "THIS IS A TEST FOR DOWNTILT DISTANCE " << tower4.ant_downtilt_distance() << " KILOMETERS" << std::endl;

        std::cout << "\n\n DOWNTILT(deg)\t MAINBEAM DISTANCE(KM)\t LOWER 3dB DISTANCE\t UPPER 3dB DISTANCE" << std::endl;
        std::cout << "==================================================================================================" << std::endl;

        
        baseTilt = tower4.ant_vertBeam;

        for (int i = 0; i <= baseTilt; i++) {

            tower4.ant_vertBeam = i;
            tower4.input_angle = i;
            tower4.input_angle = i;

            std::cout << "\t" << std::setw(1) << std::left << tower4.ant_vertBeam << "\t\t"<< std::setw(8) << std::left << tower4.ant_downtilt_distance()
                << "\t\t" << std::setw(8) << std::left << tower4.lowerLobe() << "\t\t" << std::setw(8) << std::left << tower4.upperLobe() << "\n" << std::endl;


        }

    }

    if (unit == 'S') {

        Tower tower4;
        std::cout << "\nPLEASE ENTER ANTENNA RADIATION HEIGHT IN FEET(example 96): ";
        if (!(std::cin >> tower4.a_height)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        std::cout << "\nPLEASE ENTER THE MAXIMUM VERTICLE BEAM WIDTH OF THE ANTENNA IN DEGREES(example 8): ";
        if (!(std::cin >> tower4.ant_vertBeam)) {
            std::cout << "PLEASE ENTER NUMBERS ONLY" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        // std::cout << "THIS IS A TEST FOR DOWNTILT DISTANCE " << tower4.stand_ant_downtilt_distance() << " MILES" << std::endl;

        std::cout << "\n\n DOWNTILT(deg)\t MAINBEAM DISTANCE(MILES)   LOWER 3dB DISTANCE\tUPPER 3dB DISTANCE" << std::endl;
        std::cout << "==================================================================================================" << std::endl;


        baseTilt = tower4.ant_vertBeam;

        for (int i = 0; i <= baseTilt; i++) {

            tower4.ant_vertBeam = i;
            tower4.input_angle = i;
            tower4.input_angle = i;

            std::cout << "\t" << std::setw(1) << std::left << tower4.ant_vertBeam << "\t\t" << std::setw(8) << std::left << tower4.stand_ant_downtilt_distance()
                << "\t\t" << std::setw(8) << std::left << tower4.stand_lowerLobe() << "\t\t" << std::setw(8) << std::left << tower4.stand_upperLobe() << "\n" << std::endl;
        }

    }


};



