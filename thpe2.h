#pragma once

// Used Libraries
#include <cmath>
#include <cctype>
#include <string>
#include <iostream>

using namespace std;

// Global Constants 
/**
* @brief number of terms sumed for sin, and cos
*/
const int TERMS = 10;
/**
* @brief value of PI
*/
const double PI = atan(1.0) * 4;
/**
* @brief The allowed range of error
*/
const double ERRORVALUE = .000000000001;
/**
* @brief Number of itterations allowed when looping
*/
const int ITERATIONMAX = 5000;
/**
* @brief Allowed range of error
*/
const double ERRORTOLERANCE = .000001;


// Function Prototypes
void copyArray( double array1[], double array2[], int size );

void initialArray( double array[], int size, int arrayVal );

double sumArray( double array[], int size );

double averageArray( double array[], int size );

double minLocation( double array[], int size );

double minValue( double array[], int size );

double maxLocation( double array[], int size );
 
double maxValue( double array[], int size );
 
double countIf( double array[], int size, double choice );

void mySort( double array[], int size, string order );

int linearSearch( double array[], int size, double item );

int binarySearch( double array[], int size, double item );

double mySqrt( double val );

double myCbrt( double val );

double myLog( double val, int base );

double factorial( double val );
 
double mySin( double val );

double myCos( double val );

double degToRad( double val );

double mySinD( double val );

double myCosD( double val );

double myTan( double val );

double myTanD( double val );
