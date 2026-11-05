from collections import defaultdict

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dic = defaultdict(list)
        for el in strs:
            key = ''.join(sorted(el))
            dic[key].append(el)
        return list(dic.values())
