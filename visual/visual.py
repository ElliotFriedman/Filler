from tkinter import *

root = Tk()

#create a container that grabs from our root
topFrame = Frame(root)
topFrame.pack()

bottomFrame = Frame(root)
bottomFrame.pack(side=BOTTOM)

button1 = Button(topFrame, text="clickME", fg="blue")
button2 = Button(bottomFrame, text="clickME", fg="red")

button1.pack(side=LEFT)
button2.pack(side=LEFT)

root.mainloop()

