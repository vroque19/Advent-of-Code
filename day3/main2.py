# file = open("file.txt")

with open("file.txt") as file:
    group = []
    groups = []
    for line in file:
        line = line.rstrip()
        if len(group) < 3:
            group.append(line)
        else:
            groups.append(group)


for item in group[0]:
    if item in group[1] and item in group[2]:
        print(f"Repeated letter: {item}")

length = len(group)
length2 = len(groups)
# print(f"Length of group of 3 :{length}")
# print(f"Last group of 3 : {group}")
# print(f"Length of groups :{length2}")
print(f"groups: {groups}")
# print(f"All groups of 3: {groups}")

