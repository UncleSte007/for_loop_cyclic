/* 	Minimal for-loop cycle code
	Author Stephen Lawson:
	Git: UncleSte007
	Date 01/12/2024
	Apple clang version 16.0.0 (clang-1600.0.26.4)
	Target: x86_64-apple-darwin24.1.0
	Thread model: posix
*/

#define y range-abs(yabs)
#include <stdio.h>
#include <stdlib.h>

int step = 1;
int range = 255;
int yabs;


int main(){
    
    for(yabs = -range; yabs <= range; yabs += step) // yabs: -255...0...+255
    {        
        printf("value: %d\n", y);					//y: 0...255...0
    }    
    return 1;
}

