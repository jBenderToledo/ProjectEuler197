// Jonathan Bender
// Project Euler problem 197 - Investigating the behaviour of a recursively defined sequence
//
//
//                 (                  2 )
//                 (  30.403243784 - x  )                            12        
// Let f(x) = FLOOR( 2                  ) - Find u  + u    for n = 10   by defining u  = -1, u  = f(u   )
//                                                n    n+1                           0        n      n-1
//
// Give an answer with precision of 9 decimal places.                                                       

#include "pch.h"
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    // The below block is the code that I used to print out the elements of the series produced by the given problem.
    // I used it with the following idea in mind: as u_n increases in value, u_{n+1} would invariably decrease in value and
    // vice versa would hold at the point of decrease, since x^2 is always positive. So, it's likely that the sequence
    // passed by the problem is effectively an alternation of two different convergent sequences.
    //
    // My immediate idea was to print the entire sequence one element at a time and see if anything comes to mind.

    int LIMIT = 1000;

    cout.precision(12);                                      // Tell cout to format doubles to 12 significant figures
                                                             // for explicit accuracy.
    double currentResult = -1.0, newResult = 0;

    cout << "u0 =\t -1" << endl;
    for (int sequenceIndex = 1; sequenceIndex <= LIMIT; sequenceIndex++)
    {
        newResult = floor( pow(2.0, 30.403243784 - pow(currentResult, 2.0)) ) * pow(10.0, -9.0); // u_n = f(u_{n-1})
        cout << "u" << sequenceIndex << " =\t" << newResult << endl;

        currentResult = newResult;
    }

    newResult = floor(pow(2.0, 30.403243784 - pow(currentResult, 2.0))) * pow(10.0, -9.0);

    cout << endl << "..." << endl << endl;

    // And so, I found that the "even" half of the sequence would tend towards 1.029461839.
    // Likewise, the "odd" half of the sequence would tend towards 0.681175878.

    cout.precision(10);                                                    // Tell cout to format doubles to 10 significant figures.

    cout << "           12 " << endl;
    cout << "For n == 10  :" << endl << endl;

    cout << "u    + u  = approx. " << (currentResult + newResult) << endl; // The answer is ( should be ) 1.710637717.
    cout << " n+1    n " << endl;
}
