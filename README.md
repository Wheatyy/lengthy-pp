# Introduction
This program prints a penis of user-specifiable length.  
I've accidentally rm'ed some of the files involved in this project so I decided to put it up here.
**penis3** is the pre-compiled binary.    
# Details
1. *penis.c* is the core of this code. It asks how long of a penis you wish to display on the screen, then prints *8* as the sack, a user-specified amount of *=* as the shaft and a *D* as the tip to finish it off.  
2. Then, it calls *again.c* , which asks if the user wants to display another penis. If the user agrees, it returns to Step 1. If not, it tells the user goodbye.  
3. If the user does say something stupid, it will ask again (through *sorry.c*) *sorry.c* repeats until the user either agrees or rejects.  
..Why am I doing this, though?

# Building
I'm not sure why you would even want this, but **IF** you do, just run `gcc -o [whatever] penis.c again.c sorry.c`, At least that works in Linux. I can NOT be arsed to use a VM to test this dumbass code in Windows.
