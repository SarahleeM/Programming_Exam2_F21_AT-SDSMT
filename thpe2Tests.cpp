#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "thpe2.h"

TEST_CASE( "copyArray - Testing a basic copy of an array with 1 number" )
{
    double array1[1] = { 0 };
    double array2[1] = { 2 };
    int size = 1;
    
    
    copyArray( array1, array2, size );
    CHECK( array1[0] == 2 );
}

TEST_CASE( "copyArray - Testing a larger copy of an array with 2 numbers" )
{
    double array1[2] = { 0, 1 };
    double array2[2] = { 2 ,3 };
    int size =2;
    
    
    copyArray( array1, array2, size );
    CHECK( array1[0] == 2 );
    CHECK( array1[1] == 3 );
}

TEST_CASE( "copyArray - Testing a final copy of an array with 6 numbers" )
{
    double array1[6] = { 0, 1, 9, 3, 3, 2 };
    double array2[6] = { 2, 3, 4, 5, 6, 7 };
    int size =2;
    
    
    copyArray( array1, array2, size );
    CHECK( array1[0] == 2 );
    CHECK( array1[1] == 3 );
}

TEST_CASE( "initialArray - testing a 1D array with 1 double" )
{
    double array[1] = { 0 };
    int size = 1;
    int arrayVal = 5;
    
    initialArray( array, size, arrayVal);
    CHECK( array[0] == 5 );
}

TEST_CASE( "initialArray - testing a 1D array with 2 double" )
{
    double array[2];
    int size = 2;
    int arrayVal = 9;
    
    initialArray( array, size, arrayVal);
    CHECK( array[0] == 9 );
    CHECK( array[1] == 9 );
}

TEST_CASE( "initialArray - testing a 1D array with 30 double" )
{
    double array[30];
    int size = 30;
    int arrayVal = 1;
    int i;
    
    initialArray( array, size, arrayVal);
    for(i=0; i<size; i++)
    {
      CHECK( array[i] == 1 );  
    }
}

TEST_CASE( "initialArray - Testing a massive array" )
{
    double array[300];
    int size = 300;
    int arrayVal = 5;
    int i;
    
    initialArray( array, size, arrayVal );
    for(i=0; i<size; i++)
    {
        CHECK( array[i] == 5 );
    }
}

TEST_CASE( "sumArray - Testing a simple push though 'no actuall math' " )
{
    double array[1] = { 1 };
    int size = 1;
    double ans;
    
    ans = sumArray( array, size );
    CHECK( ans == 1 );
}    

TEST_CASE( "sumArray - Testing array resulting in 5 " )
{
    double array[5] = { 1, 1, 1, 1, 1 };
    int size = 5;
    double ans;
    
    ans = sumArray( array, size );
    CHECK( ans == 5 );
}    

TEST_CASE( "sumArray - Testing array resulting in 10" )
{
    double array[5] = { 1, 1, 1, 1, 6 };
    int size = 5;
    double ans;
    
    ans = sumArray( array, size );
    CHECK( ans == 10 );
}  

TEST_CASE( "averageArray - Testing a simple average resulting in 1" )
{
    double array[1] = { 1 };
    int size = 1;
    double ans;
    
    ans = averageArray( array, size );
    CHECK( ans == 1 );
}

TEST_CASE( "averageArray - Testing a simple average resulting in 2" )
{
    double array[5] = { 2, 2, 2, 2, 2 };
    int size = 5;
    double ans;
    
    ans = averageArray( array, size );
    CHECK( ans == 2 );
}

TEST_CASE( "averageArray - Testing a simple average resulting in 8" )
{
    double array[2] = { 6, 10 };
    int size = 2;
    double ans;
    
    ans = averageArray( array, size );
    CHECK( ans == 8 );
}

TEST_CASE( "minLocation - Testing a simple find" )
{
    double array[1] = { 1 };
    double size = 1;
    double ans;
    
    ans = minLocation( array, size );
    CHECK( ans == 0 );
}

TEST_CASE( "minLocation - Testing min in the middle" )
{
    double array[5] = { 5, 6, 7, 1, 4 };
    double size = 5;
    double ans;
    
    ans = minLocation( array, size );
    CHECK( ans == 3 );
}

TEST_CASE( "minLocation - Testing min at the end" )
{
    double array[7] = { 5, 6, 7, 2, 4, 9, 1 };
    double size = 7;
    double ans;
    
    ans = minLocation( array, size );
    CHECK( ans == 6 );
}

TEST_CASE( "minValue - Testing a simple array" )
{
    double array[1] = { 0 };
    double size = 1;
    double ans;
    
    ans = minValue( array, size );
    CHECK( ans == 0 );
}

TEST_CASE( "minValue - Testing a larger array w/ ans in 0 spot" )
{
    double array[6] = { 1, 2, 2, 3, 4, 5 };
    double size = 6;
    double ans;
    
    ans = minValue( array, size );
    CHECK( ans == 1 );
}

TEST_CASE( "minValue - Testing a larger array w/ ans in mid spot" )
{
    double array[6] = { 5, 4, 4, 3, 4, 5 };
    double size = 6;
    double ans;
    
    ans = minValue( array, size );
    CHECK( ans == 3 );
}

TEST_CASE( "minValue - Testing a larger array w/ ans in last spot" )
{
    double array[6] = { 3, 3, 3, 3, 4, 2 };
    double size = 6;
    double ans;
    
    ans = minValue( array, size );
    CHECK( ans == 2 );
}

TEST_CASE( "maxLocation - testing an array w/ ans in begining" )
{
     double array[1] = { 0 };
     double size = 1;
     double ans;
     
     ans = maxLocation( array, size );
     CHECK( ans == 0 );
}

TEST_CASE( "maxLocation - testing an array w/ ans in mid spot" )
{
     double array[5] = { 0, 1, 2, 9, 4 };
     double size = 5;
     double ans;
     
     ans = maxLocation( array, size );
     CHECK( ans == 3 );
}

TEST_CASE( "maxLocation - testing an array w/ ans at the end" )
{
     double array[4] = { 0, 1, 2, 3 };
     double size = 4;
     double ans;
     
     ans = maxLocation( array, size );
     CHECK( ans == 3 );
}

TEST_CASE( "maxValue - testing an array w/ ans at the begining" )
{
     double array[1] = { 0 };
     double size = 1;
     double ans;
     
     ans = maxValue( array, size );
     CHECK( ans == 0 );
}

TEST_CASE( "maxValue - testing an array w/ ans at the end" )
{
     double array[5] = { 0, 1, 2, 3, 4 };
     double size = 5;
     double ans;
     
     ans = maxValue( array, size );
     CHECK( ans == 4 );
}

TEST_CASE( "maxValue - testing an array w/ ans in the middle" )
{
     double array[4] = { 0, 9, 1, 3 };
     double size = 4;
     double ans;
     
     ans = maxValue( array, size );
     CHECK( ans == 9 );
}

TEST_CASE( "countIf - testing a simple array w/ ans = 1" )
{
    double ans;
    double array[1] = { 3 };
    int size = 1;
    double choice = 3;
    
    ans = countIf( array, size, choice );
    CHECK( ans == 1 );
}

TEST_CASE( "countIf - testing an array w/ ans = 2" )
{
    double ans;
    double array[4] = { 3, 0, 0, 2 };
    int size = 4;
    double choice = 0;
    
    ans = countIf( array, size, choice );
    CHECK( ans == 2 );
}

TEST_CASE( "countIf - testing an array w/ ans = 1" )
{
    double ans;
    double array[6] = { 3, 0, 0, 2, 1, 1 };
    int size = 6;
    double choice = 3;
    
    ans = countIf( array, size, choice );
    CHECK( ans == 1 );
}

