class Shape:
    width = 0.0
    height = 0.0

    def setWidth(self, w):
        self.width = w

    def setHeight(self, h):
        self.height = h


class Rectangle(Shape):
    def getArea(self):
        return self.width * self.height


rect = Rectangle()
rect.setWidth(4.5)
rect.setHeight(2)
print("Total area:", rect.getArea())
