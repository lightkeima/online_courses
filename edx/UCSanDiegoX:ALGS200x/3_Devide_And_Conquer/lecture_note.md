# Devide and Conquer

* Break into non-overlapping subproblems of the same type
* Solve subproblems
* Combine results

# Searching 

## Linear Search


LinearSearch(A,low,high,key)
```
if high < low:
	return NOT_FOUND
if A[low] = key:
	return low
return LinearSearch(A,low+1,high,key)
```

A **Recurrence relation** is an equation recursively defining a sequence of values

## Binary Search
BinarySearch(A,low,high,key)
```
if high < low:
	return low -1
mid <- [low + (high - low)/2]
if key = A[mid]:
	return mid
else if key < A[mid]:
	return BinarySearch(A,low,mid - 1, key)
else:
	return BinarySearch(A,mid+1,high,key)
```
