from turtle import *

t = Turtle()
t.pensize(5)
t.pencolor("blue")
t.fillcolor("orange")
t.shape("turtle")

t.begin_fill()

for side in [1,2,3,4]:
    t.forward(100)
    t.left(90)

t.begin_fill()
t.circle(360)
t.end_fill()
