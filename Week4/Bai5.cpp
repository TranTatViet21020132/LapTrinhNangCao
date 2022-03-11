bool isPrime (int number) {
    int count = 0;
    if (number < 2) {
        return false;
    } else if (number == 2) {
        return true;
    } else if (number > 2 && number % 2 == 0) {
        return false;
    } else {
        for (int i = 3; i <= sqrt(number); i+=2)
    {
        if (number % i == 0) {
            count++;
        }
    }
    if (count == 0) {
        return true;
    } else {
        return false;
    }
}
}
