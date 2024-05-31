#class Circle:
 #   pi=3.142
  #  def __init__(self,radius):
   #     self.radius=radius
    #    self.area=Circle.pi * radius * radius
    #def get_circumference(self):
        # return 2 * self.pi * self.radius#or circle.pi
    # def get_area(self):
     #   return Circle.pi * self.radius * self.radius
# circle_1=Circle(7)
# print(circle_1.area)
class Rectangle:
    def __init__(self,length,width):
        self.l=length
        self.w=width
        self.area= length * width
rect=Rectangle(5,4)
print(rect.area)