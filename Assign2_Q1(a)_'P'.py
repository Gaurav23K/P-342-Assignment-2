'''
* Assignment 2
* Problem 1(a)
'''
distance = 0
checkpoint = 0
refer = 0
diff = 0
while refer < 6:
    stop = 0
    while stop < 6 :
        diff = abs(refer - stop)
        distance += diff
        checkpoint += 1
        stop += 1
    refer += 1
print('The total distance travelled is = ', distance)
print('The total no. of checkpoints = ',checkpoint)
print('The average distance travelled is = ', distance/checkpoint)
