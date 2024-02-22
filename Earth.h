//CPARK SDEV 240 20200426 PROF. SAVARD FINAL PROJECT EARTH CLASS HEADER FILE
// EARTH CLASS HEADER FILE
#pragma once

class Earth {

private:
    double earthRadiusKm;
    double lat1rad, lon1rad, lat2rad, lon2rad, x, y;
    double t_elevation;
    

public:
    double t_lat, t_lon;
    double lat1, lon1, lat2, lon2;
    double degToRad(double degrees);
    double radToDeg(double radians);
    double distanceLatLon();
    double stand_distanceLatLon();

    Earth() { // CONSTRUCTOR
        earthRadiusKm = 6371.0;
        lat1rad = 2.0;
        lon1rad = 1.0; 
        lat2rad = 3.0;
        lon2rad = 4.0;
        x = 1;
        y = 1;
        lat1 = 44.688339;
        lon1 = -75.503361;
        lat2 = 44.650083;
        lon2 = -75.455721;
        t_lat = 44.688339;
        t_lon = -75.503361;
        t_elevation = 100;
       
    }  // EXAMPLE LAT LONG CONSTRUCTOR INPUT 44.688339, -75.503361, 44.650083, -75.455721



    ~Earth() {} // DESTRUCTOR


};

