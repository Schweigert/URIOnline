def f(n, k)
    if(n==1) 
		return 1
	end
    return (((f(n-1, k) + k-1)%n)+1)
end

tsts = gets.to_i

tsts.times do |a|

	enter = gets.split " "
	b = enter[0].to_i
	c = enter[1].to_i
	
	puts "Case #{a+1}: #{f(b,c)}"

end


