class Person:
    __fname = ""

    @property
    def name(self):
        return self.__fname

    @name.setter
    def name(self, newName):
        self.__fname = newName


myObj = Person()
myObj.name = "Karim"
print(myObj.name)
