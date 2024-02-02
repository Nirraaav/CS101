#include <simplecpp>

main_program{
    int y, d, m;
    cin >> y >> d;

    if((y < 1900) || (y > 2300)){
        cout << "invalid year" << "\n";
        if((d < 1) || (d > 366)){
            cout << "invalid date" << "\n";
        }
        return 0;
    }  

    bool leap_year = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    
    if((d < 1)){
        cout << "invalid date" << "\n";
        return 0;
	}else if(leap_year && (d > 366)){
        cout << "invalid date" << "\n";		
        return 0; 
    }else if(!leap_year && (d > 365)){
        cout << "invalid date" << "\n";	
	   return 0;
    }

    if(leap_year){
        if(d <= 31){
            m = 1;
        }else if(d <= 60){
            m = 2;
            d -= 31;
        }else if(d <= 91){
            m = 3;
            d -= 60;
        }else if(d <= 121){
            m = 4;
            d -= 91;
        }else if(d <= 152){
            m = 5;
            d -= 121;
        }else if(d <= 182){
            m = 6;
            d -= 152;
        }else if(d <= 213){
            m = 7;
            d -= 182;
        }else if(d <= 244){
            m = 8;
            d -= 213;
        }else if(d <= 274){
            m = 9;
            d -= 244;
        }else if(d <= 305){
            m = 10;
            d -= 274;
        }else if(d <= 335){
            m = 11;
            d -= 305;
        }else{
            m = 12;
            d -= 335;
        }
    }else{
        if(d <= 31){
            m = 1;
        }else if(d <= 59){
            m = 2;
            d -= 31;
        }else if(d <= 90){
            m = 3;
            d -= 59;
        }else if(d <= 120){
            m = 4;
            d -= 90;
        }else if(d <= 151){
            m = 5;
            d -= 120;
        }else if(d <= 181){
            m = 6;
            d -= 151;
        }else if(d <= 212){
            m = 7;
            d -= 181;
        }else if(d <= 243){
            m = 8;
            d -= 212;
        }else if(d <= 273){
            m = 9;
            d -= 243;
        }else if(d <= 304){
            m = 10;
            d -= 273;
        }else if(d <= 334){
            m = 11;
            d -= 304;
        }else{
            m = 12;
            d -= 334;
        }
    }

    cout << d << "/" << m << "/" << y << "\n";
}