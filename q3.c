#include<stdio.h>
void main(){
    int i=1,j=11;
for (int m = 10; m > 0; --m){
    for (int n = m; n > 1; --n)
    printf("%d ", m + n, i++);
printf("\n");
}
}
// Output- 9*5
// The first printf executes 45 times
// 20 19 18 17 16 15 14 13 12 
// 18 17 16 15 14 13 12 11
// 16 15 14 13 12 11 10
// 14 13 12 11 10 9
// 12 11 10 9 8
// 10 9 8 7
// 8 7 6
// 6 5
// 4
//
// The second printf executes 10 times
// The last value isn't displayed
