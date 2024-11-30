I was intrigued with the Arduino.cc example of a for-loop code snippet which counted up, switched direction and then counted down using just the one for statement.
It seemed an excellent idea, but there are a few direction checks in the code which I wanted to minimise or dispense with entirely.
So, I started with the philosophy that to change direction a specific test is needed and then a redefinition of the direction variable to a negated value ie. + to -.
To get rid of this code I could count from a negative initial value in the positive direction, not change the direction, but remove the negative sign with abs(var) just after the for initialisation line, then use the index as normal.
Of course if you want to repeat the up-down loop, you have to add the necessary code to manage that (as is always the case anyway).
