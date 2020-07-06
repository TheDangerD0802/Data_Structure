#list of total words
book_title =  ['great', 'expectations','the', 'adventures', 'of', 'sherlock','holmes','the','great','gasby','hamlet','adventures','of','huckleberry','fin']
#empty dictonary to store count of words.
word_counter = {}
'''
for loop ans get method
1. The for loop iterates through the list as we saw earlier. The for loop feeds 'great' to the next statement in the body of the for loop.
2. In this line: word_counter[word] = word_counter.get(word,0) + 1, since the key 'great' doesn't yet exist in the dictionary, get() 
   will return the value 0 and word_counter[word] will be set to 1.
3. Once it encounters a word that already exists in word_counter (e.g. the second appearance of 'the'), the value for that key is 
   incremented by 1. On the second appearance of 'the', the key's value would add 1 again, resulting in 2.
4. Once the for loop finishes iterating through the list, the for loop is complete.
'''
for word in book_title:
    word_counter[word] = word_counter.get(word, 0) + 1
#print the dictionary    
print(word_counter)
