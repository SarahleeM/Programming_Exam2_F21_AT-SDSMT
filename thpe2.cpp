/** ****************************************************************************
* @file
******************************************************************************/

#include "thpe2.h"

 /** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 * A void function that takes in 2 1D arrays and the size of the arrays. 
 * This function takes every number in array1 and copies them over to array2.
 * ( Both arrays need to be the same size and copyArray Doesnt work with 2D 
 * arrays )
 *
 *  @param[in] array1 The array needed to be copied
 *  @param[in] array2 The recieving array
 *  @param[in] size The size of both arrays
 *
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    double array1[5] = {1, 0, 2, 3, 4 };
    double array2[5] = {0, 0, 0, 0, 0 };
    int size = 5;
    
    copyArray(array1, array2, size); \\ Succesfully copies array1 into array2
    
    

    @endverbatim
 ************************************************************************/
 void copyArray( double array1[], double array2[], int size )
 {
    // A simple 'for' loop was enough to copy every double over :)
    int i;
    for(i=0; i<size; i++)
    {
        array1[i] = array2[i];
    }
 }
 
 /** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 * A void function that takes in an array, the array size, and the intended
 * value for the array. The function initializes an array to a desired value.
 * ( Works with 1D arrays ONLY )
 *
 *  @param[in] array The array
 *  @param[in] size The size of the array
 *  @param[in] arrayVal The desired initial value for the array
 *
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    double array[5];
    int size = 5;
    int arrayVal = 0;
    
    initialArray(array, size, arrayVal);
    // Succesfully inititalizes array to 0
    
    

    @endverbatim
 ************************************************************************/
 void initialArray( double array[], int size, int arrayVal )
 {
     int i;
     
     // for loops just do too much
     for(i=0; i<size; i++)
     {
         array[i] = arrayVal;
     }
 }
 
 /** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 * A double function that adds every value in an array and returns this 
 * value. It takes in 2 arguments, the array, and the size of the array.
 * (Only works on 1D arrays)
 *
 *  @param[in] array The array 
 *  @param[in] size The size of the array
 *  
 *  @returns A double value resulting in a sum of the array values
 * 
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    double array[5] = {0,1,0,1,6};
    int size = 5;
    int arraySum;
    
    arraySum = sumArray( array, size );
    // arraySum = 8
    
    

    @endverbatim
 ************************************************************************/ 
 double sumArray( double array[], int size )
 {
     int i;
     double ans = 0;
     
     // for loops are too usefull lol
     for(i=0; i<size; i++)
     {
         ans = (ans + array[i]);
     }
     return ans;
 }
 
 /** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 * A double function that adds every value in an array and returns this 
 * value. It takes in 2 arguments, the array, and the size of the array.
 * (Only works on 1D arrays)
 *
 *  @param[in] array The array 
 *  @param[in] size The size of the array
 *  
 *  @returns A double value resulting in a sum of the array values
 * 
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    double array[5] = {0,1,0,1,6};
    int size = 5;
    int arraySum;
    
    arraySum = sumArray( array, size );
    // arraySum = 8
    
    

    @endverbatim
 ************************************************************************/ 
 double averageArray( double array[], int size )
 {
     double sum;
     double ans;
     
     // I refrenced sumArray so i didnt have to write another for loop
     sum = sumArray( array, size );
     ans = (sum / size);
     
     return ans;
 }
 
 /** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 * A double function that finds the smallest value in the array
 * and returns the location of that value
 *
 *  @param[in] array The array
 *  @param[in] size The size of the array
 *  
 *  @returns A double value equal to the location of the samllest val
 * 
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    double array[5] = {2,1,0,1,6};
    int size = 5;
    int ans;
    
    ans = minLocation( array, size );
    //ans = 2
    
    

    @endverbatim
 ************************************************************************/ 
 double minLocation( double array[], int size )
 {
     /*   I set sum to array[0] and ans to 0 because it initializes the
          answer to to the first index of the array.                    */
     double sum = array[0];
     int i;
     double ans = 0;
     
     for(i=0; i<size; i++)
     {
         if( array[i] < sum )
         {
             ans = i;
             sum = array[i];
         }
     }
     return ans;
 }
 
 /** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 * A double function that finds the smallest value in the array
 * and returns that value
 *
 *  @param[in] array The array 
 *  @param[in] size The size of the array
 *  
 *  @returns A double value equal to the samllest val
 * 
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    double array[5] = {2,1,0,1,6};
    int size = 5;
    int ans;
    
    ans = minValue( array, size );
    //ans = 0
    
    

    @endverbatim
 ************************************************************************/ 
 double minValue( double array[], int size )
 {
     /*   I set val to array[0] to 0 because it initializes the
          answer to to the first index of the array.                    */
     double val = array[0];
     int i;
     
     for(i=0; i<size; i++)
     {
         if(array[i] < val)
         {
             val = array[i];
         }
     }
     return val;
 }
 
 /** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 * A double function that finds the largest value in the array
 * and returns that value's location
 *
 *  @param[in] array The array
 *  @param[in] size The size of the array
 *  
 *  @returns A double value equal to the largest val location
 * 
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    double array[5] = {2,1,0,1,6};
    int size = 5;
    int ans;
    
    ans = minValue( array, size );
    //ans = 4
    
    

    @endverbatim
 ************************************************************************/ 
 double maxLocation( double array[], int size )
 {
     /*   I set max and location to array[0] and ans to 0 because it
     initializes the answer to to the first index of the array.                    */
     double max = array[0];
     double location = 0;
     int i;
     
     for(i=0; i<size; i++)
     {
         if( array[i] > max )
         {
             location = i;
             max = array[i];
         }
     }
     return location;
 }
 
 /** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 * A double function that finds the largest value in the array
 * and returns that value
 *
 *  @param[in] array The array
 *  @param[in] size The size of the array
 *  
 *  @returns A double value equal to the largest val 
 * 
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    double array[5] = {2,1,0,1,6};
    int size = 5;
    int ans;
    
    ans = minValue( array, size );
    //ans = 6
    
    

    @endverbatim
 ************************************************************************/ 
 double maxValue( double array[], int size )
 {
     double max = array[0];
     int i;
     
     for(i=0; i<size; i++)
     {
         if( max < array[i] )
         {
             max = array[i];
         }
     }
     return max;
 }
 
 /** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 * A double function that counts the ammount of a specific value and returns
 * the ammount of that specific number.
 *
 *  @param[in] array The array
 *  @param[in] size The size of the array
 *  @param[in] choice The desired value to be serched for and counted
 *  
 *  @returns A double value equal to the sum of the addition 
 * 
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    double array[5] = {2,1,0,1,6};
    int size = 5;
    int ans;
    
    ans = minValue( array, size );
    //ans = 6
    
    

    @endverbatim
 ************************************************************************/ 
 double countIf( double array[], int size, double choice )
 {
     double ans = 0;
     int i;
     
     for(i=0; i<size; i++)
     {
        if( choice == array[i] )
        {
            ans = (ans + 1);
        }
     }
     
     return ans;
 }
 
 /** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 * A non valued function that sorts an array by ascending or decending 
 * order 
 *
 *  @param[in] array The array
 *  @param[in] size The size of the array
 *  @param[in] order Choice of ascending or decending order 
 *  
 *  
 * 
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    double array[5] = {2,1,0,1,6};
    int size = 5;
    string order = "ASC";
    
    mySort( array, size, order );
    //sorts array[] to { 0, 1, 1, 2, 6};
    
    

    @endverbatim
 ************************************************************************/
 void mySort( double array[], int size, string order )
 {
     int i;
     int j;
     int store;
     
     if( order == "ASC" )
     {
         for(i=0; i<size-1; i++)
         {
             for(j=0; j<size-1; j++)
             {
                 if(array[j] > array[ j+1 ])
                 {
                     store = array[j];
                     array[j] = array[ j+1 ];
                     array[ j+1 ] = store;
                 }
             }
         }
     }
     if( order == "DSC" )
     {
         for(i=0; i<size-1; i++)
         {
             for(j=0; j<size-1; j++)
             {
                 if(array[j] < array[ j+1 ])
                 {
                     store = array[j+1];
                     array[j+1] = array[ j ];
                     array[ j ] = store;
                 }
             }
         }
     }
 }
 
 /** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 * An integer valued function that finds a value in an array using 
 * the linear serch method and returns that values location
 *
 *  @param[in] array The array
 *  @param[in] size The size of the array
 *  @param[in] item The value to be serched for 
 *  
 *  
 * 
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    double array[5] = {2,1,0,1,6};
    int size = 5;
    double item = 1;
    int ans;
    
    ans = linearSerch( array, size, item );
    //ans == 1
    
    

    @endverbatim
 ************************************************************************/
 int linearSearch( double array[], int size, double item )
 {
     int i;
     for(i=0; i<size; i++)
     {
         if(array[i] == item )
         {
             return i;
         }
     }
     return -1;
 }
 
 /** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 * An integer valued function that finds a value in an array using 
 * the bianary serch method and returns that values location
 *
 *  @param[in] array The array
 *  @param[in] size The size of the array
 *  @param[in] item The value to be serched for 
 *  
 *  
 * 
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    double array[5] = {2,1,0,1,6};
    int size = 5;
    double item = 1;
    int ans;
    
    ans = bianarySerch( array, size, item );
    //ans == 1
    
    

    @endverbatim
 ************************************************************************/
 int binarySearch( double array[], int size, double item )
 {
     int left = 0;
     int right = (size - 1);
     int mid;
     
     while( left <= right )
     {
         mid = (( left + right ) / 2);
         
         if( array[mid] == item )
         {
             return mid;
         }
         
         
         else if( array[mid] < item )
         {
             left = (mid + 1);
         }
         else
         {
             right = ( mid - 1 );
         }
     }
     return -1;
 }
 
 /** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  A double function that finds the square root of a desired value
 *
 *  @param[in] val The desired value
 *  
 *  
 * 
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    
    double val = 9;
    double ans;
    
    ans = mySqrt( val );
    //ans == 3.0
    
    

    @endverbatim
 ************************************************************************/
 double mySqrt( double val )
 {
     int i = 0;
     double mid, midSqrd;
     double left = 0;
     double right = val;
     double error;
     
     //Pre set for val under 0 and val between 0 and 1
     if( val < 0 )
     {
         return 0;
     }
     if( val < 1 && val > 0 )
     {
         right = 1;
     }
     
     //Actual main loop finding the sqare root
     while( left <= right )
     {
         mid = ((left + right) / 2);
         midSqrd = pow( mid, 2 );
         
         //Checking if the mid^2 is close enough to ans to be ans
         error = (midSqrd - val);
         error = fabs(error);
         if( error < ERRORVALUE )
         {
             return mid;
         }
         
         //Moving bounds
         if( midSqrd <= val )
         {
             left = mid;
         }
         if( midSqrd >= val )
         {
             right = mid;
         }
         
         //This stops the loop after 5000 loops
         i = (i+1);
         if( i == ITERATIONMAX )
         {
             return mid;
         }
     }
    return 0;
 }
 
 /** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  A double function that finds the cube root of a desired value
 *
 *  @param[in] val The desired value
 *  
 *  
 * 
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    
    double val = 8;
    double ans;
    
    ans = mySqrt( val );
    //ans == 2.0
    
    

    @endverbatim
 ************************************************************************/
 double myCbrt( double val )
 {
     int i = 0;
     double mid, midCb;
     double left = 0;
     double right = val;
     double error;
     
     //Pre set for val under 0 and val between 0 and 1
     if( val < 0 )
     {
         return 0;
     }
     if( val < 1 && val > 0 )
     {
         right = 1;
     }
     
     //Actual main loop finding the cube root
     while( left <= right )
     {
         mid = ((left + right) / 2);
         midCb = pow( mid, 3 );
         
         //Checking if the mid^3 is close enough to ans to be ans
         error = (midCb - val);
         error = fabs(error);
         if( error < ERRORVALUE )
         {
             return mid;
         }
         
         //Moving bounds
         if( midCb <= val )
         {
             left = mid;
         }
         if( midCb >= val )
         {
             right = mid;
         }
         
         //This stops the loop after 5000 loops
         i = (i+1);
         if( i == ITERATIONMAX )
         {
             return mid;
         }
     }
    return 0;
 }

/** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  A double function that finds the log of a desired value using a desired base
 *
 *  @param[in] val The desired value
 *  @param[in] base The desired base 
 *  
 * 
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    
    double val = 10;
    double ans;
    
    ans = myLog( 10, 10 );
    //ans == 1
    
    

    @endverbatim
 ************************************************************************/
double myLog( double val, int base )
 {
    int i = 0;
    double mid, error;
    double baseHigh = 0;
    double left;
    double right = 1;
    
    while( baseHigh < val )
    {
        baseHigh = pow( base, right );
        if( baseHigh < val )
        {
            right = (right+1);
        }
    }
    left = (right-1);
    
    //Actual main loop finding the log val
    while( left <= right )
    {
         mid = ((left + right) / 2);
         baseHigh = pow( base, mid );
         
         //Checking if the base^high is close enough to val to be ans
         error = (baseHigh - val);
         error = fabs(error);
         if( error <= ERRORVALUE )
         {
             return mid;
         }
         
         //Moving bounds
         if( baseHigh <= val )
         {
             left = mid;
         }
         if( baseHigh >= val )
         {
             right = mid;
         }
         
         //This stops the loop after 5000 loops
         i = (i+1);
         if( i == ITERATIONMAX )
         {
             return mid;
         }
    }
    
    
    return 0;
 }
 
 /** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  A double function that finds the factorial of a desired val
 *
 *  @param[in] val The desired value
 *  
 *  
 * 
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    
    double val = 4;
    double ans;
    
    ans = factorial( val );
    //ans == 24
    
    

    @endverbatim
 ************************************************************************/
 double factorial( double val )
 {
     double valSub = val-1;
     while( 0 < valSub )
     {
         val = (val * valSub);
         valSub = valSub-1;
     }
     return val;
 }

/** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  A double function that finds the sin value for a desired input. Only
 *  works with radians.
 *
 *  @param[in] val The desired value in radians
 *  
 *  
 * 
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    
    double val = 1.5708;
    double ans;
    
    ans = mySin( val );
    //ans ~~ 1.0
    
    

    @endverbatim
 ************************************************************************/
 double mySin( double val )
 {
     int i;
     long double ans = 0;
     int pos = 1;
     double posFact;
     double dividedNumber, power;
     
     //     I had the loop itterate by 2 because i needed to add a value and 
     // then subtract one so its passing ans twice per loop 
     for(i=0; i<TERMS; i+=2)
     {         
         //Getting numbers for the division
         power = pow( val, pos );
         posFact = factorial( pos );
         dividedNumber = (power/posFact);
         
         //The division
         ans = ans + ( dividedNumber );
                  
         //Changing pos to work with the next value
         pos = pos + 2;
         
         //Getting numbers for the second devision
         posFact = factorial( pos );
         power = pow( val, pos );
         dividedNumber = (power/posFact);
         
         //The second division
         ans = ans - ( dividedNumber );

         //Changing the pos for the next loop
         pos = pos + 2;
     }
     return ans;
 }
 
 /** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  A double function that finds the cos value for a desired input. Only
 *  works with radians.
 *
 *  @param[in] val The desired value in radians
 *  
 *  
 * 
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    
    double val = 1.5708;
    double ans;
    
    ans = myCos( val );
    //ans ~~ 0.0
    
    

    @endverbatim
 ************************************************************************/
 double myCos( double val )
 {
     int i;
     //Ans is set to 1, and 1 is the first term summed 
     long double ans = 1;
     int pos = 2;
     double posFact;
     long double dividedNumber, power;
     //For loop runs through the second through the ninth term
     for(i=0; i<TERMS-2; i+=2)
     {
         
         posFact = factorial( pos );
         power = pow( val, pos );
         dividedNumber = ( power / posFact );
         ans = ans - dividedNumber;
         
         pos = pos + 2;
         posFact = factorial( pos );
         power = pow( val, pos );
         dividedNumber = ( power / posFact );
         ans = ans + dividedNumber;
         
         pos = pos + 2;
         
     }
     //The tenth term added
     posFact = factorial( pos );
     power = pow( val, pos );
     dividedNumber = ( power / posFact );
     ans = ans - dividedNumber;
     
     return ans;
 }
 
 /** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  A double function that converts an angle in degrees to an angle
 *  in radians
 *
 *  @param[in] val The angle in degrees
 *  
 *  
 * 
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    
    double val = 45;
    double ans;
    
    ans = myCos( val );
    //ans ~~ .7853981634
    
    

    @endverbatim
 ************************************************************************/
 double degToRad( double val )
 {
     double mult, ans;

     mult = PI/180;
     ans = val * mult;
     
     return ans;
 }
 
 /** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  A double function that finds the sin value for a desired input. Only
 *  works with degrees!
 *
 *  @param[in] val The desired value in degrees
 *  
 *  
 * 
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    
    double val = 90;
    double ans;
    
    ans = mySinD( val );
    //ans ~~ 1.0
    
    

    @endverbatim
 ************************************************************************/
 double mySinD( double val )
 {
     double rad, ans;
     
     rad = degToRad( val );
     ans = mySin( rad );
     
     return ans;
 }
 
 /** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  A double function that finds the cos value for a desired input. Only
 *  works with degrees!
 *
 *  @param[in] val The desired value in degrees
 *  
 *  
 * 
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    
    double val = 90;
    double ans;
    
    ans = myCosD( val );
    //ans ~~ 0.0
    
    

    @endverbatim
 ************************************************************************/
 double myCosD( double val )
 {
     double rad, ans;
     
     rad = degToRad( val );
     ans = myCos( rad );
     
     return ans;
 }
 
 /** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  A double function that finds the Tan value for a desired input. Only
 *  works with radians!
 *
 *  @param[in] val The desired value in radians
 *  
 *  
 * 
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    
    double val = .785398;
    double ans;
    
    ans = myTan( val );
    //ans ~~ 1.0
    
    

    @endverbatim
 ************************************************************************/
 double myTan( double val )
 {
     double ans;
     
     ans = (mySin(val) / myCos(val));
     return ans;
 }
 
 /** **********************************************************************
 *  @author Sarahlee Grace Maxwell
 *
 *  @par Description
 *  A double function that finds the Tan value for a desired input. Only
 *  works with degrees!
 *
 *  @param[in] val The desired value in degrees
 *  
 *  
 * 
 *  
 *           
 *
 *  @par Example
 *  @verbatim
    
    double val = 45;
    double ans;
    
    ans = myTanD( val );
    //ans ~~ 1.0
    
    

    @endverbatim
 ************************************************************************/
 double myTanD( double val )
 {
     double rad, ans;
     
     rad = degToRad( val );
     ans = myTan( rad );
     
     return ans;
 }