# Realizar download dos .html do URI Online

# https://www.urionlinejudge.com.br/repository/UOJ_#{id}.html

require 'open-uri'

source = open(url, &:read)
