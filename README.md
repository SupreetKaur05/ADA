# ADA
### 24-01-25
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



### 7-02-25
## Practical 6
Aim: Fractional Knapsack        
Working:    
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


OUTPUT:     

Enter number of items: 5         
Enter knapsack capacity: 100         

Generating Random Weights and Profits:        
Item 1 - Weight: 41, Profit: 97           
Item 2 - Weight: 53, Profit: 14         
Item 3 - Weight: 36, Profit: 71            
Item 4 - Weight: 62, Profit: 60       
Item 5 - Weight: 10, Profit: 56       

Sorting by Profit:         
Profits: 97 71 60 56 14        
Weights: 41 36 62 10 53          
Maximum Profit (Profit Sort): 205.47        

Sorting by Weight:   
Profits: 60 14 97 71 56    
Weights: 62 53 41 36 10    
Maximum Profit (Weight Sort): 174.33          

Sorting by Profit/Weight Ratio:    
Ratios : 5.60 2.37 2.02 1.94 0.26    
Profits: 56 71 97 60 14    
Weights: 10 36 41 62 53     
Maximum Profit (Ratio Sort): 211.22   

  
Time Complexity: O(nlogn)   
Space Complexity: O(n)   


### 7-02-25
## Practical 7
Aim: Binary search             
Working:     
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

OUTPUT:
Element is found at index 1      


Time Complexity: O(log n)        
Space Complexity: O(1) (iterative) or O(log n) (recursive)    



### 14-02-25
## Practical 8      
Aim: Activity Selection               
Working:            
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

OUTPUT:

Enter number of activities: 5     
Enter start and end time for each activity:   
Activity 1 - Start: 1   
Activity 1 - End: 2  
Activity 2 - Start: 3      
Activity 2 - End: 4       
Activity 3 - Start: 0       
Activity 3 - End: 6       
Activity 4 - Start: 5        
Activity 4 - End: 7       
Activity 5 - Start: 8     
Activity 5 - End: 9       

The activities selected in the following order:   
{1,2} {3,4} {5,7} {8,9}    


Time Complexity:          
- Sorting the activities takes O(n log n) time.     
- Selecting the activities takes O(n) time.          
- Overall Time Complexity: O(n log n).           

Space Complexity:          
- If using an iterative approach, the space complexity is O(1).           
- If storing the selected activities in a list, the space complexity is O(n).         



### 14-02-25
## Practical 9         
Aim: Matix multiplication by D&C            
Working:        
1. The program multiplies two square matrices using the divide and conquer method in C++.       
2.It asks the user to input the size of the matrices, which must be a power of 2.          
3.The user is then prompted to enter the elements of Matrix A.         
4.The user is prompted again to enter the elements of Matrix B.        
5.The program recursively divides both matrices into four equal-sized submatrices.           
6.It multiplies and adds the corresponding submatrices using divide and conquer logic.         
7.The four resulting submatrices are combined into a final product matrix.            
8.The program outputs the resulting product matrix to the console.           
9.All input and output are handled through standard console interactions.           

OUTPUT:                 
Enter matrix size (power of 2): 2 
Enter elements of Matrix A:  
1 2  
3 4  
Enter elements of Matrix B:  
5 6   
7 8    
Product matrix is:   
19 22     
43 50      

Time Complexity: O(n^3)          
Space Complexity: O(n^2).            




### 14-02-25
## Practical 10       
Aim: Quick hull         
Working:          
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


OUTPUT:
Enter number of points: 8   
Enter the points (x y):  
0 3   
1 1         
2 2          
4 4     
0 0      
1 2         
3 1        
3 3      
Points on the Convex Hull:   
(0, 3)  
(4, 4)   
(0, 0)    
(3, 1)    


Time Complexity:         
Worst Case: O(n^2)   
Average Case: O(n log n)   

Space Complexity:   
- O(n), for storing the points and the convex hull.     



### 21-02-25
## Practical 11    
Aim: Dijkstra Algorithm    
Working:         
1. Set the distance to the source node as 0 and all other nodes as infinity.   
   Mark all nodes as unprocessed.     
