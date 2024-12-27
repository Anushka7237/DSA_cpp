from tkinter import*
data='welcome psit students'
run=False
def leave(event):
    global run
    run=False
    label.config(text='welcome psit students')
def enter(event): 
    global run
    run=True
    scroll()
def scroll():
    global data,run
    if run:
        data=data[1:]+data[0]
        label.config(text=data)
        win.after(500,scroll)
win=Tk()
label=Label(win,text='',
            width='20',
            font=('ink free','30','bold'),
            bg='black',
            fg='white',
            relief='rid',
            bd='15'
            )
label.bind('<Leave>',leave)
label.bind('<Enter>',enter)
label.pack()
win.mainloop()
