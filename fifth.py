print("Name\nRoll NO\n")
def codes():

    list1 = []
    x = int(input("Enter the size of list : "))

    for i in range(x) :
        ele = int(input())
        list1.append(ele)

    # Python prog to illustrate the following in a list
    length = len(list1)
    list1.sort()

    print(list1[length-2]," ",list1[1])
    print("\n")


for i in range(4) :
   codes()
