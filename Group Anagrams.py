class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        arg=defaultdict(list)
        for s in strs:
            sorted_str=' '.join(sorted(s))
            arg[sorted_str].append(s)
            
        return list(arg.values())
