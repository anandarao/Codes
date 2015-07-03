# your code goes here
# your code goes here
t = int(raw_input())
while t > 0:
	n,m = raw_input().split()
	n = int(n)
	m = int(m)
	res1 = (n/2 + n%2)*m
	res2 = n*(m/2 + m%2)
	print max(res1,res2)
	t -= 1