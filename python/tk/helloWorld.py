import tkinter as tk

root = tk.Tk()
logo = tk.PhotoImage(file='img.png')

w = tk.Label(root, text="Hello Tkinter!")
w.pack()
tk.Label(root, image=logo).pack(side="right")

explanation = """Hello, This is Ambuja.
I am a 3rd year student of
Jadavpur University
pursuing B.E.in Information
Technology ."""

tk.Label(root,
        justify=tk.LEFT,
        padx = 10,
        text=explanation).pack(side="left")

root.mainloop()
