#include <stdio.h>
#include <stdlib.h> 
int main()  
{  
    char name[20];
    printf("Enter you name:");
    fgets(name,20,stdin);
    
    
    int m, day;
    printf("==============================================\n\n");
    printf("     Hi %s                     \n", name);
    printf("     Welcome to the fortune teller        \n"); 
    printf("     Enter your birth month(1-12):        \n"); 
    scanf("%d", &m);  
  
    printf("    Enter your birth day:\n");  
    scanf("%d", &day);  
  
    if( (m == 12 && day >= 22) || (m == 1 && day <= 19) )  
    {  
        printf("==============================================\n\n");
        printf("Your horoscope sign is Capricorn-  The Goat\n");
        printf("_\n");
        printf("\\      /_)\n");
        printf("\\    /`.\n");
        printf("\\  /   ;\n");
        printf("\\/ __.'\n\n"); 
    }  
    else if( (m == 1 && day >= 20) || (m == 2 && day <= 17) )  
    {  
        printf("==============================================\n\n");
        printf("Your horoscope sign is Aquarius-The Water Bearer\n");
        printf("..-\"-._.-\"-._.-\n");
        printf("..-\"-._.-\"-._.-\n\n"); 
    }  
    else if( (m == 2 && day >= 18) || (m == 3 && day <= 19) )  
    {  
        printf("==============================================\n\n");
        printf("Your horoscope sign is Pisces-The Fishes\n");
        printf("`-.    .-'\n");
        printf(":  :\n");
        printf("--:--:--\n");
        printf(":  :\n");
        printf(".-`    `-.\n\n");
    }  
    else if( (m == 3 && day >= 20) || (m == 4 && day <= 19) )  
    {  
        printf("==============================================\n\n");
         printf("Your horoscope sign is Aries-The Ram\n");
        printf(".-.   .-.\n");
        printf("(_  \\ /  _)\n");
        printf("|\n");
        printf("|\n\n"); 
    }  
    else if( (m == 4 && day >= 20) || (m == 5 && day <= 20) )  
    {  
        printf("==============================================\n\n");
        printf("Your horoscope sign is Taurus-The Bull\n");
        printf(".     .\n");
        printf("'.___.'\n");
        printf(".'   `.\n");
        printf(":       :\n");
        printf(":       :\n");
        printf("`.___.'\n\n"); 
    }  
    else if( (m == 5 && day >= 21) || (m == 6 && day <= 20) )  
    {  
        printf("==============================================\n\n");
        printf("Your horoscope sign is Gemini-The Twins\n");
        printf("._____.\n");
        printf("| |\n");
        printf("| |\n");
        printf("| |\n");
        printf("_|_|_\n");
        printf("'     `\n\n");  
    }  
    else if( (m == 6 && day >= 21) || (m == 7 && day <= 22) )  
    {  
        printf("==============================================\n\n");
        printf("Your horoscope sign is Cancer-The Crab\n");
        printf(".--.\n");
        printf("/   _`.\n");
        printf("(_) ( )\n");
        printf("'.    /\n");
        printf("  `--'\n\n"); 
    }  
    else if( (m == 7 && day >= 23) || (m == 8 && day <= 22) )  
    {  
        printf("==============================================\n\n");
        printf("Your horoscope sign is Leo-The Lion\n");
        printf(".--.\n");
        printf("(    )\n");
        printf("(_)  /\n");
        printf("(_,\n\n");  
    }  
    else if( (m == 8 && day >= 23) || (m == 9 && day <= 22) )  
    {  
        printf("==============================================\n\n");
        printf("Your horoscope sign is Virgo-The Virgin\n");
        printf("_\n");
        printf("' `:--.--.\n");
        printf("|  |  |_\n");
        printf("|  |  | )\n");
        printf("|  |  |/\n");
        printf("(J\n\n");  
    }  
    else if( (m == 9 && day >= 23) || (m == 10 && day <= 22) )  
    {  
        printf("==============================================\n\n");
        printf("Your horoscope sign is Libra-The Balance\n");
        printf("__\n");
        printf("___.'  '.___\n");
        printf("____________\n\n"); 
    }  
    else if( (m == 10 && day >= 23) || (m == 11 && day <= 21) )  
    {  
        printf("==============================================\n\n");
        printf("Your horoscope sign is Scorpius-The Scorpion\n");
        printf("_\n");
        printf("' `:--.--.\n");
        printf("|  |  |\n");
        printf("|  |  |\n");
        printf("|  |  |  ..,\n");
        printf("`---':\n"); 
    }  
    else if( (m == 11 && day >= 22) || (m == 12 && day <= 21) )  
    {  
        printf("==============================================\n\n");
        printf("Your horoscope sign is Sagittarius-  The Archer\n");
        printf("...\n");
        printf(".':\n");
        printf(".'\n");
        printf("`..'\n");
        printf(".'`.\n\n");  
    }  
    else  
    { 
        printf("Invalid Birth date entered\n");  
    }  
    printf("Please pick a number to continue:");
    printf("1.About me");
    printf("2.Lucky numbers");
    printf("3.Love Compatibilty");
    printf("4.Fortunes");
    printf("5.Exit");
           
    
    return 0;  
}  
