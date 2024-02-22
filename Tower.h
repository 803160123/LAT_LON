//CPARK SDEV 240 20200426 PROF. SAVARD FINAL PROJECT TOWER CLASS HEADER FILE
//TOWER CLASS 
#pragma once
class Tower {

private:

    double t_height;
    double t_lat, t_lon;
    double ant_azimuth;

public: 
    double ant_vertBeam;
    double input_angle;
    double a_height, r_height, distance;
    double upLobe;
    double t_elevation;
    double met_ant_downtilt();
    double stand_ant_downtilt();
    double upperLobe();
    double stand_upperLobe();
    double lowerLobe();
    double stand_lowerLobe();
    double horizon();
    double stand_horizon();
    double ant_downtilt_distance();
    double stand_ant_downtilt_distance();

    Tower() { // CONSTRUCTOR
        t_height = 100;
        t_lat = 44.688339;
        t_lon = -75.503361;
        t_elevation = 100;
        a_height = 96;
        r_height = 0.0;
        input_angle = 10;
        ant_vertBeam = 8;
        ant_azimuth = 0;
        distance = .914;
        upLobe = 1;

    }

         
    // DESTRUCTOR
    ~Tower() {} 


};
