I was intrigued with the Arduino.cc example of a for-loop code snippet which counted up, switched direction and then counted down using just the one for statement.
It seemed an excellent idea, but there are a few direction checks in the code which I wanted to minimise or dispense with entirely.
So, I started with the philosophy that to change direction a specific test is needed and then a redefinition of the direction variable to a negated value ie. + to -.
To get rid of this code I could count from a negative initial value in the positive direction, not change the direction, but remove the negative sign with abs(var) just after the for initialisation line, then use the index as normal.
Of course if you want to repeat the up-down loop, you have to add the necessary code to manage that (as is always the case anyway).

Use:
The for statement has been preserved as much as possible, so the only requirement is that 'range' needs to be set to your maximum positive integer, '-range' represents an initial value of 0, as the first line of the for function inverts the negated range value, giving a 0 as the initiator.
The sequence of integers goes: 0 to +range, then +range to 0. (0, 1, 2.....253, 254, 255, 254, 253.....2, 1, 0)
You must #define a separate loop reference to the one which you want to use as the variable in the function body i.e. 'yabs' is the counter in this case and 'y' is the #defined reference used for the counted value.
