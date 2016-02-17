from math import *
class Complex:
    def __init__(self, real = 0, imag = 0):
        self.real = real
        self.imag = imag
    def __str__(self):
        if (self.imag < 0):
            return "{0:.2f}{1:.2f}i".format(self.real, self.imag)
        else:
            return "{0:.2f}+{1:.2f}i".format(self.real, self.imag)
    def __add__(self, x):
        return Complex(self.real + x.real, self.imag + x.imag)
    def __sub__(self, x):
        return Complex(self.real - x.real, self.imag - x.imag)
    def __mul__(self, x):
        return Complex(self.real * x.real - self.imag * x.imag, self.real * x.imag + self.imag * x.real)
    def div(self, x):
        result = Complex();
        result.real = (self.real * x.real + self.imag * x.imag) / (x.real ** 2 + x.imag ** 2)
        result.imag = (self.imag * x.real - self.real * x.imag) / (x.real ** 2 + x.imag ** 2)
        return result
    def __abs__(self):
        return Complex(sqrt(self.real ** 2 + self.imag ** 2), 0)

x, y = map(float, input().split())
a = Complex(x, y)
x, y = map(float, input().split())
b = Complex(x, y)

print(a + b)
print(a - b)
print(a * b)
print(a.div(b))
print(abs(a))
print(abs(b))
