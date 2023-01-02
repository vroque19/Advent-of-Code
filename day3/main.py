file = open("file.txt")

total = 0
for line in file:
    elf1 = slice(0, len(line)//2)
    elf2 = slice(len(line)//2, len(line))

    elf1 = line[elf1].rstrip()
    elf2 = line[elf2].rstrip()

    for i in range(len(elf1)):
        if elf1[i] in elf2:
            # if elf1[i] == elf2[j]:
            if elf1[i] >= 'a' and elf1[i] <= 'z':
                total += ord(elf1[i])-96

            elif elf1[i] >= 'A' and elf1[i] <= 'Z':
                total += ord(elf1[i])-38

            break


print(f"Total : {total}")
# print(elf1, elf2, sep=", ")
# print(ord('a'))