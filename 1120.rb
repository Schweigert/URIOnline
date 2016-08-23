loop {

	a = gets
	b = a.split " "
	c = b[0].to_s
	d = b[1].to_s
	
	if c.to_i == 0 and d.to_i == 0
		exit
	end
	
	
	
	puts (d.gsub c, "").to_i
	

}
