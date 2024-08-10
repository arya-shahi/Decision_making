# Decision Making
Experiment_number_5

## AIM - 
To use decision making If-else.
## Software Used - 
VS Code
## Theory
Decision-making is a concept that allows the execution of different code paths based on conditions. The if and else statements are primary constructs used for decision-making in  C++. These constructs enable the implementation of conditional logic. They help us check whether a condition is true and if it is, then the block inside the same is executed.  

## Algorithm

1. **Start**

2. **Initialize**:
   - Declare two integer variables `num1` and `num2`.

3. **Input**:
   - Ask the user to enter the X-axis coordinate and store it in `num1`.
   - Ask the user to enter the Y-axis coordinate and store it in `num2`.

4. **Decision Making** (using if-else statements):
   - **If** `num1 > 0` and `num2 > 0`:
     - Print "The point is in the first quadrant."
   - **Else If** `num1 < 0` and `num2 > 0`:
     - Print "The point is in the second quadrant."
   - **Else If** `num1 < 0` and `num2 < 0`:
     - Print "The point is in the third quadrant."
   - **Else If** `num1 > 0` and `num2 < 0`:
     - Print "The point is in the fourth quadrant."
   - **Else If** `(num1 == 0` and `num2 != 0)` **or** `(num1 != 0` and `num2 == 0)`:
     - Print "The point is on the axis."
   - **Else**:
     - Print "The point is at the origin."

5. **End**

**Conclusion**

In this experiment how to use conditions in programs
