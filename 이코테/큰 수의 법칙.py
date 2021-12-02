#n,m,k를 공백으로 구분하여 입력받기
n,m,k = map(int, input().split())

#n개의 수(배열)를 공백으로 구분하여 입력받기
data = list(map(int, input().split()))

data.sort() #배열 정렬

first = data[n-1] #가장 큰 수
second = data[n-2] #두 번쨰로 큰 수

result = 0

while True:
    for i in range(k): #가장 큰 수를 k번 더하기
        if m == 0: #m이 0이면 break
            break
        result += first
        m -= 1
    if m==0: #m이 0이면 바깥 반복문도 탈출
        break
    result += second
    m -= 1

print(result) #결과 출력
