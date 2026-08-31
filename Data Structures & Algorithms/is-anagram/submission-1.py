class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        a={}
        for i in s:
            if i not in a:
                a[i]=1
            else:
                a[i]+=1

        for i in t:
            if i not in a:
                return False
            else:
                a[i]-=1
        
        for i in a:
            if a[i]!=0:
                return False
        return True

            


            
        