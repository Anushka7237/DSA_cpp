#-------------------more than one labels--------------
# from tkinter import*
# win=Tk()
# win.geometry('100x50')
# win.maxsize(500,100)
# label=Label(win, text="welcome",
#             font=('aerial','20','bold','italic','underline'),
#             bg='yellow',
#             fg='red',
#             width='20',
#             relief='rid',
#             bd='10',
#             anchor='w')
# label.pack()
# label1=Label(win, text="psit",
#             font=('aerial','25','bold','italic','underline'),
#             bg='green',
#             fg='blue',
#             width='20',
#             relief='rid',
#             bd='10',
#             anchor='center')
# label1.pack()
# label2=Label(win, text="students",
#             font=('aerial','30','bold','italic','underline'),
#             bg='violet',
#             fg='black',
#             width='20',
#             relief='rid',
#             bd='10',
#             anchor='e')
# label2.pack()
# win.minsize(300,175)
# win.mainloop()
#-------------------------scrolling the text----------------------------
# from tkinter import*
# data='welcome psit students'
# run=False
# def leave(event):
#     global run
#     run=False
#     label.config(text='welcome psit students')
# def enter(event): 
#     global run
#     run=True
#     scroll()
# def scroll():
#     global data,run
#     if run:
#         data=data[1:]+data[0]
#        label.config(text=data)
#         win.after(500,scroll)
# win=Tk()
# label=Label(win,text='',
#             width='20',
#             font=('ink free','30','bold'),
#             bg='black',
#             fg='white',
#             relief='rid',
#             bd='15'
#             )
# label.bind('<Leave>',leave)
# label.bind('<Enter>',enter)
# label.pack()
# win.mainloop()
#----------------------------button---------------------
from tkinter import*
win=Tk()
win.title('button')
def start():
        print(1)
def end():
        print(2)
def click():
    label.config(text='psit')
button1=Button(win,text='start',
              font=('aerial','20','bold'),
              bg='blue',
              fg='white',
              activebackground='black',
              activeforeground='white',
              relief='ridge',
              bd='20',
              command=start)
button1.pack(side='left',pady='20')
button2=Button(win,text='reset',
              font=('aerial','20','bold'),
              bg='blue',
              fg='white',
              activebackground='black',
              activeforeground='white',
              relief='ridge',
              bd='20',
              command=end)
button2.pack(side='left',pady='20')
button3=Button(win,text='stop',
              font=('aerial','20','bold'),
              bg='blue',
              fg='white',
              activebackground='black',
              activeforeground='white',
              relief='ridge',
              bd='20',
              command=click)
button3.pack(side='left',pady='20')
label=Label(win, text="calculator",
            font=('aerial','25','bold','italic','underline'),
            bg='yellow',
            fg='red',
            relief='ridge',
            bd='10',
            pady='10')
label.pack()
win.mainloop()