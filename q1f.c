#include<stdio.h>
void main(){
    float x = 1.1 ;
while ( x == 1.1 ) {
    printf ( "%f\n", x ) ;
    x = x - 0.1 ;
}
}
// Output-
// No output is shown because after the first condition, the value of x decreases due to which the conditions didn't satisfy
// and comes out of the loop without printing anything.
