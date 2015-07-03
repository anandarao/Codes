# your code goes here
n = int(raw_input())
dp = [0,2]
c = [0,1]
for i in range(2,n+1):
	dp.append(2*dp[i-1] - c[i-1])
	c.append(dp[i-1] - c[i-1])

print dp[n]