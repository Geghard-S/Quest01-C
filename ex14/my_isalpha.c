int my_isalpha(char letter)
{
    if((letter >= 97 && letter <= 122) || (letter >= 65 && letter <= 90)){
        return 1;
    }else{
        return 0;
    }
}