#include <string>

// git ignore 검색
std::string sum(std::string first, std::string second)
{
    std::string summ ="";

    int first_size = first.size() -1 ;
    int second_size = second .size() -1 ;
    

    int upNum = 0; // 올림 수
    while(true)
    {   
        int changeInt;
        
        if(first_size < 0 && second_size < 0)
        {
            break;
        }

        else if( first_size > -1 &&  second_size > -1)
        {
            changeInt = int(first[first_size] + second[second_size])-48*2  + upNum;


            if( first_size == 0 && second_size == 0)
            {
                summ.insert(0, std::to_string(changeInt));
                break;
            }
            else
            {
                summ.insert(0, std::to_string(changeInt % 10));
            }
            
            
        }

        else if (first_size > -1 && second_size <= -1)
        {
            changeInt = int(first[first_size])-48 + upNum;
            if(first_size == 0)
            {
                summ.insert(0 , std::to_string(changeInt));
                break;
            }
            else
            {
                summ.insert(0, std::to_string(changeInt % 10));
            }
        }

        else if(first_size <= -1 && second_size > -1)
        {
            changeInt = int(second[second_size])-48 + upNum;
            if(second_size == 0)
            {
                summ.insert(0 , std::to_string(changeInt));
                break;
            }
            else
            {
                summ.insert(0, std::to_string(changeInt % 10));
            }
        }



        upNum = changeInt / 10 ;

        first_size--;
        second_size--;
    }
   
    return summ;
}