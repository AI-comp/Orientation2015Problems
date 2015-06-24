#!/usr/bin/ruby

n = gets.to_i
n.times do
  a, b = gets.split.map(&:to_i)
  answer = a+b # EDIT HERE
  puts answer
end
