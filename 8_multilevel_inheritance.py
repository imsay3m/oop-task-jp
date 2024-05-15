class Vehicle:  # parent class
    def setTopSpeed(self, speed):
        self.topSpeed = speed
        print("Top speed is set to", self.topSpeed)


class Car(Vehicle):
    def openTrunk(self):
        print("Trunk is now open.")


class Hybrid(Car):
    def turnOnHybrid(self):
        print("Hybrid mode is now switched on.")


car = Hybrid()
car.setTopSpeed(220)
car.openTrunk()
car.turnOnHybrid()
