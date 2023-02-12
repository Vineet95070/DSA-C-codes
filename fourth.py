print("Vineet Bhardwaj\nBcah1ca21036\n")
def codes():
    list1 = []
    list2 = []

    x = int(input("Enter the Size of list : "))

    for i in range(x) :
        ele = int(input())
        list1.append(ele)

    for i in range(x) :

        if( list1[i] % 5 != 0) :
            for j in range(x) :
                list2.append(list1[i])
                break

    print(list2)
    


for i in range(4) :
   codes()


    

