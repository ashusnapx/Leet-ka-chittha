class Solution
{
    public:
        bool validUtf8(vector<int> &data)
        {
            int remainingBytes = 0;
            for (auto i: data)
            {
                if (remainingBytes == 0)
                {
                    if ((i >> 5) == 0b110)	// 1st byte of length 2 char
                    {
                        remainingBytes = 1;
                    }
                    else if ((i >> 4) == 0b1110)	// 1st byte of length 3 char
                    {
                        remainingBytes = 2;
                    }
                    else if ((i >> 3) == 0b11110)	// 1st byte of length 4 char
                    {
                        remainingBytes = 3;
                    }
                    else if ((i >> 7) != 0b0)	// 1st byte of 1 length char
                    {
                        return false;
                    }
                }
                else
                {
                   	// if ((i >> 6) == 0b10)
                   	// {
                   	//     remainingBytes--;
                   	// }
                   	// else
                   	// {
                   	//     return false;
                   	// }
                    if ((i >> 6) != 0b10)
                    {
                        return false;
                    }
                    remainingBytes--;
                }
            }
            if (remainingBytes == 0)
            {
                return true;
            }

            return false;
        }
};