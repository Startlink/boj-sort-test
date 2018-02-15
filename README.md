# BOJ 정렬 속도 비교

## 입력 파일 형식

* 첫째줄: N (= 10,000,000)
* 둘째줄: N개의 정수가 공백 하나로 구분되어져 있음. (1 ≤ 정수 ≤ 10,000,000)

## 데이터 파일 

입력으로 주어지는 N개의 정수를 A[1], ..., A[N]이라고 한다.

* 1: A[i] = i
  * 1 2 3 4 5 6 ... N-2 N-1 N
* 2: A[i] = N-i+1
  * N N-1 N-2 N-3 ... 3 2 1
* 3: A[i] = i+1 (i가 홀수), i-1 (i가 짝수)
  * 2 1 4 3 6 5 ... N-3 N-2 N N-1
* 4: A[i] = 1
  * 1 1 1 1 1 1 ... 1 1 1
* 5: A[i] = i, 그 다음 10개의 쌍을 랜덤하게 골라서 위치를 서로 바꿈
* 6: A[i] = i, 그 다음 100개의 쌍을 랜덤하게 골라서 위치를 서로 바꿈
* 7: A[i] = (i+1)/2 (i가 홀수), (n-i/2)+1
  * 1 N 2 N-1 3 N-2 ... N/2-1 N/2+2 N/2 N/2+1
* 8: A[i] = (2500*((i-1)%5))+((i-1)/5)+1
  * 1 2501 5001 7501 10001 2 2502 5002 7502 10002 ...
* 9: A[i] = (i-1)%10+1
  * 1 2 3 4 5 6 7 8 9 10 1 2 3 4 5 6 7 8 9 10
* 10: 1 ≤ A[i] ≤ 5
* 11: 1 ≤ A[i] ≤ 100
* 12: 1 ≤ A[i] ≤ 10,000,000
* 13: 1 ≤ A[i] ≤ 10,000,000
* 14: 1 ≤ A[i] ≤ 10,000,000
* 15: 1 ≤ A[i] ≤ 10,000,000