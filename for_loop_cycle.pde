/* 	Minimal for-loop cycle code
	Author Stephen Lawson:
	Git: UncleSte007
	Date 30/11/2024
	Processinig version 4.3
	Java 2SE product 1.8.0_431
*/

int step = 1;
int range = 255;
int x = 0;

void setup(){
    
    size(640, 480);
    background(70);
    noLoop();
    
}

void draw()
{
    strokeWeight(2);
    stroke(128, 0, 234);
    
    for(int y = -range; y!= range; y += step)
    {
        y = abs(y);
        point(x, y);
        x++;
    }
    
}
