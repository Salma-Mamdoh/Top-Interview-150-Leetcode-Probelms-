from typing import List

class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        n = len(board)
        m = len(board[0])

        # Check each row
        for i in range(n):
            filtered_row = [cell for cell in board[i] if cell != "."]
            if len(filtered_row) != len(set(filtered_row)):
                return False

        # Check each column
        for j in range(m):
            filtered_column = [board[i][j] for i in range(n) if board[i][j] != "."]
            if len(filtered_column) != len(set(filtered_column)):
                return False

        # Check each 3x3 sub-box
        for box_row in range(3):
            for box_col in range(3):
                sub_box = []
                for i in range(3):
                    for j in range(3):
                        cell = board[box_row * 3 + i][box_col * 3 + j]
                        if cell != ".":
                            sub_box.append(cell)
                filtered_sub_box = [cell for cell in sub_box if cell != "."]
                if len(filtered_sub_box) != len(set(filtered_sub_box)):
                    return False

        return True
