import sys
for line in sys.stdin:
	n = int(line)
	if n==1:
		print 1
	else:
		print 2 * (n-1)