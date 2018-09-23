import tkinter as tk

calc = tk.Tk()
calc.title("CALCULATOR")

display = tk.Entry(calc, width=64)        # white display
display.grid(row=0, column=0, columnspan=12, pady=20)


def buttons(val):     # insert value of buttons into display
    display.insert(tk.END, val)


n1 = tk.Button(calc, width=8, height=4, text='  1  ', command=lambda: buttons(1))
n1.grid(row=2, column=0)
n2 = tk.Button(calc, width=8, height=4, text='  2  ', command=lambda: buttons(2))
n2.grid(row=2, column=2)
n3 = tk.Button(calc, width=8, height=4, text='  3  ', command=lambda: buttons(3))
n3.grid(row=2, column=4)
n4 = tk.Button(calc, width=8, height=4, text='  4  ', command=lambda: buttons(4))
n4.grid(row=4, column=0)
n5 = tk.Button(calc, width=8, height=4, text='  5  ', command=lambda: buttons(5))
n5.grid(row=4, column=2)
n6 = tk.Button(calc, width=8, height=4, text='  6  ', command=lambda: buttons(6))
n6.grid(row=4, column=4)
n7 = tk.Button(calc, width=8, height=4, text='  7  ', command=lambda:buttons(7))
n7.grid(row=6, column=0)
n8 = tk.Button(calc, width=8, height=4, text='  8  ', command=lambda:buttons(8))
n8.grid(row=6, column=2)
n9 = tk.Button(calc, width=8, height=4, text='  9  ', command=lambda:buttons(9))
n9.grid(row=6, column=4)
n10 = tk.Button(calc, width=8, height=4, text='  0  ', command=lambda: buttons(0))
n10.grid(row=8, column=2)
n11 = tk.Button(calc, width=8, height=4, text='Pow', command=lambda: buttons('pow'))
n11.grid(row=8, column=4, columnspan=2)
op1 = tk.Button(calc, width=8, height=4, text='  /  ', command=lambda: buttons('/'))
op1.grid(row=2, column=6)
op2 = tk.Button(calc, width=8, height=4, text='  *  ', command=lambda: buttons('*'))
op2.grid(row=4, column=6)
op3 = tk.Button(calc, width=8, height=4, text='  %  ', command=lambda: buttons('%'))
op3.grid(row=6, column=6)
op4 = tk.Button(calc, width=8, height=4, text='  +  ', command=lambda: buttons('+'))
op4.grid(row=2, column=8)
op5 = tk.Button(calc, width=8, height=4, text='  .  ', command=lambda: buttons('.'))
op5.grid(row=8, column=0)
op6 = tk.Button(calc, width=8, height=4, text='  CLR  ', command=lambda: display.delete(0, tk.END))        # clear the display
op6.grid(row=2, column=10)
op7 = tk.Button(calc, width=8, height=4, text='  CE  ', command=lambda: display.delete(len(display.get())-1, tk.END))     # remove last input on display
op7.grid(row=4, column=10)
op8 = tk.Button(calc, width=8, height=4, text='  (  ', command=lambda: buttons('('))
op8.grid(row=8, column=6)
op9 = tk.Button(calc, width=8, height=4, text='  )  ', command=lambda: buttons(')'))
op9.grid(row=8, column=8)
op10 = tk.Button(calc, width=8, height=4, text='  ,  ', command=lambda: buttons(','))
op10.grid(row=6, column=10)
op11 = tk.Button(calc, width=8, height=4, text='  -  ', command=lambda: buttons('/'))
op11.grid(row=4, column=8)


def equals(exprsn):      # function for '='
    try:
        value = eval(exprsn.get())
    except SyntaxError:
        exprsn.delete(0, tk.END)
        exprsn.insert(0, 'unsupported expression')
    else:
        exprsn.delete(0, tk.END)
        exprsn.insert(0, value)

eq = tk.Button(calc, width=8, height=4, text='  =  ', command=lambda: equals(display))
eq.grid(row=6, column=8)
lb = tk.Label(calc, width=8, height=4, text='pow(4,1/2)\n=4^0.5\n=2.0')
lb.grid(row=8, column=10)

calc.mainloop()
