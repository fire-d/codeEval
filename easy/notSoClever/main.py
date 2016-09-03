"""Sample code to read in test cases:"""
import sys

with open(sys.argv[1], 'r') as test_cases:
  for test in test_cases:
    test = test.strip()
    if(test==""):
      continue
    numbers=test.split("|",1)[0].split()
    limit =int(test.split("|",1)[1].strip(),10)
    count=0
    iterator=0
    while(iterator<len(numbers)):
      if(int(numbers[iterator],10)>int(numbers[iterator+1],10)):
        numbers[iterator],numbers[iterator+1] = numbers[iterator+1],numbers[iterator]
        count=count+1
        if(count<limit):
          iterator=0
          continue
        else:
          break
      iterator=iterator+1
    print(' '.join(numbers))
