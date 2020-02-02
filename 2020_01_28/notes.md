# Arrays
An array is a collection of homogenous elements. That means only integer type
data can be stored in an integer array.

It also follows the *ordered sequence*.

Two types:
1. One-dimensional Array
2. Multi-dimensional Array

## 1-D Array
### Syntax for array declaration
`datatype array_name[size_of_array];`

### Example:
`int arr[10];`
This means 10 integer type datas can be stored into this array.

> Array index always start from `0` and ends at `size - 1`
Lower bound : `0`
Upper bound : `size - 1`

### Initialization
`int arr[10] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };`
OR
```
arr[0] = 10;
arr[1] = 11;
```

### Accessing
`printf("%d", arr[3]);`
OR
```
for (int i=0; i<10; i++)
    printf("%d\n", arr[i]);
```


Q1. WAP to take 5 integers as an input and print these 5 elements.

Q2. WAP to take 10 integers as an input and print them in reverse order.

Q3. WAP to add 10 integers using array.

Q4. WAP to take n number of inputs and try to find all even numbers among them
    and store them in a separate array.
