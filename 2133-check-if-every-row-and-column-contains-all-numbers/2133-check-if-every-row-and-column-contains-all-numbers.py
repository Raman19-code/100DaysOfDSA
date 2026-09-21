class Solution:
    def checkValid(self, matrix: list[list[int]]) -> bool:
        n=len(matrix)
        expected_set=set(range(1,n+1))
        for i in range(n):
            row_set=set()
            col_set=set()
            for j in range(n):
                row_set.add(matrix[i][j])
                col_set.add(matrix[j][i])
            if row_set!=expected_set or col_set!=expected_set:
                return False
        return True
        