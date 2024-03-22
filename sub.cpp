#include <string>

std::string sub(std::string first, std::string second)
{
    std::string subb = "";

    int first_size = first.size();
    int second_size = second.size();
    int fs = 0; // 0이면 first가 더 큰 값, 1이면 second가 더 큰값

    if(first_size > second_size)
    {
        fs = 0;
    }
    else if( first_size < second_size)
    {
        fs = 1;
    }
    else
    {
        for(int i = 0; i<first_size; i++)
        {
                if(first[i] > second[i])
                {
                    fs = 0;
                    break;
                }
                else if(first[i] < second[i])
                {
                    fs = 1;
                    break;
                }
        }
    }
    while(true)
    {
        
    }
    


    while(true)
    {
        if(subb[0] == '0')
        {
            subb.erase(0,1);
        }
        else
            break;
    }
    if(subb == "")
    {
        subb.insert(0,"0");
    }

    
    return subb;
}