/* 	Minimal for-loop cycle code
	Author Stephen Lawson:
	Git: UncleSte007
	Date 01/12/2024
	Apple clang version 16.0.0 (clang-1600.0.26.4)
	Target: x86_64-apple-darwin24.1.0
	Thread model: posix
*/

#define y end-abs(ya)
#include <stdio.h>
#include <stdlib.h>

int step = 1;
int start = 20;
int end = 200;
int range = end - start;
int ya;


int main(){
    
    for(ya = -range; ya <= range; ya += step) // ya: -255...0...+255
    {        
        printf("value: %d\n", y);					//y: 0...255...0
	    //other code goes here
	    //....
	    //....
    }    
    return 1;
}
//TODO: 1: allow fractions for step variable
//	2: allow negative range, start and end values
