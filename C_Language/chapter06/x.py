import tkinter
from tkinter import *


def click(event):
    global group
    text = event.widget.cget("text")
    print(text)

    if text == "=":
        if group.get().isdigit():
            value = int(group.get())
        else:
            value = eval(screen.get())

            group.set(value)
            screen.update()

    elif text == "C":
        group.set("")
        screen.update()
    else:
        group.set(group.get()+text)
        screen.update()


ai = Tk()
ai.geometry("350x500")
ai.resizable(0, 0)
ai.title("AI Group:3 Calculator")

group = StringVar()
group.set("")
screen = Entry(ai, textvar=group, font="lucida 15 bold")
screen.pack(fill=X, ipadx=8, pady=10, padx=10)

f = Frame(ai, bg="grey")
b = Button(f, text="9", font="lucida 25 bold")
b.pack(side=LEFT, padx=18, pady=12)
b.bind("<Button-1>", click)

b = Button(f, text="8", font="lucida 25 bold")
b.pack(side=LEFT, padx=18, pady=12)
b.bind("<Button-1>", click)

b = Button(f, text="7", font="lucida 25 bold")
b.pack(side=LEFT, padx=18, pady=12)
b.bind("<Button-1>", click)

b = Button(f, text="/", font="lucida 25 bold")
b.pack(side=LEFT, padx=18, pady=12)
b.bind("<Button-1>", click)

f.pack()

f = Frame(ai, bg="grey")
b = Button(f, text="6", font="lucida 25 bold")
b.pack(side=LEFT, padx=18, pady=12)
b.bind("<Button-1>", click)

b = Button(f, text="5", font="lucida 25 bold")
b.pack(side=LEFT, padx=18, pady=12)
b.bind("<Button-1>", click)

b = Button(f, text="4", font="lucida 25 bold")
b.pack(side=LEFT, padx=18, pady=12)
b.bind("<Button-1>", click)

b = Button(f, text="*", font="lucida 25 bold")
b.pack(side=LEFT, padx=18, pady=12)
b.bind("<Button-1>", click)

f.pack()

f = Frame(ai, bg="grey")
b = Button(f, text="3", font="lucida 25 bold")
b.pack(side=LEFT, padx=18, pady=12)
b.bind("<Button-1>", click)

b = Button(f, text="2", font="lucida 25 bold")
b.pack(side=LEFT, padx=18, pady=12)
b.bind("<Button-1>", click)

b = Button(f, text="1", font="lucida 25 bold")
b.pack(side=LEFT, padx=18, pady=12)
b.bind("<Button-1>", click)

b = Button(f, text="-", font="lucida 25 bold")
b.pack(side=LEFT, padx=18, pady=12)
b.bind("<Button-1>", click)

f.pack()

f = Frame(ai, bg="grey")
b = Button(f, text="0", font="lucida 25 bold")
b.pack(side=LEFT, padx=18, pady=12)
b.bind("<Button-1>", click)

b = Button(f, text=".", font="lucida 25 bold")
b.pack(side=LEFT, padx=18, pady=12)
b.bind("<Button-1>", click)

b = Button(f, text="+", font="lucida 25 bold")
b.pack(side=LEFT, padx=18, pady=12)
b.bind("<Button-1>", click)

b = Button(f, text="=", font="lucida 25 bold")
b.pack(side=LEFT, padx=18, pady=12)
b.bind("<Button-1>", click)

f.pack()

f = Frame(ai, bg="grey")
b = Button(f, text="C", font="lucida 25 bold", width=32, height=0)
b.pack(side=LEFT, padx=18, pady=12)
b.bind("<Button-1>", click)

f.pack()
ai.mainloop()
