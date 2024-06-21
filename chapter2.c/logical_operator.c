#include<stdio.h>
// logical operator

// and :&& both conditions should be true for true output
// or : || either condition should be true for true output
//  not : !  opposite true = false, false=true.

int main(){
    //and: all conditions  true = true output 
    printf("%d \n",4>3 && 5>2);
    printf("%d \n",4>3 && 5<2);
    // or: any one condition true = true output
    printf("%d \n",4>3 || 5<2);
    printf("%d \n",4>3 ||5<2);

    // not:opposit , flip  ! 
//     printf("%d \n",!(5>4));
    printf("%d \n",!((5>4) && (3>4)));

// operator precedence  
// arithmetic and logical combine
// e.g  ((a+b-c+d*e) > (4*5*6) && ( 9/7*7))
/*   !
     *,/, %
     +,-
     <,<=,>,>=
     == , !=
     &&
     ||
     =
*/

     return 0;
}