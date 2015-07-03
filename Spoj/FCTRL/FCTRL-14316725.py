# your code goes here
t=gets.to_i
for i in 1..t
n=gets.to_i
j=5
res=0
while j<=n
res+=n/j
j=j*5
end
puts "#{res}"
end