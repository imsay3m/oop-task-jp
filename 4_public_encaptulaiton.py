class A:
    value = 0

    def __init__(self, value) -> None:
        self.value = value

    def display(self):
        print(self.value)


myObj = A(10)

myObj.display()

myObj.value = 15
myObj.display()
