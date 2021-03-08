# WeddingPlanner
You are planning the seating arrangement for a wedding given a list of guests,
V Suppose you are also given a lookup table T where T[u] for u ∈ V is a list of guests that u knows.
If u knows v, then v knows u.
You are required to arrange the seating such that any guest at a table knows every other guest sitting at the same table either directly or through some other guests sitting at the same table.
For example, if x knows y, and y knows z, then x, y, z can sit at the same table. Describe an efficient algorithm that, given V and T, returns the minimum number of tables needed to achieve this requirement.
Sample Input:
number of guests:  4
Guest number 1 Name: ahmed
Guest number 2 Name: karim
Guest number 3 Name: mohamed
Guest number 4 Name: islam
please enter number of guests that know ahmed : 2
Guest number 1 :  karim
Guest number 2 :  mohamed
please enter number of guests that know karim : 1
Guest number 1 :  ahmed
please enter number of guests that know mohamed : 1
Guest number 1 :  ahmed
please enter number of guests that know islam : 0


Sample Output:
Number of tables: 2
