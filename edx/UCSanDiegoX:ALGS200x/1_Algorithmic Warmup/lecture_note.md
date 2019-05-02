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

# Greatest Common Divisor

## Naive algorithm

Finction NaiveGCD(a,b)

```
best <- 0
for d from 1 to a + b:
	if d|a and d|b:
		best <-d
return best
```

## Euclidean Algorithm

EuclidGCD(a,b)
 
```
if b = 0:
	return a
a' <- the remainder when a is divied by b
return EclidGCD(b,a')
```
