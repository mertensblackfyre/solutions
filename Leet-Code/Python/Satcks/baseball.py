def is_number(s):
    try:
        float(s)
        return True
    except ValueError:
        return False
    
def calPoints(operations):
        score = []
        for i in range(len(operations)):
            if is_number(operations[i]):
                score.append(int(operations[i]))
            if operations[i] == "C" and score:
                score.pop()
            if operations[i] == "+" and score:
                score.append(score[len(score) - 1] + score[len(score) - 2])
            if operations[i] == "D" and score:
                score.append(score[len(score) - 1] * 2)

        print(sum(score))
        return sum(score)


calPoints(["5","2","C","D","+"])