TEST_CASE( "countIf - testing an array w/ ans = 6" )
{
    double ans;
    double array[6] = { 1, 1, 1, 1, 1, 1 };
    int size = 6;
    double choice = 1;
    
    ans = countIf( array, size, choice );
    CHECK( ans == 6 );
}

TEST_CASE( "countIf - testing an array w/ ans = 5" )
{
    double ans;
    double array[10] = { 3, 0, 0, 2, 1, 1, 0, 0, 0, 1 };
    int size = 10;
    double choice = 0;
    
    ans = countIf( array, size, choice );
    CHECK( ans == 5 );
}

TEST_CASE( "mySort - testing a simple sort ASC" )
{
    double array[2] = { 2, 1 };
    int size = 2;
    string order = "ASC";
    
    mySort( array, size, order );
    CHECK( array[0] == 1 );
    CHECK( array[1] == 2 );
}

TEST_CASE( "mySort - testing a harder sort ASC" )
{
    double array[7] = { 2, 1, 0, 4, 3, 7, 1 };
    int size = 7;
    string order = "ASC";
    
    mySort( array, size, order );
    CHECK( array[0] == 0 );
    CHECK( array[1] == 1 );
    CHECK( array[2] == 1 );
    CHECK( array[6] == 7 );
}

TEST_CASE( "mySort - testing a simple sort DSC" )
{
    double array[2] = { 1, 2 };
    int size = 2;
    string order = "DSC";
    
    mySort( array, size, order );
    CHECK( array[0] == 2 );
    CHECK( array[1] == 1 );
}

TEST_CASE( "linearSearch - serching in an array of 1" )
{
    double array[1] = { 4 };
    int size = 1;
    double choice = 4;
    double ans;
    
    ans = linearSearch( array, size, choice );
    CHECK( ans == 0 );
}

TEST_CASE( "linearSearch - serching in an array of 5" )
{
    double array[5] = { 0, 1, 2, 3, 4 };
    int size = 5;
    double choice = 4;
    double ans;
    
    ans = linearSearch( array, size, choice );
    CHECK( ans == 4 );
}

TEST_CASE( "linearSearch - serching in an array of 10" )
{
    double array[10] = { 0, 1, 2, 4, 3, 5, 6, 7, 8, 9 };
    int size = 10;
    double choice = 3;
    double ans;
    
    ans = linearSearch( array, size, choice );
    CHECK( ans == 4 );
}

TEST_CASE( "linearSearch - serching for sum that dont exist" )
{
    double array[10] = { 0, 1, 2, 4, 4, 5, 6, 7, 8, 9 };
    int size = 10;
    double choice = 3;
    double ans;
    
    ans = linearSearch( array, size, choice );
    CHECK( ans == -1 );
}

TEST_CASE( "binarySearch - serching in an array of 1" )
{
    double array[1] = { 0 };
    int size = 1;
    double choice = 0;
    double ans;
    string order = "ASC";
    
    mySort( array, size, order );
    ans = binarySearch( array, size, choice );
    CHECK( ans == 0 );
}

TEST_CASE( "binarySearch - serching left side in an array of 5" )
{
    double array[5] = { 0, 1, 2, 3, 4 };
    int size = 5;
    double choice = 1;
    double ans;
    string order = "ASC";
    
    mySort( array, size, order );
    ans = binarySearch( array, size, choice );
    CHECK( ans == 1 );
}

TEST_CASE( "binarySearch - serching right side in an array of 5" )
{
    double array[5] = { 0, 1, 2, 3, 4 };
    int size = 5;
    double choice = 3;
    double ans;
    string order = "ASC";
    
    mySort( array, size, order );
    ans = binarySearch( array, size, choice );
    CHECK( ans == 3 );
}

