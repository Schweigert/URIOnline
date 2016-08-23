a = gets.to_i
gets

a.times do |caso|

	mapa = Hash.new

	loop {
		b = gets
		if b == nil
			break
		end
		b.chomp!
		if b.size == 0
			break
		end
		
		if mapa[b] == nil
			mapa[b] = 1
		else
		    mapa[b] += 1
		end	
		
	}
	
	vet = mapa.keys
	vet.sort!
	
	total = 0
	for i in vet
		total = total + mapa[i].to_i
	end
	
	for i in vet
		puts "#{i} #{'%.4f' % (mapa[i].to_f/total*100)}"
	end
	
	if caso == a-1
		break
	end
	
	puts "\n"
	
end