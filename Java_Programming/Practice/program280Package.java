package Marvellous;

public class StringX
{
    public int CountCapital(String str)
    {
        int iCount = 0, iCnt = 0;

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                iCount++;
            }
        }

        return iCount;
    }

    public int CountSmall(String str)
    {
        int iCount = 0, iCnt = 0;

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
            {
                iCount++;
            }
        }

        return iCount;
    }

    public int CountDigits(String str)
    {
        int iCount = 0, iCnt = 0;

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= '0' && Arr[iCnt] <= '9')
            {
                iCount++;
            }
        }

        return iCount;
    }

    public int CountSpace(String str)
    {
        int iCount = 0, iCnt = 0;

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == ' ')
            {
                iCount++;
            }
        }

        return iCount;
    }

    public int CountSpecial(String str)
    {
        int iCount = 0, iCnt = 0;

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= '!' && Arr[iCnt] <= '/') || 
               (Arr[iCnt] >= ':' && Arr[iCnt] <= '@') || 
               (Arr[iCnt] >= '[' && Arr[iCnt] <= '`') || 
               (Arr[iCnt] >= '{' && Arr[iCnt] <= '~'))
            {
                iCount++;
            }
        }

        return iCount;
    }
}