2. From the unprocessed nodes, select the node with the smallest tentative distance.   
   This is the node that will be processed next.    
3. For the selected node, update the distances to its neighboring nodes.   
   If the new calculated distance is smaller than the current distance, update it.    
4. Once the distances to all adjacent nodes of the current node are updated, mark the current node as processed (it is now part of the shortest path).    
6. Repeat the process until all nodes are processed.    
7. The final distance values for each node represent the shortest distance from the source node to that node.

OUTPUT:   
Vertex 0 distance from source: 0     
Vertex 1 distance from source: 10    
Vertex 2 distance from source: 15      
Vertex 3 distance from source: 17       


Time Complexity:          
- Using an adjacency matrix and a simple array: O(V^2)       
- Using an adjacency list and a binary heap (priority queue): O((V + E) log V)        
- Using an adjacency list and a Fibonacci heap: O(E + V log V)          

Space Complexity: O(V + E) (to store the graph, the distance array, and the priority queue)           


### 21-02-25
## Practical 12
Aim: Strassens matrix multiplication         
Working:            
1. Divide the input matrices A and B into four submatrices each:
   A = [[A11, A12], [A21, A22]]
   B = [[B11, B12], [B21, B22]]

2. Compute the following 7 products (using recursive matrix multiplication):
   P1 = A11 * (B12 - B22)
   P2 = (A11 + A12) * B22
   P3 = (A21 + A22) * B11
   P4 = A22 * (B21 - B11)
   P5 = (A11 + A22) * (B11 + B22)
   P6 = (A12 - A22) * (B21 + B22)
   P7 = (A11 - A21) * (B11 + B12)

3. Compute the final submatrices of the result C:
   C11 = P5 + P4 - P2 + P6
   C12 = P1 + P2
   C21 = P3 + P4
   C22 = P5 + P1 - P3 - P7

4. Combine the submatrices C11, C12, C21, and C22 to form the final matrix C:
   C = [[C11, C12], [C21, C22]]

5. If the matrix size is small enough (base case), perform normal matrix multiplication instead of recursion.            

Time Complexity: O(n^log2(7)) ≈ O(n^2.81)       

Space Complexity: O(n^2)      




### 28-02-25
## Practical 13
Aim: Kruskal's algorithm        
Working:         
1. Sort all the edges in the graph by their weight in non-decreasing order.

2. Initialize a disjoint-set (also called union-find) data structure to keep track of connected components.

3. Iterate through the sorted edge list:
   - For each edge, check if the two vertices of the edge belong to the same set using the union-find structure.
   - If they belong to different sets, add this edge to the MST and perform a union operation to combine the sets.

4. Repeat step 3 until you have added (n-1) edges to the MST, where n is the number of vertices.

5. The resulting set of edges forms the Minimum Spanning Tree (MST) of the graph.

Time Complexity: O(E log E) or O(E log V), where E is the number of edges and V is the number of vertices.          

Space Complexity: O(V + E)           


### 28-02-25
## Practical 14
Aim: Prim's algorithm         
Working:          
1. Initialize a set to keep track of the vertices included in the MST.

2. Initialize the key values of all vertices as infinity, except the starting vertex which is set to 0.

3. Add the starting vertex to the MST set.

4. While the MST set doesn't include all vertices:
   - Find the vertex with the minimum key value that is not yet in the MST set.
   - Add this vertex to the MST set.

5. For each adjacent vertex of the selected vertex:
   - If the edge weight is smaller than the current key value of the adjacent vertex, update the key value and the parent of the adjacent vertex.

6. Repeat steps 4 and 5 until all vertices are included in the MST.

7. The resulting edges selected form the Minimum Spanning Tree (MST) of the graph.     

8. The time complexity of Prim's algorithm is O(E log V) when using a priority queue, where E is the number of edges and V is the number of vertices.

Time Complexity:   
Using an adjacency matrix and a simple array: O(V^2)   
 Using an adjacency list and a binary heap (priority queue): O((V + E) log V)  
 Using an adjacency list and a Fibonacci heap: O(E + V log V) 

Space Complexity: O(V + E)      

OUTPUT:    
Edge    Weight    
0 - 1     2   
1 - 2     3  
0 - 3     6  
1 - 4     5      


