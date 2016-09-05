bool = false
loop {

	a = gets.to_i
	if a == 0
	   exit
	end

	if bool
		puts ""
	end	

	valores = []
	maior = 0
	a.times do |caso|
		b = gets.chomp
		if b.to_s.size > maior
		   maior = b.size
		end
		valores << b
	end

	for i in valores
		c = maior - i.size
		c.times do
			putc ' '
		end
		
		puts i
		
	end

	bool = true
	
}