# text="welcome to jenny's lectures"
# text_split = text.split(" ")
# print(text_split)
import random
names=input("Enter everybody's name seperated by comma:")
names_list=names.split(",")
# print(names_list)
# length = len(names_list)
# random_choice = random.randint(0,length-1)
person = random.choice(names_list)
print(f"{person} will pay the bill")