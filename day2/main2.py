rock = 0 # +1 A
paper = 0 # +2 B
scissors = 0 # +3 C
# Lose = X
# Draw = Y 
# Win = Z
win = 0 # +6
tie = 0 # +3

file = open("file.txt")
for line in file:
    line = line.rstrip().split(" ")
    # print(line)
    if line[0] == "A":
        if line[1] == "X":
            scissors +=1
        if line[1] == "Y":
            rock +=1
            tie +=1
        if line[1] == "Z":
            paper +=1
            win +=1

    if line[0] == "B":
        if line[1] == "X":
            rock+=1
        if line[1] == "Y":
            paper +=1
            tie +=1
        if line[1] == "Z":
            scissors +=1
            win +=1

    if line[0] == "C":
        if line[1] == "X":
            paper +=1
        if line[1] == "Y":
            scissors +=1
            tie +=1
        if line[1] == "Z":
            win +=1
            rock +=1

score = (rock) + (paper*2) + (scissors*3) + (tie*3) + (win*6)

print(score)