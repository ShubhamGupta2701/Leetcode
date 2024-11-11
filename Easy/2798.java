
// 2798. Number of Employees Who Meet tha Target

class Solution {
    public int numberOfEmployeesWhoMetTarget(int[] hours, int target) {
        // - step 1. find the length of hours (array)
        int n = hours.length;

        // - step 2. initialize an integer value = 0;
        int count = 0;

        // - step 3. iterate the array 0 to n-1
        for(int i=0;i<n;i++){
            // - step 4. for each iteration we check (hours[i] >= target)
            if(hours[i] >= target){
                // - step 5. if conditiom satisfied then value++ ( increment the value)
                count++;
            }
        }
        
        // - step 6. return value.
        return count;

    }
}

// psudeo code 
/*
 
 - step 1. find the length of hours (array)
 - step 2. initialize an integer value = 0;
 - step 3. iterate the array 0 to n-1
 - step 4. for each iteration we check (hours[i] >= target)
 - step 5. if conditiom satisfied then value++ ( increment the value)
 - step 6. return value.

 */