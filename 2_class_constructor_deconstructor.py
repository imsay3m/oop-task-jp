class A:
    x = 0

    def __init__(self):
        print("Constructor Called")
        self.x = 10

    def __del__(self):
        print("Destructor Called")
        self.x = 0
        print(self.x)


myObj = A()
print(myObj.x)
