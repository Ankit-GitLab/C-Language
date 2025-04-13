function mystery(n)
    if n == 0 then
        return 0
    else
        return n + mystery(n - 1)
    end if
end function

print(mystery(4))