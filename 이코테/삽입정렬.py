array = [7, 5, 9, 0, 3, 1, 6, 2, 4, 8]

#두 번째 원소부터 정렬
for i in range(1, len(array)):
    for j in range(i, 0, -1): #i부터 1까지 1씩 감소하며 반복힌다
        if array[j] < array[j-1]:
            array[j], array[j-1] = array[j-1], array[j]
        else:
            break

print(array)
