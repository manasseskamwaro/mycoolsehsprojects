list1 = [1,1,1]
list2 = [1,1,1]
list3 = [1,1,1]
matrix = [list1,list2,list3]
print(f"{list1}\n{list2}\n{list3}")
position = input("Enter position to hide money:")
# 32
row_number = int(position[0])
column_number = int(position[1])

row_selected = matrix[row_number - 1]
row_selected[column_number - 1] = 'x'
print(f"{list1}\n{list2}\n{list3}")