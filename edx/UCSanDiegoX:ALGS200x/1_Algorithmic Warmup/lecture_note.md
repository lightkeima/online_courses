# Fibonacci 

## naive algorithm

FibRecurs(n) 

```
if n <= 1
	return n
else:
	return FibRecurs(n-1) + FibRecurs(n-2)
```

## better one

FibList(n) 

```
create an array F[0..n]
F[0] <- 0
F[1] <- 1
for i from 2 to n:
	F[i] <- F[i - 1] + F[i - 2]
return F[n]
```
