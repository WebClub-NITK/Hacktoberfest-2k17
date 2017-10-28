def reverse(string):
 
    i = len(string)
    rev = ""
    while i != 0:
        rev = rev + string[i-1]
        i = i - 1
    return rev
 
 
print(reverse("string"))
