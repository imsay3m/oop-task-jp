class Animal:
    def speak(self):
        print("This animal speaks ____.")


class Dog(Animal):
    def speak(self):
        print("Dog: Woof woof!")


animal = Animal()
dog = Dog()
dog.speak()
