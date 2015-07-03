# your code goes here
t = int(raw_input())
while t > 0:
	raw_input()
	a = raw_input().split()
	if not a[0].isdigit():
		a[0] = int(a[4])-int(a[2])
		a[0] = str(a[0])
	elif not a[2].isdigit():
		a[2] = int(a[4])-int(a[0])
		a[2] = str(a[2])
	else:
		a[4] = int(a[2])+int(a[0])
		a[4] = str(a[4])
	print " ".join(a)
	t -= 1