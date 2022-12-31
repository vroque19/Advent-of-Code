elves = []
curr = 0

file = open("file.txt")

for line in file:
    if line.rstrip() == "":
        elves.append(curr)
        curr = 0
    else:
        curr += int(line)

    
max_calories = max(elves)

print(f"max calories: {max_calories}")

    