#ifndef GET_CONDITIONAL_PROBABILITY_H
#define GET_CONDITIONAL_PROBABILITY_H

/**
* Returns conditional probability of $A given $B and $Data.
* $Data is an indexed array.  Each element of the $Data array 
* consists of an A measurement and B measurment on a sample 
* item.
*/

#include <iostream>

using namespace std;

double get_conditional_probability(int A, int B, int data);

#endif
