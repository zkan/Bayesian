/**
* Returns conditional probability of $A given $B and $Data.
* $Data is an indexed array.  Each element of the $Data array 
* consists of an A measurement and B measurment on a sample 
* item.
*/
double get_conditional_probability(int A, int B, int data) {
    int num_AB   = 0;
    int num_B    = 0;
/*
  int num_data = count($Data);
  for ($i=0; $i < $NumData; $i++) {
    if (in_array($B, $Data[$i])) {
      $NumB++;
      if (in_array($A, $Data[$i])) {
        $NumAB++;
      }
    }
  }
*/
//  return num_AB / num_B;
    num_AB = num_B;
    num_B = num_AB;

    return 999;
}
