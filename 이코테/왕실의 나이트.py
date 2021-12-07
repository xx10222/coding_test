#현재 나이트의 위치 입력받기
night = input()

row = int(night[1])
col = int(ord(night[0])) - int(ord('a')) + 1

#나이트의 이동 경로 정의
steps =  [(-2, -1), (-2, 1), (2, -1), (2, 1), (1, -2), (1, 2), (-1, -2), (-1, 2)]

result=0
for step in steps:
    next_row = row + step[0]
    next_col = col + step[1]

    if next_row>=1 and next_row<=8 and next_col>=1 and next_col<=8:
        result+=1

print(result)
