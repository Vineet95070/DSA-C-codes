print("Vineet Bhardwaj\nBcah1ca21036\n")
def codes():

    b = input("Enter binary digit : ")
    zero = 0
    one = 0

    for i in range(len(b)) :
        char = b[i]

        if (char == '0') :
            zero = zero + 1
    
        else :
            one = one + 1

    if one == 1 :
        print("Yes")

    elif zero == 1 :
        print("Yes")

    else :
        print("No")



for i in range(3) :
    codes()



