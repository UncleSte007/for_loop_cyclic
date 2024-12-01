/* 	Minimal for-loop cycle code
	Author Stephen Lawson:
	Git: UncleSte007
	Date 30/11/2024
	Processinig version 4.3
	Java 2SE product 1.8.0_431
*/

int step = 1;
int range = 255;
int y, yabs;
int x = 0;

void setup(){
    
    size(640, 480);
    background(70);
    strokeWeight(2);
    stroke(0);
    
    for(yabs = -range; yabs <= range; yabs += step)
    {y = range-abs(yabs);
        
        point(x, y);
        x++;
    }
    
        noLoop();
    
}

void draw()
{
    
    
}
