#!/usr/bin/env python
# coding: utf-8

# In[1]:


def hashtable(arrayofnum, mult, addnum, mod):
    ansarray = []
    for i in arrayofnum:
        ans = ((mult*i) + addnum) % mod 
        ansarray.append(ans)
    return ansarray

array=[12, 44, 13, 88, 23, 94, 11, 39, 20, 16, 5]
hashtable(array, 3, 5, 11)


# In[12]:


def doublehash(key, subnum, mod):
    ans = subnum - (key % mod)
    return ans
    
doublehash(88, 7, 7)

# In[ ]:




