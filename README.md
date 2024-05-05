# LeetCode
Here i am going to store the logic behind solving particular leetcode problems

## Problem Types
Leetcode has 3 types of difficulty
- Easy
- Medium
- Hard

## Easy
- Square Root ( Problem 69 )
  ```
  In this we know the final answer can not be more than the half of the actuall number in any case
  so first we create the edge cases like if the value is 0 then return 0, if the value is 1,2,3 return 1
  after that we run a loop for half of the value (x/2) and check if the square of each iteration i.e. i*i is equall to the value (x) if true then we store that iteration number and break from loop
  else we check if the square of iteration number is greater then actuall number i.e. i*i > x if this is true then we store  i-1
  now return the final answer
  ```
- Remove Element ( Problem 27 )
  ```
  In this we have given some constraints like the value to remove should not be more than 50 thats why we create an EDGE case for it
  after that we create a temp vector and filter the main vector so that all the non matching elements are push to temp vector
  this itteration runs for the length of the main vector
  after this, we delete all the elements from main vector using another loop
  and then we calculate the length of the temp vector which is the needed answer
  but before giving the ans we have to insert all the non matching elements (temp vector elements) in the main vector because it's the needed format
  after doing all these things finally we return our integer value which is the number of non matching elements
  ```
- Missing Element ( Problem 268 )
  ```
  In this what we can do firstly we can sort our array and then we run a loop for n times
  Now check if the i (iteration number) is not equall to element of same index then we store that index in a variable and return it
  And if this condition fails (else loop) then we increment our index
  ```

- Remove element from linked list ( Problem 203 )
  ```
  In this Problem, we have to constanly check wheather the node val is the target value which we have to delete or the next node is null value.
  If the val of current node is equall to target and next node is not tail (empty) then we can copy the value of next node to the current one and current next is equall to next node next // node->next = node->next->next
  If the current node is target and next node is tail then we can just change the value of current node to null
  ```

- Continue here and add about new problems