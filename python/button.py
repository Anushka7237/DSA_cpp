#----------------------------button---------------------
from tkinter import*
win=Tk()
def click():
    print('welcome')
button=Button(win,text='click',
              font=('aerial','20','bold'),
              bg='blue',
              fg='white',
              activebackground='black',
              activeforeground='white',
              relief='ridge',
              bd='20',
              command=click)
button.pack()
win.mainloop()