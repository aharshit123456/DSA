def generate(numRows):
    """
    :type numRows: int
    :rtype: List[List[int]]
    """
    pascal = []
    for i in range(numRows):
        row = [1] * (i+1)
        for j in range(1,i):
            row[j] = pascal[i-1][j-1] + pascal[i-1][j]
        pascal.append(row)

    return pascal


result = generate(5)
for row in result:
    print(row)