x = gets.to_i
y = gets.to_i

mapa = Array.new(x)
for i in 0...x
  mapa[i] = Array.new(y)
end

for i in 0...y
  for j in 0...x
    c = STDIN.read 1
    mapa[j][i] = [c, 0]
  end
  STDIN.read 1
end

dir = [0,0]
pos = [0,0]
loop {
  cel = mapa[pos[0]][pos[1]]
  if cel[1] == '*'
    puts "*"
    exit
  end

  if cel[1] == '>'
    dir = []
  end
}
