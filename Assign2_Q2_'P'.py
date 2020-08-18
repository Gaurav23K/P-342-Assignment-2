'''
* Assignment 2
* Problem 2
'''
# A & B are the vectors.
A = [1, 2, 5 ]
B = [-3, 4, 9]
product = 0
sum = []
print("The sum of the vectors is:")
for i in range(3):
    sum.append(A[i] + B[i])
    product += A[i] * B[i]
print(sum)
print("The dot product of the vectors is: ", product)
