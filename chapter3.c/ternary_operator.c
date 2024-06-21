// conditional operator
//1. ternary

// condition ? doSommething if TRUE: doSomething if FALSE;
#include<stdio.h>
int main(){
    // int age;
    // printf("enetr age:");
    // scanf("%d",&age);
    // age>=18 ? printf("adult \n"):printf("not adult \n"); }

//2. switch :1. any order
         //  2. nested switch are allowed(switch insise switch)

/*switch(number: 1,2,3./ character :'a' 'b' 'c'...){
case c1://do something
    break;
case c2://do something
    break;  
case c3://do something
    break;  
default://do something
} */
    int day;
    printf("enter  day(1-7):");
    scanf("%d \n", &day);

switch(day)
    {

    case 1  : printf("monday \n");
        break;
    case 2  :printf("tuesday \n");
        break;
    case 3  :printf("wednesday \n");
        break;
    case 4  :printf("tuesday \n");
        break;
    case 5  :printf("friday \n");
        break;
    case 6  :printf("saturday \n");
        break;
    case 7  :printf("sunday \n");
        break;
    default :printf("not valid day \n");
                    
    }
    return 0;
}
