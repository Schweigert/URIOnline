a = gets.to_i

par = []
impar = []

a.times do |caso|

	b = gets.to_i
	
	if b % 2 == 0
		par << b
	else
	    impar << b
	end

end

par.sort!
impar.sort!
impar.reverse!

for i in par
    puts i
end

for i in impar
    puts i
end
