//CPARK SDEV 240 20200426 PROF. SAVARD FINAL PROJECT EARTH CLASS SOURCE FILE
//METHODS FOR EARTH CLASS

#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cmath>
#include "Earth.h"


constexpr double PI = 3.14159265;

double Earth::degToRad(double degrees)
{
    return degrees * PI / 180;
}

double Earth::radToDeg(double radians)
{
    return radians * 180 / PI;
}


// HAVERSINE FUNCTION METRIC TO CALCULATE DISTANCE BETWEEN LAT/LON ACROSS THE CURVATURE OF THE EARTH
double Earth::distanceLatLon() { // EXAMPLE 44.688339, -75.503361, 44.650083, -75.455721
    // double lat1rad, lon1rad, lat2rad, lon2rad, x, y;
    lat1rad = degToRad(lat1);
    lon1rad = degToRad(lon1);
    lat2rad = degToRad(lat2);
    lon2rad = degToRad(lon2);
    x = sin((lat2rad - lat1rad) / 2);
    y = sin((lon2rad - lon1rad) / 2);
    return 2.0 * earthRadiusKm * asin(sqrt(x * x + cos(lat1rad) * cos(lat2rad) * y * y));
}

// HAVERSINE FUNCTION STANDARD TO CALCULATE DISTANCE BETWEEN LAT/LON ACROSS THE CURVATURE OF THE EARTH
double Earth::stand_distanceLatLon() { // EXAMPLE 44.688339, -75.503361, 44.650083, -75.455721
    // double lat1rad, lon1rad, lat2rad, lon2rad, x, y;
    lat1rad = degToRad(lat1);
    lon1rad = degToRad(lon1);
    lat2rad = degToRad(lat2);
    lon2rad = degToRad(lon2);
    x = sin((lat2rad - lat1rad) / 2);
    y = sin((lon2rad - lon1rad) / 2);
    return (2.0 * earthRadiusKm * asin(sqrt(x * x + cos(lat1rad) * cos(lat2rad) * y * y)) * 0.621371);
}


