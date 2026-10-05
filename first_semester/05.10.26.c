#include <stdio.h>
#include <time.h>

// 6. 9 identical coins
void counterfeitCoin() {

    int a, b, c;

    // First weighing
    printf("1-r jinlelt: 1 2 3 vs 4 5 6\n");

    int result;
    printf("Result:\n");
    printf("1 = zvvn taln hunghun\n");
    printf("2 = baruun taln hunghun\n");
    printf("3 = tentsvv\n");
    scanf("%d", &result);

    if (result == 1) {
        a = 1;
        b = 2;
        c = 3;
    }
    else if (result == 2) {
        a = 4;
        b = 5;
        c = 6;
    }
    else {
        a = 7;
        b = 8;
        c = 9;
    }

    // Second weighing
    printf("2-r jinlelt: %d vs %d\n", a, b);

    printf("Result:\n");
    printf("1 = %d hunghun\n", a);
    printf("2 = %d hunghun\n", b);
    printf("3 = tentsvv\n");
    scanf("%d", &result);

    if (result == 1)
        printf("Huuramch zoos  = %d\n", a);
    else if (result == 2)
        printf("Huuramch zoos  = %d\n", b);
    else
        printf("Huuramch zoos  = %d\n", c);
}


// 7. School time
void schoolLesson() {

    int lesson;
    int totalMinutes;

    printf("Hicheeliin dugaar: ");
    scanf("%d", &lesson);

    // Start at 09:00 = 0 minutes from 09:00
    totalMinutes = 0;

    for (int i = 1; i < lesson; i++) {

        // Previous lesson lasts 45 minutes
        totalMinutes += 45;

        // Break after previous lesson
        if (i % 2 == 1)
            totalMinutes += 5;
        else
            totalMinutes += 15;
    }

    int hour = 9 + totalMinutes / 60;
    int minute = totalMinutes % 60;

    printf("%d-r hicheel %02d:%02d tsagt ehlene.\n",
           lesson, hour, minute);

    // Lesson ends
    totalMinutes += 45;

    hour = 9 + totalMinutes / 60;
    minute = totalMinutes % 60;

    printf("%d-r hicheel %02d:%02d tsagt duusna.\n",
           lesson, hour, minute);

    // Break after this lesson
    if (lesson % 2 == 1)
        totalMinutes += 5;
    else
        totalMinutes += 15;

    hour = 9 + totalMinutes / 60;
    minute = totalMinutes % 60;

    printf("Zawsar %02d:%02d tsagt duusna.\n",
           hour, minute);
}


// 8. Huushuur
void huushuurPrice() {

    int A, B, N;
    int totalMungu;

    printf("1 huushuurin vne (tugrug mungu): ");
    scanf("%d %d", &A, &B);

    printf("Heden shirheg: ");
    scanf("%d", &N);

    totalMungu = (A * 100 + B) * N;

    printf("Niit vne: %d tugrug %d mungu\n",
           totalMungu / 100,
           totalMungu % 100);
}


// 9. emgen hums
void snail() {

    int H, A, B;
    int height = 0;
    int days = 0;

    printf("Modnii undur H: ");
    scanf("%d", &H);

    printf("Udurt awirah A: ");
    scanf("%d", &A);

    printf("Shunuduu dooshloh B: ");
    scanf("%d", &B);

    while (height < H) {

        // Day
        height += A;
        days++;

        if (height >= H)
            break;

        // Night
        height -= B;
    }

    printf("Oroid %d honogt hurne.\n", days);
}


// 10. undur jil
void checkYear() {

    int year;

    printf("On: ");
    scanf("%d", &year);

    if (year % 400 == 0)
        printf("%d on bol undur jil (366 honog).\n", year);

    else if (year % 100 == 0)
        printf("%d on bol engiin jil (365 honog).\n", year);

    else if (year % 4 == 0)
        printf("%d on bol undur jil (366 honog).\n", year);

    else
        printf("%d on bol engiin jil (365 honog).\n", year);
}


// 1. Sariin dugaaraar sariin neriig oloh
void printMonth(int month) {

    switch (month) {
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        case 4: printf("April"); break;
        case 5: printf("May"); break;
        case 6: printf("June"); break;
        case 7: printf("July"); break;
        case 8: printf("August"); break;
        case 9: printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
        default: printf("Invalid month");
    }
}


// 2. Nas tootsooloh
void calculateAge(int birthYear, int birthMonth, int birthDay) {

    time_t t = time(NULL);
    struct tm *today = localtime(&t);

    int year = today->tm_year + 1900;
    int month = today->tm_mon + 1;
    int day = today->tm_mday;

    int ageYear = year - birthYear;
    int ageMonth = month - birthMonth;
    int ageDay = day - birthDay;

    if (ageDay < 0) {
        ageDay += 30;
        ageMonth--;
    }

    if (ageMonth < 0) {
        ageMonth += 12;
        ageYear--;
    }

    printf("%d nas %d sar %d honogtoi\n",
           ageYear, ageMonth, ageDay);
}


int main() {

    // 1. Sariin ner
    int month;

    printf("Sariin dugaar: ");
    scanf("%d", &month);
    printMonth(month);
    printf("\n");


    // 2. Nas
    int birthYear, birthMonth, birthDay;

    printf("Tursun on, sar, udur: ");
    scanf("%d %d %d",
          &birthYear,
          &birthMonth,
          &birthDay);

    calculateAge(birthYear, birthMonth, birthDay);


    // 3. Davhar ba bair
    int index, apartments;

    printf("index, ail: ");
    scanf("%d %d", &index, &apartments);

    int floor = (index - 1) / apartments + 1;
    int number = (index - 1) % apartments + 1;

    printf("%d-r davhryn %d-r ail\n", floor, number);


    // 4. Daraagiin tegsh too
    int n;

    printf("Too: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d\n", n + 2);
    else
        printf("%d\n", n + 1);


    // 5. Tsagiin zvv
    int x;

    printf("x: ");
    scanf("%d", &x);


    // 6-10
    counterfeitCoin();
    schoolLesson();
    huushuurPrice();
    snail();
    checkYear();

    return 0;
}