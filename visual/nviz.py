from tkinter import *

root = Tk()

label1 = Label(root, width="5", height="3", bg="red")
label2 = Label(root, width="5", height="3", bg="blue")


#column is always default 0
label1.grid(row=0, column=0)
label2.grid(row=1)
label2.grid(row=0, column=1)
label1.grid(row=1, column=1)

root.mainloop()

