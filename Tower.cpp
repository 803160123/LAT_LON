//CPARK SDEV 240 20200426 PROF. SAVARD FINAL PROJECT TOWER CLASS SOURCE FILE
#define _CRT_SECURE_NO_WARNINGS 
#include <cmath>
#include <math.h> 
#include "Tower.h"



constexpr double PI = 3.14159265;
  

    double Tower::met_ant_downtilt() // MAIN BEAM CALC FOR SPECIFIC DISTANCE FOR KILOMETERS
    {
        return atan((a_height - r_height) / (distance * 1000)) * 180 / PI;
    }

    double Tower::stand_ant_downtilt() // MAIN BEAM CALC FOR SPECIFIC DISTANCE FOR MILES
    {
        return atan((a_height  - r_height ) / (distance * 5280)) * 180 / PI;
    }
    
    
    double Tower::upperLobe() { // UPPER 3dB DISTANCE EQUATION METRIC

        upLobe = ((a_height - r_height) / tan((input_angle - (ant_vertBeam / 2)) * PI / 180)/ 1000); // RIGHT NOW THIS RESULT IS IN KILOMETERS.

        if (upLobe > 0){
                                                                                                     // if (upLobe < sqrt(a_height * 2)) {
            return upLobe;
        }

        else return 999999;

    }

    double Tower::stand_upperLobe() { // UPPER 3dB DISTANCE EQUATION STANDARD

        upLobe = ((a_height - r_height) / tan((input_angle - (ant_vertBeam / 2)) * PI / 180)/ 5280); // RIGHT NOW THIS RESULT IS IN MILES.

        if (upLobe > 0) {
           
            return upLobe;
        }

        else return 999999;

    }

        
    
    double Tower::lowerLobe() { // LOWER 3dB DISTANCE EQUATIONS METRIC

        return ((a_height - r_height) / tan(((ant_vertBeam / 2) + input_angle) * PI / 180) / 1000);
   
    }

    double Tower::stand_lowerLobe() { // LOWER 3dB DISTANCE EQUATIONS STANDARD

        return ((a_height - r_height) / tan(((ant_vertBeam / 2) + input_angle) * PI / 180) / 5280);

    }

    

    double Tower::horizon() { // HORIZON FUNCTION METRIC

        distance = ((sqrt((a_height + t_elevation) * 2)) * 1.60934);

            return distance;

    }


    double Tower::stand_horizon() { // HORIZON FUNCTION STANDARD

        distance = (sqrt((a_height + t_elevation) * 2));

        return distance;

    }
    
    
    // NOTE: FOR OPTION 5 I WANT TO ITERATE THROUGH 0 THROUG X DOWNTILTS FOR A SPECIFIC HEIGHT AND SPECIFIC MAX DOWNTILT

    // 0 VALUE FOR DOWNTILT     MAINBEAM    LOWERLOBE   UPPERLOBE
    // 1 VALUE FOR DOWNTILT     MAINBEAM    LOWERLOBE   UPPERLOBE
    // 2 VALUE FOR DOWNTILT     MAINBEAM    LOWERLOBE   UPPERLOBE
    // 3 VALUE FOR DOWNTILT     MAINBEAM    LOWERLOBE   UPPERLOBE
    // X VALUE FOR DOWNTILT     MAINBEAM    LOWERLOBE   UPPERLOBE


    double Tower::ant_downtilt_distance() { //MAIN BEAM DISTANCE IN KM FUNCTION FOR OPTION 5
            
        r_height = 0.0;

        return ((a_height - r_height) / tan((ant_vertBeam) * PI / 180)/1000);

    }

         
    double Tower::stand_ant_downtilt_distance() { //MAIN BEAM DISTANCE IN MILES FUNCTION FOR OPTION 5

        r_height = 0.0;

        return ((a_height - r_height) / tan((ant_vertBeam) * PI / 180 ) / 5280);


    }