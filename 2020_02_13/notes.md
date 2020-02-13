# Two - Dimensional Array (MATRIX)
Syntax:
```c
datatype name[row_size][column_size];
```

Example:
```c
int a[10][5];
```
```
       0 1 2
    0[ 1 2 3 ]
a = 1[ 4 5 6 ]
    2[ 7 8 9 ]

a[0][0] = 1
 [0][1] = 2
a[2][2] = 9
```

Input:
```c
printf("Enter row_size and column_size");
scanf("%d %d", &m, &n);

for (int i=0; i<m; i++)
{
    for (int j=0; j<n; j++)
    {
        scanf("%d", a[i][j]);
    }
}
```

Display:
```c
for (int i=0; i<m; i++)
{
    for (int j=0; j<n; j++)
    {
        printf(" %d ", a[i][j]);
    }
    printf("\n");
}
```

Q1. WAP to input this data into a matrix and display this data


# Character Array
```c
char a[100] = "Hello World";
```

1. calculate length of string.
2. change the string into lowercase.
3. Reverse the string
4. Compare two strings
