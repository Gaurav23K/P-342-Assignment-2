'''
* Assignment 2
* Problem 1(b)
'''
checkpoints = 0
distance = 0
i = 0
while i < 6:
    j = 0
    while j < 6:
        k = 0
        while k < 6:
            z = 0
            while z < 6:
                distance += abs(abs(i-j)+abs(k-z))
                checkpoints += 1
                z += 1
            k += 1
        j += 1
    i += 1
print('The total distance travelled is = ', distance)
print('The total no. of checkpoints = ',checkpoints)
print('The average distance travelled is = ', distance/checkpoints)

