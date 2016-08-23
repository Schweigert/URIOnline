h = 1
loop {
	ent = gets
	n,q = ent.split " "
	
	n = n.to_i
	q = q.to_i
	
	if n.to_i == 0
		break
	end
	
		
	puts "CASE# #{h}:"
	
	lista = []
	n.times do |caso|
		lista << gets.to_i
	end
	
	lista.sort!

	q.times do |caso|
		t = gets.to_i
		if lista.include? t
			puts "#{t} found at #{lista.index(t) + 1}"
		else
			puts "#{t} not found"
		end
	end
	
	h += 1
	
	
}