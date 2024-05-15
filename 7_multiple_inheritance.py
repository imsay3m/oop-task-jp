class Add:
    def sum(self, a, b):
        print(f" The sum of {a} and {b} is {a + b}")


class Mul:
    def mul(self, a, b):
        print(f" The Multiplication of {a} and {b} is {a * b}")


class Sub:
    def sub(self, a, b):
        print(f" The Subtraction of {a} and {b} is {a - b}")


class Div:
    def div(self, a, b):
        print(f" The Division of {a} and {b} is {a / b}")


class Calculate(Add, Div, Sub, Mul):
    p = 12
    q = 5

    def complete(self):
        print("The Calculation is Completed")


problem = Calculate()
problem.sum(2, 2)
problem.mul(2, 2)
problem.div(2, 2)
problem.sub(2, 2)
