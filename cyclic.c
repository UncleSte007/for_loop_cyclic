/* 	Minimal for-loop cycle code
	Author Stephen Lawson:
	Git: UncleSte007
	Date 21/08/2026
	Apple clang version 21.0.0 (clang-2100.0.123.102)
	Target: arm64-apple-darwin25.5.0
	Thread model: posix
*/

#define y end-abs(ya)
#include <stdio.h>
#include <stdlib.h>

int main(){
    
	int step = 1;
	int start = 0;
	int end = 255;
	int range = end - start;
	int ya;


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
