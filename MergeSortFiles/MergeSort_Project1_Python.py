#!/usr/bin/env python
# coding: utf-8

# In[9]:


#def numbersfromfile(numberfile):
    #open file with the numbers we'll need to sort
    #fnum = open(numberfile, "r")
    #create empty list to put the numbers in
    #arrayfromfile = []
    #iterate through the file to get all the numbers we need...
    #...into the new array we created
    #for line in fnum:
        #get rid of the newline character
        #line = line.strip('\n')
        #put numbers into array
        #arrayfromfile.append(int(line))
    #print(arrayfromfile)
    #return arrayfromfile

def MergeSort_Project1(array):
    if len(array) <= 1:
        return array
    if len(array) > 1:
        middle = len(array)//2
        leftpart = array[:middle]
        rightpart = array[middle:]
        
        MergeSort_Project1(leftpart)
        MergeSort_Project1(rightpart)
        
        i = 0
        j = 0
        k = 0
        while i < len(leftpart) and j < len(rightpart):
            if leftpart[i] < rightpart[j]:
                array[k] = leftpart[i]
                i += 1
            else:
                array[k] = rightpart[j]
                j += 1
            k += 1
        
        while i < len(leftpart):
            array[k] = leftpart[i]
            i += 1
            k += 1
            
        while j < len(rightpart):
            array[k] = rightpart[j]
            j +=1
            k += 1
            
        return array
    
array = [6,30,23,57,9,3,10,12,45,52]
MergeSort_Project1(array)
        
    


# In[ ]:




