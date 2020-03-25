# Recursion
## The Fibonacci sequence:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
Example function:
```c
int fibonacci(int n) {
    if (n == 0 || n == 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
```

## Triangle numbers
1, 3, 6, 10, 15, 21, 28, 36, 45, ...
Example function:
```c
int sum(int n) {
    if (n == 0)
        return n;
    return n + sum(n-1);
}
```

## Factorial
Example function:
```c
int fact(int n) {
    if (n == 0)
        return 1;
    return n*fact(n-1);
}
```

## Count digits
Example function:
```c
int count_digits(int n) {
    static int count = 0;

    if (n == 0) return count;
    count++;
    count_digits(n/10);
}
```

## Sum of Even Numbers in an Array
Example function:
```c
void sum_of_even(int* a, int n, int sum) {
    if (n < 0) return sum;
    return sum_of_even(a, n-1, sum + !(a[n] & 1));
}
```

# Searching
## Sequential / Linear Search
> can be used in any array
Example function:
```c
int index_of(int* a, int n, int elem) {
    for (int i=0; i<n; i++) {
        if (a[i] == elem)
            return i;
    }
    
    printf("%d not found in given array\n", elem);
    return -1;
}
```

## Binary Search
```c
int index_of(int* a, int n, int elem) {
    int l=0, m, u=n-1;
    
    while (l <= u) {
        m = (l + u) / 2;
        if (a[m] == elem)
            return m;
        else if (a[m] < elem)
            l = m + 1;
        else
            u = m - 1;
    }

    return -1;
}
```
