// standard library  fn :  
// eg  math.h   --> pow(x,n);

// string  library : 
// <string.h>

// 1 . strlen(str) 
// count total no of character except '\0';



#include<stdio.h>
#include<string.h>

// int main(){
//     char str[]= "asheesh r";
//     printf("%u",strlen(str));
//     return 0;
// }



// 2. strcpy(newstr ,oldstr)
// copy value of old string to new string.

// int main(){
//     char str1[] ="monky";
//     char str2[] ="monky D Luffy";
//     printf("%s \n",strcpy(str1,str2));
    
//     puts(str1);
//     return 0;

// }

// 3.  strcat(firststr ,secstr)          // first string size must be   >= str1 + str2
// concitinate fist string with second  string 

// void main(){
//     char str1[100] ="monky";
//     char str2[] ="monky D Luffy";
//     printf("%s \n",strcat(str1,str2)); 
// }


/*
//4 strcmp(firstr ,  secstr)  compare to strings and return a value  and return integer value . 
 1 > string  equal =  0 ;
2 > positive  -- >  firstr > secstr ( ASCII);

str1 = "banana"  str2 = "apple"      in ascii vALUE if b =66  , a= 65  i.e  b > a   66-64 = 1   +ve
chech first letttern first if both have same first letter then compare sec letter of string of boh string . 
 +ve
3 > . negative  -- >  firstr <  secstr ( ASCII);
*/
void main(){
    char str1[100] ="apple";
    char str2[] ="bananna";
    printf("%d \n",strcmp(str1,str2));   //-ve that is   65 -66 = -1
    printf("%d \n",strcmp(str2,str1));   //+ve that is   66 -65 = -1
}


