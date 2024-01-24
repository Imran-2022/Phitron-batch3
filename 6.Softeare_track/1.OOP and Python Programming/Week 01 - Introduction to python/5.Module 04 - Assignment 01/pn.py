import pyautogui
import time
time.sleep(3)

x = int(input("Enter the value of x: "))
for i in range(1, x + 1):
    for j in range(i):
        pyautogui.write("i love you !")
    pyautogui.press("enter")
    pyautogui.press("home")

