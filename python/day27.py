from tkinter import*
def hello(x):
    print('anu')
win=Tk()
win.title('welcome')
win.geometry('300x500')
win.maxsize(800,500)
label=Label(win, text="calculator",
            font=('aerial','20','bold','italic','underline'),
            bg='yellow',
            fg='red',
            relief='ridge',
            bd='10',
            padx='10',
            pady='20')
label.bind('<Button-3>',hello)
label.pack()
win.minsize(200,200)
win.configure(bg='blue')
win.mainloop()