TEST_CASE( "binarySearch - serching left in an array of 5" )
{
    double array[5] = { 0, 1, 2, 3, 4 };
    int size = 5;
    double choice = 0;
    double ans;
    string order = "ASC";
    
    mySort( array, size, order );
    ans = binarySearch( array, size, choice );
    CHECK( ans == 0 );
}

TEST_CASE( "binarySearch - serching right in an array of 5" )
{
    double array[5] = { 0, 1, 2, 3, 4 };
    int size = 5;
    double choice = 4;
    double ans;
    string order = "ASC";
    
    mySort( array, size, order );
    ans = binarySearch( array, size, choice );
    CHECK( ans == 4 );
}

TEST_CASE( "binarySearch - serching in an array of 20" )
{
    double array[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int size = 20;
    double choice = 9;
    double ans;
    string order = "ASC";
    
    mySort( array, size, order );
    ans = binarySearch( array, size, choice );
    CHECK( ans == 18 );
}

TEST_CASE( "binarySearch - serching in an array of 20 again" )
{
    double array[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int size = 20;
    double choice = 1;
    double ans;
    string order = "ASC";
    
    mySort( array, size, order );
    ans = binarySearch( array, size, choice );
    CHECK( ans == 2 );
}

TEST_CASE( "binarySearch - serching in an array of 40" )
{
    double array[40] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int size = 40;
    double choice = 9;
    double ans;
    string order = "ASC";
    
    mySort( array, size, order );
    ans = binarySearch( array, size, choice );
    CHECK( ans == 37 );
}

TEST_CASE( "mySqrt - a lower test" )
{ 
    double val = 4;
    double ans;
    
    ans = mySqrt( val );
    CHECK( ans == 2 );
}

TEST_CASE( "mySqrt - a test case that has to run though multiple times" )
{
    double val = 9;
    double ans;
    
    ans = mySqrt( val );
    CHECK( ans == Approx(3) );
}

TEST_CASE( "mySqrt - a test case with a decimal answer" )
{
    double val = 12.25;
    double ans;
    
    ans = mySqrt( val );
    CHECK( ans == Approx(3.5) );
}

TEST_CASE( "mySqrt - testing a craze ans" )
{
    double val = 500;
    double ans;
    
    ans = mySqrt( val );
    CHECK( ans == Approx(22.36067977) );
}

TEST_CASE( "myCbrt - testing a simple find" )
{
    double val = 8;
    double ans;
    
    ans = myCbrt( val );
    CHECK( ans == Approx(2) );
}

TEST_CASE( "myCbrt - testing a crazy ans" )
{
    double val = 500;
    double ans;
    
    ans = myCbrt( val );
    CHECK( ans == Approx(7.93700526) );
}

TEST_CASE( "myLog - testing same base and val" )
{
    double val = 10;
    int base = 10;
    double ans;
    
    ans = myLog( val, base );
    CHECK( ans == Approx(1.0) );
}

TEST_CASE( "myLog - testing different base and val" )
{
    double val = 1000;
    int base = 10;
    double ans;
    
    ans = myLog( val, base );
    CHECK( ans == Approx(3.0) );
}

TEST_CASE( "myLog - testing some crazy val and base" )
{
    double val = 2;
    int base = 19;
    double ans;
    
    ans = myLog( val, base );
    CHECK( ans == Approx(0.2354089134) );
}

TEST_CASE( "factorial - Testing an ans of 2" )
{
    int val = 2;
    double ans;
    
    ans = factorial( val );
    CHECK( ans == 2 );
}

TEST_CASE( "factorial - Testing an ans of 6" )
{
    int val = 3;
    double ans;
    
    ans = factorial( val );
    CHECK( ans == 6 );
}

TEST_CASE( "factorial - testing a large number meant to overflow" )
{
    int val = 13;
    double ans;
    
    ans = factorial( val );
    CHECK( ans == 6227020800 );
}

TEST_CASE( "factorial - testing a large number meant to overflow more" )
{
    int val = 14;
    double ans;
    
    ans = factorial( val );
    CHECK( ans == 87178291200 );
}

TEST_CASE( "mySin - testing a val of 1.5708" )
{
    double val = PI/2;
    
    CHECK( (fabs( mySin( val )) - sin( val )) < ERRORTOLERANCE);
}

TEST_CASE( "mySin - testing a val of .785398" )
{
    double val = .785398;
    
    CHECK( (fabs( mySin( val )) - sin( val )) < ERRORTOLERANCE);
}

TEST_CASE( "mySin  - testing a zero" )
{
    double val = 0;

    CHECK( (fabs( mySin( val )) - sin( val )) < ERRORTOLERANCE);
}

TEST_CASE( "myCos - testing 0" )
{
    double val = 0;
    
    CHECK( (fabs( myCos( val )) - cos( val )) < ERRORTOLERANCE);
}

TEST_CASE( "myCos - testing a val of .785398" )
{
    double val = .785398;
    
    REQUIRE( (fabs( myCos( val )) - cos( val )) < ERRORTOLERANCE );
}

TEST_CASE( "myCos - testing a val of 1.5708" )
{
    double val = PI/2;
    
    CHECK(fabs( myCos( val ) - cos( val )) < ERRORTOLERANCE );
}

TEST_CASE( "myCos - testing a val of 1" )
{
    double val = 1;
    
    CHECK(fabs( myCos( val ) - cos(val)) < ERRORTOLERANCE );

}

TEST_CASE( "degToRad - testing a value of 45" )
{
    double val = 45;
    double ans;
    
    ans = degToRad( val );
    CHECK( ans == Approx( .7853981634 ) );
}

TEST_CASE( "degToRad - testing a val of 10" )
{
    double val = 10;
    double ans;
    
    ans = degToRad( val );
    CHECK( ans == Approx( .174532925 ) );
}

TEST_CASE( "degToRad - testing a val of 60" )
{
    double val = 60;
    double ans;
    
    ans = degToRad( val );
    CHECK( ans == Approx( 1.047197551 ) );
}

TEST_CASE( "mySinD - testing 0" )
{
    double val = 0;
    
    CHECK(fabs( mySinD( val ) - 0) < ERRORTOLERANCE );

}

TEST_CASE( "mySinD - testing 90" )
{
    double val = 90;
    
    CHECK(fabs( mySinD( val ) - 1) < ERRORTOLERANCE );

}

TEST_CASE( "mySinD - testing 45" )
{
    double val = 45;
    
    CHECK(fabs( mySinD( val ) - .707107) < ERRORTOLERANCE );

}

TEST_CASE( "myCosD - testing 0" )
{
    double val = 0;
    
    CHECK(fabs( myCosD( val ) - 1) < ERRORTOLERANCE );

}

TEST_CASE( "myCosD - testing 90" )
{
    double val = 90;
    
    CHECK(fabs( myCosD( val ) - 0) < ERRORTOLERANCE );

}

TEST_CASE( "myCosD - testing 45" )
{
    double val = 45;
    
    CHECK(fabs( myCosD( val ) - .707107) < ERRORTOLERANCE );

}

TEST_CASE( "myTan - testing 0" )
{
    double val = 0;
    
    CHECK(fabs( myTan( val ) - 0) < ERRORTOLERANCE );
}

TEST_CASE( "myTan - testing .785398" )
{
    double val = .785398;
    
    CHECK(fabs( myTan( val ) - 1) < ERRORTOLERANCE );
}

TEST_CASE( "myTanD - testing 0" )
{
    double val = 0;
    
    CHECK(fabs( myTanD( val ) - 0) < ERRORTOLERANCE );
}

TEST_CASE( "myTanD - testing 45" )
{
    double val = 45;
    
    CHECK(fabs( myTanD( val ) - 1) < ERRORTOLERANCE );
}