### 7-03-25
## Practical 15
Aim:  Knapsack 01   
Working:      
1. Initialize a 2D array (dp) where dp[i][j] represents the maximum value that can be obtained with the first 'i' items and a weight limit of 'j'.

2. Set the base cases:
   - For all dp[0][j], the value is 0 (when there are no items).
   - For all dp[i][0], the value is 0 (when the weight limit is 0).

3. Iterate through all items (from 1 to n) and all weight capacities (from 1 to W):
   - For each item, check if the weight of the current item is less than or equal to the current capacity.
   - If it is, consider two options:
     a. Include the item: The value is the value of the current item plus the value for the remaining capacity after including the item.
     b. Exclude the item: The value is the same as the value without including the item.
   - Take the maximum of these two options.

4. Once all items and capacities are considered, the value at dp[n][W] will give the maximum value that can be achieved with the given weight limit.

5. The time complexity of this solution is O(n * W), where n is the number of items and W is the weight capacity of the knapsack.        


Time Complexity: O(n * W), where n is the number of items and W is the maximum weight capacity of the knapsack.       
Space Complexity: O(n * W)        


 ### 21-03-25
## Practical 16
Aim:  Countstages       
Working:        
1. Initialize a DP array where dp[i] represents the minimum number of stages required to reach the sink from node 'i'. 
   Set dp[sink] = 0 as no stages are required to reach the sink from itself.

2. Iterate over the nodes in reverse order (from the second last node to the first node):
   - For each node, check all possible adjacent nodes that can be reached from the current node (based on the adjacency matrix).
   - If an adjacent node has a valid dp value (i.e., it is reachable and has a minimum stage count), update dp[current_node] to the minimum value of dp[current_node] and dp[adjacent_node] + 1.

3. Continue the process for all nodes until you have computed the minimum number of stages required for each node.

4. The final value dp[source] will give the minimum number of stages required to reach the sink from the source.

5. If dp[source] is still infinity (or a very large value), it means there is no valid path from the source to the sink.            


Time Complexity: O(V + E), where V is the number of vertices and E is the number of edges.           
Space Complexity: O(V + E)            


### 21-03-25
## Practical 17
Aim:  Multistage graph(forward approach)     
Working:      
1. Initialize a DP array where dp[i] represents the minimum number of stages required to reach the sink from node 'i'.
   Set dp[source] = 0 because no stages are needed to reach the source itself.

2. Start iterating from the source node to the sink node (from left to right in the graph):
   - For each node, check all possible adjacent nodes that can be reached from the current node (based on the adjacency matrix).
   - If an adjacent node has a valid dp value (i.e., it is reachable), update dp[adjacent_node] to the minimum of dp[adjacent_node] and dp[current_node] + 1.

3. Continue the process until you have computed the minimum number of stages for each node.

4. The final value dp[sink] will give the minimum number of stages required to reach the sink from the source.

5. If dp[sink] is still infinity (or a very large value), it means there is no valid path from the source to the sink.        

Time Complexity: O(V + E)    
Space Complexity: O(V)   



### 21-03-25   
## Practical 18   
Aim:  Multistage graph(backward approach)               
Working:   
1. Initialize a DP array where dp[i] represents the minimum number of stages required to reach the sink from node 'i'.
   Set dp[sink] = 0 because no stages are needed to reach the sink itself.

2. Start iterating from the sink node to the source node (from right to left in the graph):
   - For each node, check all possible adjacent nodes that can be reached from the current node (based on the adjacency matrix).
   - If an adjacent node has a valid dp value (i.e., it is reachable), update dp[current_node] to the minimum of dp[current_node] and dp[adjacent_node] + 1.

3. Continue the process until you have computed the minimum number of stages for each node.

4. The final value dp[source] will give the minimum number of stages required to reach the sink from the source.

5. If dp[source] is still infinity (or a very large value), it means there is no valid path from the source to the sink.       

Time Complexity: O(n^2), where n is the number of nodes in the graph (since we are checking all possible edges)         

Space Complexity: O(V), for storing the dynamic programming table or the shortest path values for each vertex.   
