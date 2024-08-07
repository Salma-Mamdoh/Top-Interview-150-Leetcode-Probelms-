class Solution:
    def reverseBits(self, n: int) -> int:
          # Convert to binary string, strip the '0b' prefix, and fill to 32 bits
        binary_representation = bin(n)[2:].zfill(32)
        
        # Reverse the binary string
        reversed_binary = binary_representation[::-1]
        
        # Convert the reversed binary string back to an integer
        return int(reversed_binary, 2)
