import math
import cmath
z = complex(input())
print(math.sqrt(pow(z.real, 2) + pow(z.imag, 2)))
print(cmath.phase(z))
