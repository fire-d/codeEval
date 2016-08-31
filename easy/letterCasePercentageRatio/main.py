import sys

with open(sys.argv[1], 'r') as test_cases:
  for test in test_cases:
    lowerCase = 0
    upperCase = 0
    test= test.strip()
    if len(test)==0:
      continue
    for c in test:
      if c.islower():
        lowerCase+=1
      else:
        upperCase+=1
    lowerCase = float(lowerCase)/len(test)*100
    upperCase = float(upperCase)/len(test)*100
    print("lowercase: %.2f uppercase: %.2f" % (lowerCase,upperCase))
test_cases.close()
