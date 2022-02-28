#include <stdio.h>  
#include <string.h>  
  
int main(){  
    int m, d;  
      
    scanf("%d%d", &m, &d);  
      
    switch(m){  
        case 1:  
            if(d <= 20) puts("Capricorn");  
            else puts("Aquarius");  
            break;  
        case 2:  
            if(d <= 18) puts("Aquarius");  
            else puts("Pisces");  
            break;  
        case 3:  
            if(d <= 20) puts("Pisces");  
            else puts("Aries");  
            break;  
        case 4:  
            if(d <= 20) puts("Aries");  
            else puts("Taurus");  
            break;  
        case 5:  
            if(d <= 21) puts("Taurus");  
            else puts("Gemini");  
            break;  
        case 6:  
            if(d <= 21) puts("Gemini");  
            else puts("Cancer");  
            break;  
        case 7:  
            if(d <= 22) puts("Cancer");  
            else puts("Leo");  
            break;  
        case 8:  
            if(d <= 23) puts("Leo");  
            else puts("Virgo");  
            break;  
        case 9:  
            if(d <= 23) puts("Virgo");  
            else puts("Libra");  
            break;  
        case 10:  
            if(d <= 23) puts("Libra");  
            else puts("Scorpio");  
            break;  
        case 11:  
            if(d <= 22) puts("Scorpio");  
            else puts("Sagittarius");  
            break;  
        case 12:  
            if(d <= 21) puts("Sagittarius");  
            else puts("Capricorn");  
            break;  
        default:  
            puts("crash");  
    }  
      
    return 0;  
}  
