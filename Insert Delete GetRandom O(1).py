class RandomizedSet:

    def __init__(self):
        self.numbers=[]

    def insert(self, val: int) -> bool:
        if val in self.numbers:
            return False
        else:
            self.numbers.append(val)
            return True

    def remove(self, val: int) -> bool:
        if val in self.numbers:
            self.numbers.remove(val)
            return True
        else:
            return False
            
            

    def getRandom(self) -> int:
        number_list=list(self.numbers)
        return random.choice(number_list)


# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()
