# #-----------------start,reset,end---------------------
# from tkinter import*
# win=Tk()
# i=0
# run=False
# win.title('button')
# def start():
#     global run
#     run=True
#     count()
# def count():
#     global run,i
#     if run:
#         label.config(text=i)
#         i=i+1
#         win.after(300,count)
# def reset():
#       global run,i
#       run=False
#       i=0
#       label.config(text=i)
# def stop():
#     global run
#     run=False
# button1=Button(win,text='start',
#               font=('aerial','20','bold'),
#               bg='red',
#               fg='black',
#               activebackground='black',
#               activeforeground='white',
#               relief='ridge',
#               bd='20',
#               command=start)
# button1.pack(side='left')
# button2=Button(win,text='reset',
#               font=('aerial','20','bold'),
#               bg='blue',
#               fg='black',
#               activebackground='black',
#               activeforeground='white',
#               relief='ridge',
#               bd='20',
#               command=reset)
# button2.pack(side='left')
# button3=Button(win,text='stop',
#               font=('aerial','20','bold'),
#               bg='yellow',
#               fg='black',
#               activebackground='black',
#               activeforeground='white',
#               relief='ridge',
#               bd='20',
#               command=stop)
# button3.pack(side='left')
# label=Label(win, text="counter",
#             font=('aerial','35','bold','italic','underline'),
#             bg='green',
#             fg='red',
#             relief='ridge',
#             bd='10',
#             anchor='center')
# label.pack(side='top')
# win.mainloop()
#---------------------scrolling text start with start button and stop with stop button-----------------
# from tkinter import*
# data='welcome psit students'
# run=False
# def stop():
#     global run
#     run=False
#     label.config(text='welcome psit students')
# def start(): 
#     global run
#     run=True
#     scroll()
# def scroll():
#     global data,run
#     if run:
#         data=data[1:]+data[0]
#         label.config(text=data)
#         win.after(500,scroll)
# win=Tk()
# button1=Button(win,text='start',
#               font=('aerial','20','bold'),
#               bg='blue',
#               fg='white',
#               activebackground='black',
#               activeforeground='white',
#               relief='ridge',
#               bd='20',
#               command=start)
# button1.pack(side='left',pady='20')
# button2=Button(win,text='stop',
#               font=('aerial','20','bold'),
#               bg='blue',
#               fg='white',
#               activebackground='black',
#               activeforeground='white',
#               relief='ridge',
#               bd='20',
#               command=stop)
# button2.pack(side='left',pady='20')
# label=Label(win,text='',
#             width='20',
#             font=('ink free','30','bold'),
#             bg='black',
#             fg='white',
#             relief='rid',
#             bd='15'
#             )
# label.pack()
# win.mainloop()
#-----------------------entry method in python----------------
# from tkinter import*
# win=Tk()
# def click():
#     data=entry.get()
#     print(f'hi,{data}')
# def delete():
#     entry.delete(0,'end')
# def backspace():
#     x=len(entry.get())-1
#     entry.delete(x,'end')
# entry=Entry(win,font=('ink free','40','bold'),
#             bg='black',
#             fg='white')
# #entry.insert(0,'enter your name:')
# entry.pack(side='left')
# button1=Button(win,text='submit',
#               font=('aerial','20','bold'),
#               bg='blue',
#               fg='white',
#               relief='ridge',
#               bd='20',
#               command=click)
# button1.pack(side='top')
# button2=Button(win,text='delete',
#               font=('aerial','20','bold'),
#               bg='blue',
#               fg='white',
#               relief='ridge',
#               bd='20',
#               command=delete)
# button2.pack(side='top')
# button3=Button(win,text='backspace',
#               font=('aerial','20','bold'),
#               bg='blue',
#               fg='white',
#               relief='ridge',
#               bd='20',
#               command=backspace)
# button3.pack(side='top')
# win.mainloop()
from tkinter import*
win=Tk()
def click():
    data1=entry.get()
    #print(f'{data1}')
    entry.config(text=data1)
def login():
     data=entry.get()
     print(f'{data}have login,successfully')
entry=Entry(win,font=('ink free','40','bold'),
            bg='green',
            fg='white')
entry.pack(side='left')
entry1=Entry(win,font=('ink free','40','bold'),
            bg='pink',
            fg='black',
            show='*')
entry1.pack(side='left')
#entry.insert(0,'enter your name:')
button1=Button(win,text='show/hide/password',
              font=('aerial','20','bold'),
              bg='blue',
              fg='white',
              relief='ridge',
              bd='20',
              command=click)
button1.pack(side='top')
button2=Button(win,text='login',
              font=('aerial','20','bold'),
              bg='blue',
              fg='white',
              relief='ridge',
              bd='20',
              command=login)
button2.pack(side='top')
label=Label(win, text="username",
            font=('aerial','25','bold','italic','underline'),
            bg='yellow',
            fg='red',
            relief='ridge',
            bd='10',
            pady='10')
label.pack(side='top')
label=Label(win, text="password",
            font=('aerial','25','bold','italic','underline'),
            bg='yellow',
            fg='red',
            relief='ridge',
            bd='10',
            pady='10')
label.pack(side='top')
win.mainloop()

