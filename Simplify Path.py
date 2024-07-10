class Solution:
    def simplifyPath(self, path: str) -> str:
        parts=path.split('/')
        cleaned=list(filter(None,parts))
        res=['/']
        for i in cleaned:
            print(res)
            if i=="..":
                if len(res)>1:
                    res.pop()
                    print('here')
                else:
                    continue
            elif i==".":
                continue
            else:
                i+='/'
                res.append(i)
        
        if len(res)>1 :
            res[-1]=res[-1][0:-1]
            
        return ''.join(res)
            
                
