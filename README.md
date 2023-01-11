# Vending Machine - Finite State Machine
## Finite State Machine
In here, we will see how the FSM works in the Vending machine. \
The FSM image can be found here:
!["FSM"](images/fsm.png)

## Table
Here's the truth table for the FSM: \
!["Table"](images/table.jpg)

## Karnough Map and The derived Boolean equations
Here's the Karnough map and the derived boolean equations for the FSM: \
!["Kmap"](images/KMapBoolean.png)

## Running the Code
Disclaimer: Make sure your terminal's space is large. Otherwise, the vending machine won't be fully displayed.\
This is how to run the code : 
```
make run
./main.o
```

After that, this will appear: \
IDLE State: \
!["First"](images/first.png)
\
Choice 0 or others = Back to the IDLE state\
Choice 1 = Go to CONFIRM State
\
CONFIRM State:

!["Second"](images/second.png) \
Choice 0 or others = Go to FAILED state\
Choice 1 = Go to SUCCESS state

If Success, SUCCESS State: \
!["Success"](images/third.png)
\
Lastly, it will go back to the IDLE State no matter the choices are.
\
If Failed, FAILED State:\
!["Failed"](images/fourth.png)\
Lastly, it will go back to the IDLE State no matter the choices are.

