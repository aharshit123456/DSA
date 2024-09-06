# Striver's SDE Sheet

30 Days

## Array

### Day 1

#### **P1. Set Matrix Zeroes**

Bruteforce Solution:

1. Find all the 0 elements in the given matrix and store their positions in an array like this:
   [[i0,j0],[i1,j1],[i2,j2]...[ik,jk]]

2. Traverse through the matrix and set 0 for all $$a_{i_{k}x} \forall x \in [0,m]$$ and all $$a_{yj_{k}} \forall y \in [0,n]$$

Psuedocode:

```pseudocode
setZeroes(matrix, matrixSize, ColSize)
    int arr1[];
    int counter;
    int rowSize = matrixSize/ColSize
    for i in range(rowSize):
        for j in range(colSize):
            if matrix[i][j] == 0 :
                int arr1[counter] = [i,j]
                counter++

    for k in range(counter):
        for j in range(colSize):
            a[k][j] = 0;
        for i in range(rowSize):
            a[i][k] = 0;
```

```c
void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int arr1[20];
    for(int i =0; i< matrixSize/matrixColSize ; i++){
        for(int i =0; i< matrixSize/matrixColSize ; i++){

        }
    }
}

```

#### **P2. Pascal's Triangle**

Using Binomial formula:
$$(_{k}^{n}) = n!/(k!(n-k)!)$$

numRows <= 30

pseudocode:

```py
def generate(self, numRows):
    pascal = [numRows]
    for i in range(numRows):
        for j in range(i):
            if i == 0:
                pascal[0] = 1
            else:
                pascal[i][j] = pascal[i-1][j]+pascal[i-1][j+1]

    return pascal
```
