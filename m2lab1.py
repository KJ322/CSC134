from turtle import *
import math

screen = Screen()
screen = bgcolor("black")

t = Turtle()
t.pensize(3)
t.shape ("turtle")
t.speed(0)

#first square
t.pencolor("darkslategray1")

for side in range(4):
    t.forward(100)
    t.left(90)

#first circle
t.penup()
t.forward(50)
t.right(90)
t.forward(20)
t.left(90)
t.pendown()

t.pencolor("darkslategray2")
t.circle(70)

#second square
t.pencolor("darkslategray3")
t.forward(70)
t.left(90)

for side in range(3):
    t.forward(140)
    t.left(90)
t.forward(70)

#second circle
t.penup()
t.right(90)
t.forward(30)
t.left(90)
t.pendown()

t.pencolor("darkslategray4")
t.circle(100)

#third square
t.pencolor("darkslategray")
t.forward(100)
t.left(90)

for side in range(3):
    t.forward(200)
    t.left(90)
t.forward(100)

#third circle
t.penup()
t.right(90)
t.forward(40)
t.left(90)
t.pendown()

t.pencolor("darkslategray4")
t.circle(140)

#fourth square
t.pencolor("darkslategray3")
t.forward(140)
t.left(90)

for side in range(3):
    t.forward(280)
    t.left(90)
t.forward(140)

#fourth circle
t.penup()
t.right(90)
t.forward(58)
t.left(90)
t.pendown()

t.pencolor("darkslategray2")
t.circle(200)

#fifth square
t.pencolor("darkslategray1")
t.forward(200)
t.left(90)

for side in range(3):
    t.forward(400)
    t.left(90)
t.forward(200)

#fifth circle
t.penup()
t.right(90)
t.forward(80)
t.left(90)
t.pendown()

t.pencolor("darkslategray2")
t.circle(282)

#sixth square
t.pencolor("darkslategray3")
t.forward(282)
t.left(90)

for side in range(3):
    t.forward(564)
    t.left(90)
t.forward(282)

#sixth circle
t.penup()
t.right(90)
t.forward(115)
t.left(90)
t.pendown()

t.pencolor("darkslategray4")
t.circle(400)

#seventh square
t.pencolor("darkslategray")
t.forward(400)
t.left(90)

for side in range(3):
    t.forward(800)
    t.left(90)
t.forward(400)

#seventh circle
t.penup()
t.right(90)
t.forward(165)
t.left(90)
t.pendown()

t.pencolor("darkslategray4")
t.circle(568)

#------------------------------------------------------#

#fibonacci spiral

t.penup()
t.goto(0,0)
t.forward(50)
t.left(90)
t.forward(50)
t.right(90)
t.pendown()

t.pencolor("azure")
t.speed(6)

a, b = 0, 1

for _ in range(20):
    t.circle(b, 90)  # Draw quarter-circle with radius b
    a, b = b, a + b
