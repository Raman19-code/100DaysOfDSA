class Solution:

  def nextGreatestLetter(self, letters: list[str], target: str) -> str:
    n = len(letters)
    for i in range(n):
      if letters[i] > target:
        return letters[i]

    return letters[0]