a = int(input())
b = int(input())
c = int(input())
maior = (((a + b + abs(a  - b))/2) + c + abs( ((a + b + abs(a  - b))/2) - c)) / 2
print(f"{maior} eh o maior\n")