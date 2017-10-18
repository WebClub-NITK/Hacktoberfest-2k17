function bubble(list)
  local i = 1
  local swap
  
  while (i < #list) do
    if (list[i] > list[i+1]) then
      swap = list[i]
      list[i] = list[i+1]
      list[i+1] = swap
      if i > 1 then i = i - 1 end
    else 
      i = i + 1
    end
  end
  
  return list
end

-- Example Usage:

local sorted = bubble({1, 7, 2, 6, 3, 9, 1, 3, 2, 0})

for i = 1, #sorted do
  print(sorted[i])
end
