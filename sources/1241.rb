a = gets.to_i

a.times do |caso|
	
	b = gets.chomp
	c = b.split " "
	num1 = c[0].reverse
	num2 = c[1].reverse
	
	resposta = true
	
	for i in 0..(num2.size-1)
	
		if num1[i] == num2[i]
			next
		end
		resposta = false
		break
		
	end
	
	if resposta
		puts "encaixa"
	else
		puts "nao encaixa"
	end
	
	
end
