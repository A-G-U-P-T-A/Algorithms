/* https://www.spoj.com/problems/FCTRL2/ */
t=int(input(''))
while(t>0):
	n=int(input(''))
	s=1
	for i in range(1,n+1):
		s=s*i
	print(s)
	t-=1 
