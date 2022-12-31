rock = 0 # +1 A X
paper = 0 # +2 B Y
scissors = 0 # +3 C Z
win = 0 # +6
tie = 0 # +3


file = open("file.txt")
for line in file:
    line = line.rstrip().split(" ")
    # print(line)
    if line[0] == "A":
        if line[1] == "X":
            rock += 1
            tie +=3
        if line[1] == "Y":
            paper += 2
            win+=6
        if line[1] == "Z":
            scissors +=3

    if line[0] == "B":
        if line[1] == "X":
            rock += 1
        if line[1] == "Y":
            paper += 2
            tie +=3
        if line[1] == "Z":
            scissors +=3
            win +=6


    if line[0] == "C":
        if line[1] == "X":
            rock += 1
            win +=6
        if line[1] == "Y":
            paper += 2
        if line[1] == "Z":
            scissors +=3
            tie +=3


score = rock + paper + scissors + tie + win
print(score)