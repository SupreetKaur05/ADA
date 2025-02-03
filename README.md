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
AIM : Time complexity of insertion sort.  
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

