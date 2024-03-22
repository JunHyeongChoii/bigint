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

//----뺄셈하기 편하기 위해 큰 값을 newFirst 작은 값을 newSecond에 값을 넣어준다.------------ 
    std::string newFirst;   // firtst와 second중 더 큰 값
    std::string newSecond;  //                   더 작은 값
   

    if(fs == 0)
    {
        newFirst = first;
        newSecond = second;
    }

    else
    {
        newFirst = second;
        newSecond = first;
    }

    int newFirstSize = newFirst.size()-1;
    int newSecondSize = newSecond.size()-1;
    
//---------------------

    int downNum = 0;
    // 뺄셈하는 부분
    while(true)
    {
        int changeSub = 0;
        
        if ( newFirstSize < 0 && newSecondSize < 0 )
        {
            break;
        }

        else if (newFirstSize > -1 && newSecondSize > -1)
        {
            changeSub = (int(newFirst[newFirstSize]) -48) - (int(newSecond[newSecondSize]) - 48) + downNum; 
        }

        else if (newFirstSize > -1 && newSecondSize < 0)
        {
            changeSub = int(newFirst[newFirstSize]) -48 + downNum;
        }

        
        if(changeSub < 0)
            {
                downNum = -1;
                changeSub += 10;
                subb.insert(0, std::to_string(changeSub));
            }
        else
            {
                subb.insert(0, std::to_string(changeSub));
                downNum = 0;
            }


        newFirstSize--;
        newSecondSize--;
    
    }
    


    // 0000123 이렇게 되는 경우 123으로 고치는 과정
    while(true)
    {
        if(subb[0] == '0')
        {
            subb.erase(0,1);
        }
        else
            break;
    }
    // 결과과 0인 경우 위 while문에서 0을 다 지워버리므로 0을 추가해준다.
    if(subb == "")
    {
        subb.insert(0,"0");
    }
    else if(fs == 1)
    {
        subb.insert(0,"-");
    }

    
    return subb;
}