def count_missed_trains(s_bin):
    s_dec = int(s_bin, 2)
    
    missed_count = 0
    power_of_4 = 1 
    
    while power_of_4 < s_dec:
        missed_count += 1
        power_of_4 *= 4
    
    return missed_count

s_bin = input().strip()

print(count_missed_trains(s_bin))
