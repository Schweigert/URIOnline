require 'open-uri'
require 'openssl'

Dir.chdir(File.dirname(__FILE__))

puts Dir.pwd

def getName n

	b = n.split "/"
	n = b.size
	puts b
	return (b[n-1].split ".")[0]
	
end

a = Dir.glob("Source/*")

for i in a
	begin
		problem = getName i
		puts "Problem #{problem}"
		url = "http://www.urionlinejudge.com.br/repository/UOJ_#{problem}.html"
		puts url
		source = open(URI.parse(url), {ssl_verify_mode: OpenSSL::SSL::VERIFY_NONE}).read
		yourfile = "HTML\\"+problem+".html"
		File.open(yourfile, 'w') { |file| file.write(source) }
	rescue
		puts "Erro..."
		next
	end
end
