# [Silver III] 다이나믹이 뭐예요? - 14494 

[문제 링크](https://www.acmicpc.net/problem/14494) 

### 성능 요약

메모리: 9848 KB, 시간: 8 ms

### 분류

다이나믹 프로그래밍

### 제출 일자

2025년 7월 24일 16:24:18

### 문제 설명

<p>안녕하세요~ 저는 오늘 다이나믹 프로그래밍(동적 계획법)을 설명하기 위해 등장한 욱제예요! 다이나믹은 이름이 엄청 거창하지만 사실 이름에 비해 개념은 간단하답니다. 다이나믹의 기본 아이디어는 바로 이전에 계산한 값을 사용해서 (= 이미 계산된 값을 사용해서, 어려운 말로 메모이제이션 한다고 해요) 반복되는 똑같은 연산 횟수를 줄이는 거예요.</p>

<p>예를 들어서, 5번째 피보나치 수열을 구하는 F(5)의 동작 과정을 살펴볼게요.</p>

<p style="text-align: center;"><img alt="" src="https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/problem/14494/1.png" style="height:132px; width:184px"></p>

<p>같은 함수가 불필요하게 많이 호출되는 것을 볼 수 있죠? F(2)와 F(3)을 미리 구해놓고 F(4)를 구할 땐 미리 구해둔 F(2)와 F(3)의 값을 이용하면 불필요한 호출을 줄일 수 있어요. 조금 엄밀하게 이야기 해볼게요. 수학적으로 피보나치 수열은 F(n) = F(n-1) + F(n-2)로 정의할 수 있죠? 이 식을 세우는 과정을 점화식을 세운다고 해요. 문제의 조건에 맞는 수식을 만들고 그 수식을 그대로 코드에 옮기면 아주 쉽게 다이나믹을 구현할 수 있어요.</p>

<p>물론 다차원 배열로도 가능해요! 오른쪽, 아래쪽으로만 움직일 수 있을 때, D[1][1]에서 D[x][y]까지 도달하는 경우의 수를 구하는 문제는 일일히 모든 경우를 다 계산할 필요 없이, D[i][j] = (i, j)에 도달하는 누적 경우의 수 = D[i-1][j] + D[i][j-1]를 세워서 해결할 수도 있죠.</p>

<p>어때요? 다이나믹 어렵지 않죠? 이제 문제를 풀어볼게요!</p>

<p>“→, ↓, ↘의 세 방향만 사용해서 한 번에 한 칸씩 이동할 때, 왼쪽 위 (1, 1)에서 출발하여 오른쪽 아래 (n, m)에 도착하는 경우의 수를 구하여라.”</p>

<p>시작!</p>

### 입력 

 <p>n과 m이 주어진다. (1 ≤ n, m ≤ 1,000)</p>

### 출력 

 <p>(1, 1)에서 (n, m)에 도달하는 경우의 수를 구하여라. 단, 경우의 수가 엄청 커질 수 있으므로 경우의 수를 1,000,000,007(=10<sup>9</sup>+7)로 나눈 나머지를 출력한다.</p>

