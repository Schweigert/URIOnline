a = gets.chomp
b = a.split "."
b[0] = b[0].to_i
b[1] = b[1].to_i

puts "NOTAS:"
c = (b[0]/100 + 0.01).to_i
b[0] = b[0] - c*100
puts "#{c} nota(s) de R$ 100.00"

c = (b[0]/50 + 0.01).to_i
b[0] = b[0] - c*50
puts "#{c} nota(s) de R$ 50.00"

c = (b[0]/20 + 0.01).to_i
b[0] = b[0] - c*20
puts "#{c} nota(s) de R$ 20.00"

c = (b[0]/10 + 0.01).to_i
b[0] = b[0] - c*10
puts "#{c} nota(s) de R$ 10.00"

c = (b[0]/5 + 0.01).to_i
b[0] = b[0] - c*5
puts "#{c} nota(s) de R$ 5.00"

c = (b[0]/2 + 0.01).to_i
b[0] = b[0] - c*2
puts "#{c} nota(s) de R$ 2.00"

puts "MOEDAS:"
puts "#{b[0]} moeda(s) de R$ 1.00"

c = (b[1]/50 + 0.01).to_i
b[1] = b[1] - c*50
puts "#{c} moeda(s) de R$ 0.50"

c = (b[1]/25 + 0.01).to_i
b[1] = b[1] - c*25
puts "#{c} moeda(s) de R$ 0.25"

c = (b[1]/10 + 0.01).to_i
b[1] = b[1] - c*10
puts "#{c} moeda(s) de R$ 0.10"

c = (b[1]/5 + 0.01).to_i
b[1] = b[1] - c*5
puts "#{c} moeda(s) de R$ 0.05"

c = 
puts "#{b[1]} moeda(s) de R$ 0.01"