dict = {}
n = int(raw_input())
for i in range(0, n):
    raw = raw_input()
    atom = raw.split(" ")
    dict[atom[0]] = (float(atom[1]) + float(atom[2]) + float(atom[3])) / 3.0
q = raw_input()
print("%.2f" %dict[q])
