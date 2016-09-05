quant = gets.to_i

quant.times do |i|

	teste = gets.chomp
	resp = 0
	for i in 0..(teste.size-1)
		if teste[i] == "1"
			resp += 2
			next
		end
		if teste[i] == "2"
			resp += 5
			next
		end
		if teste[i] == "3"
			resp += 5
			next
		end
		if teste[i] == "4"
			resp += 4
			next
		end
		if teste[i] == "5"
			resp += 5
			next
		end
		if teste[i] == "6"
			resp += 6
			next
		end
		if teste[i] == "7"
			resp += 3
			next
		end
		if teste[i] == "8"
			resp += 7
			next
		end
		if teste[i] == "9"
			resp += 6
			next
		end
		if teste[i] == "0"
			resp += 6
			next
		end

		

	end
	puts "#{resp} leds"
end
