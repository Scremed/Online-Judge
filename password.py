def checkPassword(password):
    upperChars, lowerChars, specialChars, digits, length = 0, 0, 0, 0, 0
    length = len(password)

    if (length < 6):
        print ("password must be at least 6 characters long!\n")
    else:
        for i in range(0, length):
            if (password[i].isupper()):
                upperChars += 1
            elif (password[i].islower()):
                lowerChars += 1
            elif (password[i].isdigit()):
                digits += 1
            else:
                specialChars += 1


    if (upperChars != 0 and lowerChars != 0 and digits != 0 and specialChars != 0):
        if (length >= 10):
            print("The strength of the password is apik.\n")
        else :
            print("The strength of the password is bsw ah.\n")
    else:
        if (upperChars == 0):
            print("password mu kurang uppercase character goblog!\n")
        if (lowerChars == 0):
            print("password mu kurang lowercase character goblog!\n")
        if (specialChars == 0):
            print("password mu kurang special character goblog!\n")
        if (digits == 0):
            print("password mu minimal ada angka goblog!\n")
        
        password = input("please enter password: ")
        checkPassword(password)