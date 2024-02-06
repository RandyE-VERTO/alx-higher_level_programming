#!/usr/bin/python3
for f_num in range(0, 10):
    for s_num in range(f_num + 1, 10):
        if f_num == 8 and s_num == 9:
            print("{}{}".format(f_num, s_num))
        else:
            print("{}{}, ".format(f_num, s_num), end="")
