int checkIfInteger()
{
    char userInput;
    int error=0;
    printf("Enter an integer:");
    scanf("%c", &userInput);
    for(int i=48;i<=57;i++)
    {
        if(userInput==i) //Checking for ASCII values of user input
        { 
        error=1; //Integer has ASCII value between 48-57
        break;
        }
    }
    if(error==1)
    printf("Integer");
    else
    printf("That's Not An Integer, Please Give a Proper Integer");
    return userInput;
}
