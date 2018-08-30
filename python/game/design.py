import turtle
from turtle import title

win = turtle.Screen()
t = turtle.Turtle()
t.color('black')
t.tilt("Design")

#bgcolor("black")
t.speed(0)
#turtle.title("Design")

def draw_rainbow():
    for i in range(500):
        t.color('white')
        t.backward(i)

        t.left(110)
    t.color("white")
    t.hideturtle()
    t.setpos(20,0)

draw_rainbow()