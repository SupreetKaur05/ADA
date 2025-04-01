# ADA
### 24-01-25
## LAB=1
## Practical 1
AIM = Peaks in 1D   
WORKING :    
1.Start     
2.Take the arrray as input.  
3.Pass the array as paramenter to the find peak function along with the number of elements.  
4. In the function find the mid element and compare it with adjacent left and right element check if it is greater than both of them.  
5. If the mid is the peak return it.  
6. if the left element is greater than mid than shift e to mid-1 .  
7. if right element is greater than shift s to mid+1.  
8. repeat the steps in loop till s<=e.  
9. print the answer.  

  
OUTPUT :  
{4,54,17,9,82,45,80}; 
The Peak is:54    


TIME COMPLEXITY =O(logn)  
SPACE COMPLEXITY = O(n)    

## Practical 2
AIM : Plot graph of insertion sort.    
WORKING:    
1. We start with second element of the array as first element in the array is assumed to be sorted.         
2. Compare second element with the first element and check if the second element is smaller then swap them.    
3. Move to the third element and compare it with the first two elements and put at its correct position    
4. Repeat until the entire array is sorted.   
5. Start timer berfore calling the function.   
6. Call the function and stop the timer after it completes.   
7. store the values of sizes of array in a length list and corresponding times in time list.  
8. Plot graph with the values of lengths and times using matplotlib.    


