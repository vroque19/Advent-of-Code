elves = []
curr = 0
top_three = []
sum = 0

file = open("file.txt")

for line in file:
    if line.rstrip() == "":
        elves.append(curr)
        curr = 0
    else:
        curr += int(line)

elves = sorted(elves, reverse=True)

for _ in range(3):
    sum += int(elves[_])
    print(int(elves[_]))

print(f"Sum: {sum}")
    
