def mystery(s):
    for _ in range(len(s),1,-2):
      s = s[1:]+s[0]
    return(s)

mystring = "siruseri"
mystring = mystery(mystring)

print (mystring)