OUTPUT:     
![Insertion sort](https://github.com/user-attachments/assets/78e3625a-ef47-4159-8668-542bcc0b37d0)    


TIME COMPLEXITY =Best case: O(n), If the list is already sorted, where n is the number of elements in the list.    
Average case: O(n2), If the list is randomly ordered   
Worst case: O(n2), If the list is in reverse order        
SPACE COMPLEXITY =O(1), Insertion sort requires O(1) additional space, making it a space-efficient sorting algorithm.            

## Practical 3      
AIM : Plot  graph of Bubble sort.     
WORKING:       
1.We sort the array using multiple passes.After the first pass, the maximum element goes to end (its correct position).Same way,after second pass,the second largest element goes to second last position   
2.In every pass, we process only those elements that have already not moved to correct position. After k passes, the largest k elements must have been moved to the last k positions.  
3.In a pass,we consider remaining elements and compare all adjacent and swap if larger element is before a smaller element.If we keep doing this, we get the largest (among the remaining elements) at its correct position.     
4.Start timer berfore calling the function.   
5.Call the function and stop the timer after it completes.   
6.store the values of sizes of array in a length list and corresponding times in time list.  
7.Plot graph with the values of lengths and times using matplotlib.    

 
OUTPUT:    
![bubble](https://github.com/user-attachments/assets/5db257c1-87f1-4607-8201-ee46cfb2e57c)     


TIME COMPLEXITY =O(n2)   
SPACE COMPLEXITY: O(1)    

## Practical 3    
AIM : Plot  graph of Selection sort.     
WORKING:     
1.First we find the smallest element and swap it with the first element. This way we get the smallest element at its correct position.  
2.Then we find the smallest among remaining elements (or second smallest) and swap it with the second element.   
3.We keep doing this until we get all elements moved to correct position.   
4.Start timer berfore calling the function.    
5.Call the function and stop the timer after it completes.    
6.store the values of sizes of array in a length list and corresponding times in time list.  
7.Plot graph with the values of lengths and times using matplotlib.   


OUTPUT:   
![selection](https://github.com/user-attachments/assets/55032449-8b77-4e9a-b2c9-cc7b09c47560)   


TIME COMPLEXITY =O(n2)   
SPACE COMPLEXITY= O(1)   

## Practical 4  
AIM : Plot  graph of Merge sort.    
WORKING:    
1.Divide:  Divide the list or array recursively into two halves until it can no more be divided.    
2.Conquer:  Each subarray is sorted individually using the merge sort algorithm.    
3.Merge:  The sorted subarrays are merged back together in sorted order. The process continues until all elements from both subarrays have been merged.   
4.Start timer berfore calling the function.  
5.Call the function and stop the timer after it completes.  
6.store the values of sizes of array in a length list and corresponding times in time list.    
7.Plot graph with the values of lengths and times using matplotlib.   


OUTPUT:   
![merge](https://github.com/user-attachments/assets/6e193974-d701-499e-937c-62408fe86c55)   


TIME COMPLEXITY=  
Best Case: O(n log n), When the array is already sorted or nearly sorted.   
Average Case: O(n log n), When the array is randomly ordered.    
Worst Case: O(n log n), When the array is sorted in reverse order.   
SPACE COMPLEXITY= O(n), Additional space is required for the temporary array used during merging.   

## Practical 5   
AIM : Plot  graph of Quick sort.    
WORKING:     
1.Choose a Pivot: Select an element from the array as the pivot. The choice of pivot can vary (e.g., first element, last element, random element, or median).    
2.Partition the Array: Rearrange the array around the pivot. After partitioning, all elements smaller than the pivot will be on its left, and all elements greater than the pivot will be on its right. The pivot   is then in its correct position, and we obtain the index of the pivot.   
3.Recursively Call: Recursively apply the same process to the two partitioned sub-arrays (left and right of the pivot).   
4.Base Case: The recursion stops when there is only one element left in the sub-array, as a single element is already sorted.    
5.Start timer berfore calling the function.   
6.Call the function and stop the timer after it completes.   
7.store the values of sizes of array in a length list and corresponding times in time list.  
8.Plot graph with the values of lengths and times using matplotlib.  


OUTPUT:  
![Quicksort](https://github.com/user-attachments/assets/7f1754e6-442c-495a-b76e-6f6889aadfce)   


TIME COMPLEXITY =   
Best Case: (Ω(n log n)), Occurs when the pivot element divides the array into two equal halves.   
Average Case (θ(n log n)), On average, the pivot divides the array into two parts, but not necessarily equal.   
Worst Case: (O(n²)), Occurs when the smallest or largest element is always chosen as the pivot (e.g., sorted arrays).   
SPACE COMPLEXITY= O(n), due to recursive call stack    




# ACTIVITY SELECTION
1. Create a special queue that sorts activities by their finish times (earliest finish first).
2. Put all the activities into this queue, but sort them by their end times.
3. Print a message saying which activities will be selected.
4. Take the activity with the earliest finish time from the queue.
5. Print the start and end times of this first activity.
6. Remove this first activity from the queue.
7. While there are still activities in the queue:
    a. Take the next activity with the earliest finish time.
    b. If this activity doesn't overlap with the previous one (its start time is after or equal to the previous end time):
        i. Print the start and end times of this activity.
        ii. Remember the end time of this activity for the next comparison.
    c. Remove this activity from the queue.
8. Set up a list of example activities.
9. Run the selection process with the example activities.


# binary search
1.  **Start the Search:** Begin searching within a sorted array, given a target value (x), and the starting (low) and ending (high) indices of the search area.
2.  **Repeat Until Search Area is Empty:** Keep repeating the following steps as long as the "low" index is less than or equal to the "high" index.
3.  **Find the Middle:** Calculate the middle index of the current search area.
4.  **Check if Found:**
    * If the target value (x) is equal to the value at the middle index, you've found it! Return the middle index.
5.  **Adjust Search Area (Target is Greater):**
    * If the target value (x) is greater than the value at the middle index, the target must be in the right half of the search area. Update the "low" index to be one position to the right of the middle index.
6.  **Adjust Search Area (Target is Smaller):**
    * If the target value (x) is smaller than the value at the middle index, the target must be in the left half of the search area. Update the "high" index to be one position to the left of the middle index.
7.  **Not Found:** If the loop finishes without finding the target value, return -1 to indicate that it's not in the array.
8.  **Main Function Setup:**
    * Create a sorted array of numbers.
    * Define the target number to search for.
    * Calculate the size of the array.
    * Call the binary search function with the array, target, and the initial search range (from index 0 to the last index).
    * Check the return value from the search.
    * If the result is -1, print "Not found".
    * Otherwise, print "Element is found at index" followed by the returned index.

# knap sack
1. Sort the items by their profit in descending order, then calculate the maximum profit that can be obtained within the given capacity.
    a. Sort the profit array from highest to lowest, also reordering the weight array to match.
    b. Print the sorted profit and weight arrays.
    c. Calculate the maximum profit by adding items or fractions of items until the capacity is full.
    d. Print the maximum profit found.

2. Sort the items by their weight in ascending order, then calculate the maximum profit.
    a. Sort the weight array from lowest to highest, also reordering the profit array to match.
    b. Print the sorted profit and weight arrays.
    c. Calculate the maximum profit by adding items or fractions of items until the capacity is full.
    d. Print the maximum profit found.

3. Sort the items by their profit-to-weight ratio in descending order, then calculate the maximum profit.
    a. Calculate the profit-to-weight ratio for each item.
    b. Sort the items based on their ratios (highest to lowest), also reordering profit and weight arrays.
    c. Print the sorted ratios, profit, and weight arrays.
    d. Calculate the maximum profit by adding items or fractions of items until the capacity is full.
    e. Print the maximum profit found.

4. Call all three sorting and profit calculation methods (profit, weight, ratio).

5. Generate random weights and profits for a given number of items.
    a. Ask the user for the number of items and the capacity of the knapsack.
    b. Generate random weights and profits for each item.
    c. Print the generated weights and profits.

6. Time the execution of the knapsack function.
    a. Record the start time.
    b. Run the knapsack function.
    c. Record the end time.
    d. Calculate and print the execution time.


# Matix multiplication
1. Declare three 2x2 integer matrices: z (for the result), x (first input), and y (second input).
2. Declare integer variables i and j for loop counters, and m1 through m7 for intermediate calculations.
3. Initialize the input matrices x and y with specific values.
4. Print the first matrix (x) to the console.
    a. Loop through each row (i).
    b. Loop through each column (j) within the row.
    c. Print the element at x[i][j] followed by a space.
5. Print the second matrix (y) to the console.
    a. Loop through each row (i).
    b. Loop through each column (j) within the row.
    c. Print the element at y[i][j] followed by a space.
6. Calculate the seven intermediate values (m1 through m7) using the Strassen's algorithm formulas.
7. Calculate the elements of the result matrix z using the intermediate values (m1 through m7).
8. Print the product matrix (z) to the console, which is the result of the Strassen's matrix multiplication.
    a. Loop through each row (i).
    b. Loop through each column (j) within the row.
    c. Print the element at z[i][j] followed by a space.
9. End the program.

# quickHull
1. Define a 'Point' structure with integer x and y coordinates.

2. Define a function 'findSide' that determines which side of a line segment (defined by points 'a' and 'b') a point 'p' lies on.
    a. Calculate a value based on the coordinates of 'a', 'b', and 'p'.
    b. Return 1 if 'p' is on the left, -1 if on the right, and 0 if collinear.

3. Define a function 'lineDist' that calculates a value proportional to the distance between a point 'p' and a line segment 'a'-'b'.
    a. Calculate the absolute value of a similar calculation to 'findSide'.
    b. Return the calculated distance.

4. Define a recursive function 'quickHull' that finds the points on the convex hull.
    a. Find the point with the maximum distance from the line segment 'a'-'b' on the given side.
    b. If no such point is found:
        i. Check if 'a' and 'b' are already in the hull.
        ii. Add 'a' and 'b' to the hull if they are not already present.
        iii. Return.
    c. Recursively call 'quickHull' for the two line segments formed by the maximum distance point and 'a', and the maximum distance point and 'b'.

5. Define a function 'computeConvexHull' that finds the convex hull of a set of points.
    a. Find the leftmost and rightmost points in the input set.
    b. Call 'quickHull' twice, once for each side of the line segment connecting the leftmost and rightmost points.

6. In the 'main' function:
    a. Create an array of 'Point' structures with sample point data.
    b. Calculate the number of points.
    c. If the number of points is less than 3, print an error message and exit.
    d. Allocate memory for the convex hull points.
    e. Initialize the hull size to 0.
    f. Call 'computeConvexHull' to find the convex hull.
    g. Print the points that are part of the convex hull.
    h. Return 0 to indicate successful execution.


