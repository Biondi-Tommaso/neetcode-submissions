class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dic = {}

        for el in strs:
            key = ''.join(sorted(el))  
            if key in dic:
                dic[key].append(el)
            else:
                dic[key] = [el]
        
        res = []
        for key in dic:
            res.append(dic[key])
        return res